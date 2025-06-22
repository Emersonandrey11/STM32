/*
 STM32F03k6.h
*/

#ifndef INC_STM32F030K6XX_H_
#define INC_STM32F030K6XX_H_

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


#endif