/*
 STM32F03k6.h
*/

#ifndef INC_STM32F030K6XX_H_
#define INC_STM32F030K6XX_H_

#include<stdint.h>

#define __vo volatile // Every time the CPU reads __vo it will search the value. Sometimes, the CPU cache the value of this variable in order to optmize.

#define FLASH_BASEADDR                 0x08000000U
#define SRAM1_BASEADDR                 0x02000000U
#define SRAM                           SRAM1_BASEADDR
#define ROM                            0x1FFFEC00U


#define PERIH_BASE                     0x40000000U
#define APB1_BASEADDR                  PERIH_BASE
#define APB2_BASEADDR                  0x40010000U
#define AHB1_BASEADDR                  0x40020000U
#define AHB2_BASEADDR                  0x48000000U


#define GPIOABASEADDR                  (AHB2_BASEADDR)
#define GPIOBBASEADDR                  (AHB2_BASEADDR + 0x0400)
#define RCC_BASEDDR                    (AHB1_BASEADDR + 0x1000)

typedef struct {

    __vo uint32_t MODER;
    __vo uint32_t OTYPER;
    __vo uint32_t OSPEEDR;
    __vo uint32_t PUPDR;
    __vo uint32_t IDR;
    __vo uint32_t ODR;
    __vo uint32_t BSRR;
    __vo uint32_t LCKR;
    __vo uint32_t AFRL;
    __vo uint32_t AFRH;
    __vo uint32_t BRR;


}GPIO_RegDef_t;

typedef struct {

    __vo uint32_t CR;
    __vo uint32_t CFGR;
    __vo uint32_t CIR;
    __vo uint32_t APB2RSTR;
    __vo uint32_t APB1RSTR;
    __vo uint32_t AHBENRR;
    __vo uint32_t APB2ENR;
    __vo uint32_t APB1ENR;
    __vo uint32_t BDCR;
    __vo uint32_t CSR;
    __vo uint32_t AHBRSTR;
    __vo uint32_t CFGR2;
    __vo uint32_t CFGR3R;
    __vo uint32_t CR2;


}RCC_RegDef_t;

#define GPIOA ((GPIO_RegDef_t*)GPIOABASEADDR)
#define GPIOB ((GPIO_RegDef_t*)GPIOBBASEADDR)
#define RCC ((RCC_RegDef_t*)RCC_BASEDDR)

#define GPIOA_PCLK_EN()      (RCC-> AHBENRR |= (1 << 17))
#define GPIOB_PCLK_EN()      (RCC-> AHBENRR |= (1 << 18))

#endif