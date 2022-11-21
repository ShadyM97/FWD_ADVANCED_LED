/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  registers.h
 *       Module:  -
 *
 *  Description: THIS FILE CONTAINS THE REGISTERS NEEDED IN THE PROJECT     
 *  
 *********************************************************************************************************************/
#ifndef REGISTERS_H
#define REGISTERS_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "types.h"



/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define CORTEXM4_SYSCONTROL_BASE_ADDRESS          0x400FE000

/* SYSTEM CONTROL BLOCK REGISTERS */
#define RCC                                       *((volatile uint32_t*)(CORTEXM4_SYSCONTROL_BASE_ADDRESS+0x060))
#define RCGCGPIO                                  *((volatile uint32_t*)(CORTEXM4_SYSCONTROL_BASE_ADDRESS+0x608))
#define GPIOHBCTL                                 *((volatile uint32_t*)(CORTEXM4_SYSCONTROL_BASE_ADDRESS+0x06C))
#define RCGCTIMER                                 *((volatile uint32_t*)(CORTEXM4_SYSCONTROL_BASE_ADDRESS+0x604))
/* GPIO PORT B REGISTERS */

#define CORTEXM4_GPIO_PORTB_AHB_BASE_ADDRESS      0x40059000
#define GPIODIR_PORT_B                            *((volatile uint32_t*)(CORTEXM4_GPIO_PORTB_AHB_BASE_ADDRESS+0x400))
#define GPIOAFSEL_PORT_B                          *((volatile uint32_t*)(CORTEXM4_GPIO_PORTB_AHB_BASE_ADDRESS+0x420))
#define GPIOPCTL_PORT_B                           *((volatile uint32_t*)(CORTEXM4_GPIO_PORTB_AHB_BASE_ADDRESS+0x52C))
#define GPIODR2R_PORT_B                           *((volatile uint32_t*)(CORTEXM4_GPIO_PORTB_AHB_BASE_ADDRESS+0x500))
#define GPIOPDR_PORT_B                            *((volatile uint32_t*)(CORTEXM4_GPIO_PORTB_AHB_BASE_ADDRESS+0x514))
#define GPIOODR_PORT_B                            *((volatile uint32_t*)(CORTEXM4_GPIO_PORTB_AHB_BASE_ADDRESS+0x50C))
#define GPIODEN_PORT_B                            *((volatile uint32_t*)(CORTEXM4_GPIO_PORTB_AHB_BASE_ADDRESS+0x51C))
#define PB6                                       *((volatile uint32_t*)(CORTEXM4_GPIO_PORTB_AHB_BASE_ADDRESS+0x100))            

/* TIMER A REGISTERS */
#define CORTEXM4_TIMER_0_BASE_ADDRESS             0x40030000
#define GPTMCTL                                   *((volatile uint32_t*)(CORTEXM4_TIMER_0_BASE_ADDRESS+0x00C))
#define GPTMCFG                                   *((volatile uint32_t*)(CORTEXM4_TIMER_0_BASE_ADDRESS+0x000))
#define GPTMTAMR                                  *((volatile uint32_t*)(CORTEXM4_TIMER_0_BASE_ADDRESS+0x004))
#define GPTMTAILR                                 *((volatile uint32_t*)(CORTEXM4_TIMER_0_BASE_ADDRESS+0x028))
#define GPTMIMR                                   *((volatile uint32_t*)(CORTEXM4_TIMER_0_BASE_ADDRESS+0x018))
#define GPTMRIS                                   *((volatile uint32_t*)(CORTEXM4_TIMER_0_BASE_ADDRESS+0x01C))   
#define GPTMICR                                   *((volatile uint32_t*)(CORTEXM4_TIMER_0_BASE_ADDRESS+0x024)) 

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

 
#endif  /* REGISTERS_H */

/**********************************************************************************************************************
 *  END OF FILE: registers.h
 *********************************************************************************************************************/
