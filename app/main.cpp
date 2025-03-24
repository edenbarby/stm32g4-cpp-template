// // #include <cstdint>

// #include "stm32g431xx.h"
// #include "stm32g4xx_ll_bus.h"
// #include "stm32g4xx_ll_gpio.h"

// // #include "stm32g4xx_ll_rcc.h"
// // #include "stm32g4xx_ll_system.h"
// // #include "stm32g4xx_ll_utils.h"

// // void init_sysclk(void);

// int main(void)
// {
//     volatile unsigned long i = 0;

//     LL_GPIO_InitTypeDef gpio_init_struct;

//     // init_sysclk();

//     LL_AHB2_GRP1_EnableClock(LL_AHB2_GRP1_PERIPH_GPIOC);

//     LL_GPIO_StructInit(&gpio_init_struct);
//     gpio_init_struct.Mode = LL_GPIO_MODE_OUTPUT;
//     gpio_init_struct.Pin = LL_GPIO_PIN_6;
//     LL_GPIO_Init(GPIOC, &gpio_init_struct);

//     while (1)
//     {
//         LL_GPIO_TogglePin(GPIOC, LL_GPIO_PIN_6);
//         for (i = 0; i < 1024843; i += 1)
//         {
//         }
//         // LL_mDelay(500);
//     }
//     return 0;
// }

// /* Clock configuration:
// ** PLL Source:        HSI
// ** PLLM:              4
// ** PLLN:              50
// ** PLLP:              2
// ** SYSCLK Source:     PLL
// ** SYSCLK:            100MHz
// ** AHB1 Prescaler:    1
// ** AHB1:              100MHz
// ** HCLK:              100MHz
// ** APB1 Prescaler:    2
// ** APB1:              50MHz
// ** APB2 Prescaler:    1
// ** APB2:              100MHz
// ** VDD:               3.3V
// ** Flash Wait States: 3 (see table 6 from RM0401)
// */
// // void init_sysclk(void)
// // {
// //     // LL_FLASH_SetLatency(LL_FLASH_LATENCY_4);

// //     // LL_RCC_PLL_ConfigDomain_SYS(LL_RCC_PLLSOURCE_HSI, LL_RCC_PLLM_DIV_4, 50,
// //     LL_RCC_PLLP_DIV_2);
// //     // LL_RCC_PLL_Enable();
// //     // while (LL_RCC_PLL_IsReady() != 1)
// //     // {
// //     // }

// //     // LL_RCC_SetAHBPrescaler(LL_RCC_SYSCLK_DIV_1);
// //     // LL_RCC_SetSysClkSource(LL_RCC_SYS_CLKSOURCE_PLL);
// //     // while (LL_RCC_GetSysClkSource() != LL_RCC_SYS_CLKSOURCE_STATUS_PLL)
// //     // {
// //     // }

// //     // LL_RCC_SetAPB1Prescaler(LL_RCC_APB1_DIV_2);
// //     // LL_RCC_SetAPB2Prescaler(LL_RCC_APB2_DIV_1);

// //     // LL_SetSystemCoreClock(100000000);
// //     LL_SetSystemCoreClock();

// //     LL_Init1msTick(100000000);
// // }

// #include <cmsis_compiler.h>
#include <core_cm4.h>
#include <stm32g431xx.h>
#include <stm32g4xx_hal.h>
#include <stm32g4xx_hal_gpio.h>

int main()
{
    volatile unsigned long i = 0;

    HAL_Init();

    // PC6 is the status LED.
    GPIO_InitTypeDef pin_config = {6, MODE_OUTPUT, GPIO_NOPULL, GPIO_SPEED_FREQ_LOW, 0x0};
    HAL_GPIO_Init(GPIOC, &pin_config);

    // asm volatile("cpsie i");
    __enable_irq();

    while (true)
    {
        HAL_GPIO_TogglePin(GPIOC, 6);

        // for (i = 0; i < 1024843; ++i)
        // {
        // }
        HAL_Delay(500);
    }
}

void Default_Handler(void)
{
    while (true)
    {
    }
}

void SysTick_Handler(void)
{
    HAL_IncTick();
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

void WWDG_IRQHandler(void)
{
    while (true)
    {
    }
}

void PVD_PVM_IRQHandler(void)
{
    while (true)
    {
    }
}

void RTC_TAMP_LSECSS_IRQHandler(void)
{
    while (true)
    {
    }
}

void RTC_WKUP_IRQHandler(void)
{
    while (true)
    {
    }
}

void FLASH_IRQHandler(void)
{
    while (true)
    {
    }
}

void RCC_IRQHandler(void)
{
    while (true)
    {
    }
}

void EXTI0_IRQHandler(void)
{
    while (true)
    {
    }
}

void EXTI1_IRQHandler(void)
{
    while (true)
    {
    }
}

void EXTI2_IRQHandler(void)
{
    while (true)
    {
    }
}

void EXTI3_IRQHandler(void)
{
    while (true)
    {
    }
}

void EXTI4_IRQHandler(void)
{
    while (true)
    {
    }
}

void DMA1_Channel1_IRQHandler(void)
{
    while (true)
    {
    }
}

void DMA1_Channel2_IRQHandler(void)
{
    while (true)
    {
    }
}

void DMA1_Channel3_IRQHandler(void)
{
    while (true)
    {
    }
}

void DMA1_Channel4_IRQHandler(void)
{
    while (true)
    {
    }
}

void DMA1_Channel5_IRQHandler(void)
{
    while (true)
    {
    }
}

void DMA1_Channel6_IRQHandler(void)
{
    while (true)
    {
    }
}

void ADC1_2_IRQHandler(void)
{
    while (true)
    {
    }
}

void USB_HP_IRQHandler(void)
{
    while (true)
    {
    }
}

void USB_LP_IRQHandler(void)
{
    while (true)
    {
    }
}

void FDCAN1_IT0_IRQHandler(void)
{
    while (true)
    {
    }
}

void FDCAN1_IT1_IRQHandler(void)
{
    while (true)
    {
    }
}

void EXTI9_5_IRQHandler(void)
{
    while (true)
    {
    }
}

void TIM1_BRK_TIM15_IRQHandler(void)
{
    while (true)
    {
    }
}

void TIM1_UP_TIM16_IRQHandler(void)
{
    while (true)
    {
    }
}

void TIM1_TRG_COM_TIM17_IRQHandler(void)
{
    while (true)
    {
    }
}

void TIM1_CC_IRQHandler(void)
{
    while (true)
    {
    }
}

void TIM2_IRQHandler(void)
{
    while (true)
    {
    }
}

void TIM3_IRQHandler(void)
{
    while (true)
    {
    }
}

void TIM4_IRQHandler(void)
{
    while (true)
    {
    }
}

void I2C1_EV_IRQHandler(void)
{
    while (true)
    {
    }
}

void I2C1_ER_IRQHandler(void)
{
    while (true)
    {
    }
}

void I2C2_EV_IRQHandler(void)
{
    while (true)
    {
    }
}

void I2C2_ER_IRQHandler(void)
{
    while (true)
    {
    }
}

void SPI1_IRQHandler(void)
{
    while (true)
    {
    }
}

void SPI2_IRQHandler(void)
{
    while (true)
    {
    }
}

void USART1_IRQHandler(void)
{
    while (true)
    {
    }
}

void USART2_IRQHandler(void)
{
    while (true)
    {
    }
}

void USART3_IRQHandler(void)
{
    while (true)
    {
    }
}

void EXTI15_10_IRQHandler(void)
{
    while (true)
    {
    }
}

void RTC_Alarm_IRQHandler(void)
{
    while (true)
    {
    }
}

void USBWakeUp_IRQHandler(void)
{
    while (true)
    {
    }
}

void TIM8_BRK_IRQHandler(void)
{
    while (true)
    {
    }
}

void TIM8_UP_IRQHandler(void)
{
    while (true)
    {
    }
}

void TIM8_TRG_COM_IRQHandler(void)
{
    while (true)
    {
    }
}

void TIM8_CC_IRQHandler(void)
{
    while (true)
    {
    }
}

void LPTIM1_IRQHandler(void)
{
    while (true)
    {
    }
}

void SPI3_IRQHandler(void)
{
    while (true)
    {
    }
}

void UART4_IRQHandler(void)
{
    while (true)
    {
    }
}

void TIM6_DAC_IRQHandler(void)
{
    while (true)
    {
    }
}

void TIM7_IRQHandler(void)
{
    while (true)
    {
    }
}

void DMA2_Channel1_IRQHandler(void)
{
    while (true)
    {
    }
}

void DMA2_Channel2_IRQHandler(void)
{
    while (true)
    {
    }
}

void DMA2_Channel3_IRQHandler(void)
{
    while (true)
    {
    }
}

void DMA2_Channel4_IRQHandler(void)
{
    while (true)
    {
    }
}

void DMA2_Channel5_IRQHandler(void)
{
    while (true)
    {
    }
}

void UCPD1_IRQHandler(void)
{
    while (true)
    {
    }
}

void COMP1_2_3_IRQHandler(void)
{
    while (true)
    {
    }
}

void COMP4_IRQHandler(void)
{
    while (true)
    {
    }
}

void CRS_IRQHandler(void)
{
    while (true)
    {
    }
}

void SAI1_IRQHandler(void)
{
    while (true)
    {
    }
}

void FPU_IRQHandler(void)
{
    while (true)
    {
    }
}

void RNG_IRQHandler(void)
{
    while (true)
    {
    }
}

void LPUART1_IRQHandler(void)
{
    while (true)
    {
    }
}

void I2C3_EV_IRQHandler(void)
{
    while (true)
    {
    }
}

void I2C3_ER_IRQHandler(void)
{
    while (true)
    {
    }
}

void DMAMUX_OVR_IRQHandler(void)
{
    while (true)
    {
    }
}

void DMA2_Channel6_IRQHandler(void)
{
    while (true)
    {
    }
}

void CORDIC_IRQHandler(void)
{
    while (true)
    {
    }
}

void FMAC_IRQHandler(void)
{
    while (true)
    {
    }
}