#include <stm32g431xx.h>
#include <stm32g4xx_hal.h>
#include <stm32g4xx_hal_cortex.h>
#include <stm32g4xx_hal_gpio.h>
#include <stm32g4xx_hal_rcc.h>

extern "C"
{
    extern void SysTick_Handler(void)
    {
        HAL_IncTick();
    }
}

int main()
{
    HAL_Init();

    __HAL_RCC_GPIOC_CLK_ENABLE();

    // PC6 is the status LED.
    GPIO_InitTypeDef pin_config = {GPIO_PIN_6, MODE_OUTPUT, GPIO_NOPULL, GPIO_SPEED_FREQ_LOW, 0x0};
    HAL_GPIO_Init(GPIOC, &pin_config);

    while (true)
    {
        HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_6);

        HAL_Delay(1000);
    }
}