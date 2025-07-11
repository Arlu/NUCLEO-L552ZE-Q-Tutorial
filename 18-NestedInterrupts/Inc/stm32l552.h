/*
 * stm32l552.h
 *
 *  Created on: May 15, 2025
 *      Author: Arie
 */

#ifndef STM32L552_H_
#define STM32L552_H_

#define GPIOA_BASE_ADDR   (0x42020000UL)
#define GPIOB_BASE_ADDR   (0x42020400UL)
#define GPIOC_BASE_ADDR   (0x42020800UL)
#define GPIOD_BASE_ADDR   (0x42020C00UL)
#define GPIOE_BASE_ADDR   (0x42021000UL)
#define GPIOF_BASE_ADDR   (0x42021400UL)
#define GPIOG_BASE_ADDR   (0x42021800UL)
#define GPIOH_BASE_ADDR   (0x42021C00UL)
#define RCC_BASE_ADDR 	  (0x40021000UL)

// GPIO port mode register (GPIOx_MODER) (x =A to H):
typedef struct {
    volatile uint32_t MODER0 : 2;
    volatile uint32_t MODER1 : 2;
    volatile uint32_t MODER2 : 2;
    volatile uint32_t MODER3 : 2;
    volatile uint32_t MODER4 : 2;
    volatile uint32_t MODER5 : 2;
    volatile uint32_t MODER6 : 2;
    volatile uint32_t MODER7 : 2;
    volatile uint32_t MODER8 : 2;
    volatile uint32_t MODER9 : 2;
    volatile uint32_t MODER10 : 2;
    volatile uint32_t MODER11 : 2;
    volatile uint32_t MODER12 : 2;
    volatile uint32_t MODER13 : 2;
    volatile uint32_t MODER14 : 2;
    volatile uint32_t MODER15 : 2;
} GPIO_MODER_BitField;

#define RESET_MODE 0b00
#define INPUT_MODE 0b00
#define OUTPUT_MODE 0b01
#define ALTERNATE_MODE 0b10
#define ANALOG_MODE 0b11

// GPIO port output type register (GPIOx_OTYPER) (x = A to H):
typedef struct {
    volatile uint32_t OT0 : 1;       // Pin 0 output type
    volatile uint32_t OT1 : 1;       // Pin 1 output type
    volatile uint32_t OT2 : 1;       // Pin 2 output type
    volatile uint32_t OT3 : 1;       // Pin 3 output type
    volatile uint32_t OT4 : 1;       // Pin 4 output type
    volatile uint32_t OT5 : 1;       // Pin 5 output type
    volatile uint32_t OT6 : 1;       // Pin 6 output type
    volatile uint32_t OT7 : 1;       // Pin 7 output type
    volatile uint32_t OT8 : 1;       // Pin 8 output type
    volatile uint32_t OT9 : 1;       // Pin 9 output type
    volatile uint32_t OT10 : 1;      // Pin 10 output type
    volatile uint32_t OT11 : 1;      // Pin 11 output type
    volatile uint32_t OT12 : 1;      // Pin 12 output type
    volatile uint32_t OT13 : 1;      // Pin 13 output type
    volatile uint32_t OT14 : 1;      // Pin 14 output type
    volatile uint32_t OT15 : 1;      // Pin 15 output type
    volatile uint32_t RESERVED : 16; // Reserved bits 16-31
} GPIO_OTYPER_BitField;

#define OUTPUT_PUSH_PULL 0b0
#define OUTPUT_OPEN_DRAIN 0b1

// GPIO port output speed register (GPIOx_OSPEEDR) (x = A to H):
typedef struct {
    volatile uint32_t OSPEEDR0 : 2;  // Pin 0 output speed
    volatile uint32_t OSPEEDR1 : 2;  // Pin 1 output speed
    volatile uint32_t OSPEEDR2 : 2;  // Pin 2 output speed
    volatile uint32_t OSPEEDR3 : 2;  // Pin 3 output speed
    volatile uint32_t OSPEEDR4 : 2;  // Pin 4 output speed
    volatile uint32_t OSPEEDR5 : 2;  // Pin 5 output speed
    volatile uint32_t OSPEEDR6 : 2;  // Pin 6 output speed
    volatile uint32_t OSPEEDR7 : 2;  // Pin 7 output speed
    volatile uint32_t OSPEEDR8 : 2;  // Pin 8 output speed
    volatile uint32_t OSPEEDR9 : 2;  // Pin 9 output speed
    volatile uint32_t OSPEEDR10 : 2; // Pin 10 output speed
    volatile uint32_t OSPEEDR11 : 2; // Pin 11 output speed
    volatile uint32_t OSPEEDR12 : 2; // Pin 12 output speed
    volatile uint32_t OSPEEDR13 : 2; // Pin 13 output speed
    volatile uint32_t OSPEEDR14 : 2; // Pin 14 output speed
    volatile uint32_t OSPEEDR15 : 2; // Pin 15 output speed
} GPIO_OSPEEDR_BitField;

#define LOW_SPEED 0b00
#define MEDIUM_SPEED 0b01
#define HIGH_SPEED 0b10
#define VERY_HIGH_SPEED 0b11

// GPIO port pull-up/pull-down register (GPIOx_PUPDR) (x = A to H):
typedef struct {
    volatile uint32_t PUPDR0 : 2;    // Pin 0 pull-up/pull-down
    volatile uint32_t PUPDR1 : 2;    // Pin 1 pull-up/pull-down
    volatile uint32_t PUPDR2 : 2;    // Pin 2 pull-up/pull-down
    volatile uint32_t PUPDR3 : 2;    // Pin 3 pull-up/pull-down
    volatile uint32_t PUPDR4 : 2;    // Pin 4 pull-up/pull-down
    volatile uint32_t PUPDR5 : 2;    // Pin 5 pull-up/pull-down
    volatile uint32_t PUPDR6 : 2;    // Pin 6 pull-up/pull-down
    volatile uint32_t PUPDR7 : 2;    // Pin 7 pull-up/pull-down
    volatile uint32_t PUPDR8 : 2;    // Pin 8 pull-up/pull-down
    volatile uint32_t PUPDR9 : 2;    // Pin 9 pull-up/pull-down
    volatile uint32_t PUPDR10 : 2;   // Pin 10 pull-up/pull-down
    volatile uint32_t PUPDR11 : 2;   // Pin 11 pull-up/pull-down
    volatile uint32_t PUPDR12 : 2;   // Pin 12 pull-up/pull-down
    volatile uint32_t PUPDR13 : 2;   // Pin 13 pull-up/pull-down
    volatile uint32_t PUPDR14 : 2;   // Pin 14 pull-up/pull-down
    volatile uint32_t PUPDR15 : 2;   // Pin 15 pull-up/pull-down
} GPIO_PUPDR_BitField;

#define NO_PULL 0b00
#define PULL_UP 0b01
#define PULL_DOWN 0b10

// GPIO port input data register (GPIOx_IDR) (x = A to H):
typedef struct {
    volatile uint32_t IDR0 : 1;      // Pin 0 input data
    volatile uint32_t IDR1 : 1;      // Pin 1 input data
    volatile uint32_t IDR2 : 1;      // Pin 2 input data
    volatile uint32_t IDR3 : 1;      // Pin 3 input data
    volatile uint32_t IDR4 : 1;      // Pin 4 input data
    volatile uint32_t IDR5 : 1;      // Pin 5 input data
    volatile uint32_t IDR6 : 1;      // Pin 6 input data
    volatile uint32_t IDR7 : 1;      // Pin 7 input data
    volatile uint32_t IDR8 : 1;      // Pin 8 input data
    volatile uint32_t IDR9 : 1;      // Pin 9 input data
    volatile uint32_t IDR10 : 1;     // Pin 10 input data
    volatile uint32_t IDR11 : 1;     // Pin 11 input data
    volatile uint32_t IDR12 : 1;     // Pin 12 input data
    volatile uint32_t IDR13 : 1;     // Pin 13 input data
    volatile uint32_t IDR14 : 1;     // Pin 14 input data
    volatile uint32_t IDR15 : 1;     // Pin 15 input data
    volatile uint32_t RESERVED : 16; // Reserved bits 16-31
} GPIO_IDR_BitField;

// GPIO port output data register (GPIOx_ODR) (x = A to H):
typedef struct {
    volatile uint32_t ODR0 : 1;      // Pin 0 output data
    volatile uint32_t ODR1 : 1;      // Pin 1 output data
    volatile uint32_t ODR2 : 1;      // Pin 2 output data
    volatile uint32_t ODR3 : 1;      // Pin 3 output data
    volatile uint32_t ODR4 : 1;      // Pin 4 output data
    volatile uint32_t ODR5 : 1;      // Pin 5 output data
    volatile uint32_t ODR6 : 1;      // Pin 6 output data
    volatile uint32_t ODR7 : 1;      // Pin 7 output data
    volatile uint32_t ODR8 : 1;      // Pin 8 output data
    volatile uint32_t ODR9 : 1;      // Pin 9 output data
    volatile uint32_t ODR10 : 1;     // Pin 10 output data
    volatile uint32_t ODR11 : 1;     // Pin 11 output data
    volatile uint32_t ODR12 : 1;     // Pin 12 output data
    volatile uint32_t ODR13 : 1;     // Pin 13 output data
    volatile uint32_t ODR14 : 1;     // Pin 14 output data
    volatile uint32_t ODR15 : 1;     // Pin 15 output data
    volatile uint32_t RESERVED : 16; // Reserved bits 16-31
} GPIO_ODR_BitField;

// GPIO port bit set/reset register (GPIOx_BSRR) (x = A to H):
typedef struct {
    volatile uint32_t BS0 : 1;       // Pin 0 set bit
    volatile uint32_t BS1 : 1;       // Pin 1 set bit
    volatile uint32_t BS2 : 1;       // Pin 2 set bit
    volatile uint32_t BS3 : 1;       // Pin 3 set bit
    volatile uint32_t BS4 : 1;       // Pin 4 set bit
    volatile uint32_t BS5 : 1;       // Pin 5 set bit
    volatile uint32_t BS6 : 1;       // Pin 6 set bit
    volatile uint32_t BS7 : 1;       // Pin 7 set bit
    volatile uint32_t BS8 : 1;       // Pin 8 set bit
    volatile uint32_t BS9 : 1;       // Pin 9 set bit
    volatile uint32_t BS10 : 1;      // Pin 10 set bit
    volatile uint32_t BS11 : 1;      // Pin 11 set bit
    volatile uint32_t BS12 : 1;      // Pin 12 set bit
    volatile uint32_t BS13 : 1;      // Pin 13 set bit
    volatile uint32_t BS14 : 1;      // Pin 14 set bit
    volatile uint32_t BS15 : 1;      // Pin 15 set bit
    volatile uint32_t BR0 : 1;       // Pin 0 reset bit
    volatile uint32_t BR1 : 1;       // Pin 1 reset bit
    volatile uint32_t BR2 : 1;       // Pin 2 reset bit
    volatile uint32_t BR3 : 1;       // Pin 3 reset bit
    volatile uint32_t BR4 : 1;       // Pin 4 reset bit
    volatile uint32_t BR5 : 1;       // Pin 5 reset bit
    volatile uint32_t BR6 : 1;       // Pin 6 reset bit
    volatile uint32_t BR7 : 1;       // Pin 7 reset bit
    volatile uint32_t BR8 : 1;       // Pin 8 reset bit
    volatile uint32_t BR9 : 1;       // Pin 9 reset bit
    volatile uint32_t BR10 : 1;      // Pin 10 reset bit
    volatile uint32_t BR11 : 1;      // Pin 11 reset bit
    volatile uint32_t BR12 : 1;      // Pin 12 reset bit
    volatile uint32_t BR13 : 1;      // Pin 13 reset bit
    volatile uint32_t BR14 : 1;      // Pin 14 reset bit
    volatile uint32_t BR15 : 1;      // Pin 15 reset bit
} GPIO_BSRR_BitField;

#define OFF 0b0
#define ON 0b1
#define SET(x) x = 0b1
#define RESET(x) x = 0b1

// GPIO port configuration lock register (GPIOx_LCKR) (x = A to H):
typedef struct {
    volatile uint32_t LCK0 : 1;      // Pin 0 lock bit
    volatile uint32_t LCK1 : 1;      // Pin 1 lock bit
    volatile uint32_t LCK2 : 1;      // Pin 2 lock bit
    volatile uint32_t LCK3 : 1;      // Pin 3 lock bit
    volatile uint32_t LCK4 : 1;      // Pin 4 lock bit
    volatile uint32_t LCK5 : 1;      // Pin 5 lock bit
    volatile uint32_t LCK6 : 1;      // Pin 6 lock bit
    volatile uint32_t LCK7 : 1;      // Pin 7 lock bit
    volatile uint32_t LCK8 : 1;      // Pin 8 lock bit
    volatile uint32_t LCK9 : 1;      // Pin 9 lock bit
    volatile uint32_t LCK10 : 1;     // Pin 10 lock bit
    volatile uint32_t LCK11 : 1;     // Pin 11 lock bit
    volatile uint32_t LCK12 : 1;     // Pin 12 lock bit
    volatile uint32_t LCK13 : 1;     // Pin 13 lock bit
    volatile uint32_t LCK14 : 1;     // Pin 14 lock bit
    volatile uint32_t LCK15 : 1;     // Pin 15 lock bit
    volatile uint32_t LCKK : 1;      // Lock key
    volatile uint32_t RESERVED : 15; // Reserved bits 17-31
} GPIO_LCKR_BitField;

#define UNLOCK 0b0
#define LOCK 0b1

// GPIO alternate function low and high registers (GPIOx_AFRL\H) (x = A to H):
typedef struct {
    volatile uint32_t AFRL0 : 4;     // Pin 0 alternate function
    volatile uint32_t AFRL1 : 4;     // Pin 1 alternate function
    volatile uint32_t AFRL2 : 4;     // Pin 2 alternate function
    volatile uint32_t AFRL3 : 4;     // Pin 3 alternate function
    volatile uint32_t AFRL4 : 4;     // Pin 4 alternate function
    volatile uint32_t AFRL5 : 4;     // Pin 5 alternate function
    volatile uint32_t AFRL6 : 4;     // Pin 6 alternate function
    volatile uint32_t AFRL7 : 4;     // Pin 7 alternate function
    volatile uint32_t AFRL8 : 4;     // Pin 8 alternate function
    volatile uint32_t AFRL9 : 4;     // Pin 9 alternate function
    volatile uint32_t AFRL10 : 4;    // Pin 10 alternate function
    volatile uint32_t AFRL11 : 4;    // Pin 11 alternate function
    volatile uint32_t AFRL12 : 4;    // Pin 12 alternate function
    volatile uint32_t AFRL13 : 4;    // Pin 13 alternate function
    volatile uint32_t AFRL14 : 4;    // Pin 14 alternate function
    volatile uint32_t AFRL15 : 4;    // Pin 15 alternate function
} GPIO_AFR_BitField;

enum
{
	AF0      = 0b0000,
	AF1,  // = 0b0001
	AF2,  // = 0b0010
	AF3,  // = 0b0011
	AF4,  // = 0b0100
	AF5,  // = 0b0101
	AF6,  // = 0b0110
	AF7,  // = 0b0111
	AF8,  // = 0b1000
	AF9,  // = 0b1001
	AF10, // = 0b1010
	AF11, // = 0b1011
	AF12, // = 0b1100
	AF13, // = 0b1101
	AF14, // = 0b1110
	AF15, // = 0b1111
};

// GPIO port bit reset register (GPIOx_BRR) (x = A to H):
typedef struct {
	volatile uint32_t BR0 : 1;       // Pin 0 reset bit
	volatile uint32_t BR1 : 1;       // Pin 1 reset bit
	volatile uint32_t BR2 : 1;       // Pin 2 reset bit
	volatile uint32_t BR3 : 1;       // Pin 3 reset bit
	volatile uint32_t BR4 : 1;       // Pin 4 reset bit
	volatile uint32_t BR5 : 1;       // Pin 5 reset bit
	volatile uint32_t BR6 : 1;       // Pin 6 reset bit
	volatile uint32_t BR7 : 1;       // Pin 7 reset bit
	volatile uint32_t BR8 : 1;       // Pin 8 reset bit
	volatile uint32_t BR9 : 1;       // Pin 9 reset bit
	volatile uint32_t BR10 : 1;      // Pin 10 reset bit
	volatile uint32_t BR11 : 1;      // Pin 11 reset bit
	volatile uint32_t BR12 : 1;      // Pin 12 reset bit
	volatile uint32_t BR13 : 1;      // Pin 13 reset bit
	volatile uint32_t BR14 : 1;      // Pin 14 reset bit
	volatile uint32_t BR15 : 1;      // Pin 15 reset bit
    volatile uint32_t RESERVED : 16; // Reserved bits 16-31
} GPIO_BRR_BitField;

// GPIO secure configuration register (GPIOx_SECCFGR) (x = A to H):
typedef struct {
	volatile uint32_t SEC0 : 1;      // Pin 0 secure bit
	volatile uint32_t SEC1 : 1;      // Pin 1 secure bit
	volatile uint32_t SEC2 : 1;      // Pin 2 secure bit
	volatile uint32_t SEC3 : 1;      // Pin 3 secure bit
	volatile uint32_t SEC4 : 1;      // Pin 4 secure bit
	volatile uint32_t SEC5 : 1;      // Pin 5 secure bit
	volatile uint32_t SEC6 : 1;      // Pin 6 secure bit
	volatile uint32_t SEC7 : 1;      // Pin 7 secure bit
	volatile uint32_t SEC8 : 1;      // Pin 8 secure bit
	volatile uint32_t SEC9 : 1;      // Pin 9 secure bit
	volatile uint32_t SEC10 : 1;     // Pin 10 secure bit
	volatile uint32_t SEC11 : 1;     // Pin 11 secure bit
	volatile uint32_t SEC12 : 1;     // Pin 12 secure bit
	volatile uint32_t SEC13 : 1;     // Pin 13 secure bit
	volatile uint32_t SEC14 : 1;     // Pin 14 secure bit
	volatile uint32_t SEC15 : 1;     // Pin 15 secure bit
    volatile uint32_t RESERVED : 16; // Reserved bits 16-31
} GPIO_SECCFGR_BitField;

#define NON_SECURE 0b0
#define SECURE 0b1

typedef struct {
    volatile GPIO_MODER_BitField MODER;     // Offset: 0x00
    volatile GPIO_OTYPER_BitField OTYPER;   // Offset: 0x04
    volatile GPIO_OSPEEDR_BitField OSPEEDR; // Offset: 0x08
    volatile GPIO_PUPDR_BitField PUPDR;     // Offset: 0x0C
    volatile GPIO_IDR_BitField IDR;         // Offset: 0x10
    volatile GPIO_ODR_BitField ODR;         // Offset: 0x14
    volatile GPIO_BSRR_BitField BSRR;       // Offset: 0x18
    volatile GPIO_LCKR_BitField LCKR;       // Offset: 0x1C
    volatile GPIO_AFR_BitField AFR;         // Offset: 0x20-0x24 (2 x 32bit registers)
    volatile GPIO_BRR_BitField BRR;         // Offset: 0x28
    volatile uint32_t RESERVED;             // Offset: 0x2C - Not used
    volatile GPIO_SECCFGR_BitField SECCFGR;         // Offset: 0x30
} GPIO_TypeDef;

// GPIOx:
GPIO_TypeDef * const GPIOA = (GPIO_TypeDef*)GPIOA_BASE_ADDR;
GPIO_TypeDef * const GPIOB = (GPIO_TypeDef*)GPIOB_BASE_ADDR;
GPIO_TypeDef * const GPIOC = (GPIO_TypeDef*)GPIOC_BASE_ADDR;
GPIO_TypeDef * const GPIOD = (GPIO_TypeDef*)GPIOD_BASE_ADDR;
GPIO_TypeDef * const GPIOE = (GPIO_TypeDef*)GPIOE_BASE_ADDR;
GPIO_TypeDef * const GPIOF = (GPIO_TypeDef*)GPIOF_BASE_ADDR;
GPIO_TypeDef * const GPIOG = (GPIO_TypeDef*)GPIOG_BASE_ADDR;
GPIO_TypeDef * const GPIOH = (GPIO_TypeDef*)GPIOH_BASE_ADDR;

// GPIO alternate function high register (GPIOx_AFRH) (x = A to H):
//typedef struct {
//} GPIO_AFRH_BitField;

// RCC clock control register (RCC_CR):
typedef struct {
    volatile uint32_t MSION : 1;
    volatile uint32_t MSIRDY : 1;
    volatile uint32_t MSIPLLEN : 1;
    volatile uint32_t MSIRGSEL : 1;
    volatile uint32_t MSIRANGE : 4;
    volatile uint32_t HSION : 1;
    volatile uint32_t HSIKERON : 1;
    volatile uint32_t HSIRDY : 1;
    volatile uint32_t HSIASFS : 1;
    volatile uint32_t RESERVED0 : 4;
    volatile uint32_t HSEON : 1;
    volatile uint32_t HSERDY : 1;
    volatile uint32_t HSEBYP : 1;
    volatile uint32_t CSSON : 1;
    volatile uint32_t RESERVED1 : 4;
    volatile uint32_t PLLON : 1;
    volatile uint32_t PLLRDY : 1;
    volatile uint32_t PLLSAI1ON : 1;
    volatile uint32_t PLLSAI1RDY : 1;
    volatile uint32_t PLLSAI2ON : 1;
    volatile uint32_t PLLSAI2RDY : 1;
    volatile uint32_t RESERVED2 : 1;
    volatile uint32_t PRIV : 1;
} RCC_CR_BitField;

// RCC internal clock sources calibration register (RCC_ICSCR):
typedef struct {
    volatile uint32_t MSICAL : 8;
    volatile uint32_t MSITRIM : 8;
    volatile uint32_t HSICAL : 8;
    volatile uint32_t HSITRIM : 7;
    volatile uint32_t RESERVED : 1;
} RCC_ICSCR_BitField;

// More RCC will filled later...
// ...

// RCC AHB2 peripheral clock enable register (RCC_AHB2ENR):
typedef struct {
    volatile uint32_t GPIOAEN : 1;   // Enable IO port A clock
    volatile uint32_t GPIOBEN : 1;   // Enable IO port B clock
    volatile uint32_t GPIOCEN : 1;   // Enable IO port C clock
    volatile uint32_t GPIODEN : 1;   // Enable IO port D clock
    volatile uint32_t GPIOEEN : 1;   // Enable IO port E clock
    volatile uint32_t GPIOFEN : 1;   // Enable IO port F clock
    volatile uint32_t GPIOGEN : 1;   // Enable IO port G clock
    volatile uint32_t GPIOHEN : 1;   // Enable IO port H clock
    volatile uint32_t RESERVED0 : 5; // Reserved bits 8-12
    volatile uint32_t ADCEN : 1;     // Enable ADC clock
    volatile uint32_t RESERVED1 : 2; // Reserved bits 14-15
    volatile uint32_t AESEN : 1;     // Enable AES accelerator clock
    volatile uint32_t HASHEN : 1;    // Enable HASH clock
    volatile uint32_t RNGEN : 1;     // Enable Random Number Generator clock
    volatile uint32_t PKAEN : 1;     // Enable PKA clock
    volatile uint32_t RESERVED3 : 1; // Reserved bit 20
    volatile uint32_t OTFDEC1EN : 1; // Enable OTFDEC1 clock
    volatile uint32_t SDMMC1EN : 1;  // Enable SDMMC1 clock
    volatile uint32_t RESERVED4 : 9; // Reserved bits 23-31
} RCC_AHB2ENR_BitField;

#define DISABLED 0b0
#define ENABLED 0b1

typedef struct {
    volatile RCC_CR_BitField CR;           // Offset: 0x00
    volatile RCC_ICSCR_BitField ICSCR;     // Offset: 0x04
    // More RCC will filled later...
    volatile uint32_t RESEVED[17];          // Offset: 0x08 - 0x48
    volatile RCC_AHB2ENR_BitField AHB2ENR; // Offset: 0x4C
} RCC_TypeDef;

RCC_TypeDef * const RCC = (RCC_TypeDef*)RCC_BASE_ADDR;

#endif /* STM32L552_H_ */
