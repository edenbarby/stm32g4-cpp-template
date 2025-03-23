#include <stm32g431xx.h>
#include <stm32g4xx_hal.h>
#include <stm32g4xx_hal_gpio.h>

int main()
{
    volatile size_t i = 0;

    HAL_Init();

    // PC6 is the status LED.
    GPIO_InitTypeDef pin_config = {6, MODE_OUTPUT, GPIO_NOPULL, GPIO_SPEED_FREQ_LOW, 0x0};
    HAL_GPIO_Init(GPIOC, &pin_config);

    while (true)
    {
        HAL_GPIO_TogglePin(GPIOC, 6);

        // for (i = 0; i < 100000; ++i)
        // {
        // }
        HAL_Delay(500);
    }
}

void NMI_Handler(void)
{
    while (true)
    {
    }
}

void HardFault_Handler(void)
{
    while (true)
    {
    }
}

void MemManage_Handler(void)
{
    while (true)
    {
    }
}

void BusFault_Handler(void)
{
    while (true)
    {
    }
}

void UsageFault_Handler(void)
{
    while (true)
    {
    }
}

void SVC_Handler(void)
{
    while (true)
    {
    }
}

void DebugMon_Handler(void)
{
    while (true)
    {
    }
}

void PendSV_Handler(void)
{
    while (true)
    {
    }
}

void SysTick_Handler(void)
{
    while (true)
    {
    }
}

void WWDG_IRQHandler(void)
{
    while (true)
    {
    }
}