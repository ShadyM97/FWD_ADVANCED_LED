/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  INTERRUPT_private.h
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef INTERRUPT_PRIVATE_H
#define INTERRUPT_PRIVATE_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "types.h"

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef struct 
{
    uint32_t VECACT   :8;
    uint32_t          :3;
    uint32_t RETBASE  :1;
    uint32_t VECPEND  :7;
    uint32_t          :2;
    uint32_t ISRPEND  :1;
    uint32_t ISRPRE   :1;
    uint32_t          :1;
    uint32_t PENDSTCLR:1;
    uint32_t PENDSTSET:1;
    uint32_t UNPENDSV :1;
    uint32_t PENDSV   :1;
    uint32_t          :2;
    uint32_t NMISET   :1; 
}INTCTRL_BF;


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define CORTEXM4_COREPERIPHERAL_BASE_ADDRESS             0xE000E000
#define APINT                                    *((volatile uint32_t*)(CORTEXM4_COREPERIPHERAL_BASE_ADDRESS+0xD0C))
#define	INTCTRL                                   ((volatile INTCTRL_BF*)(CORTEXM4_COREPERIPHERAL_BASE_ADDRESS+0xD04))	

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/




/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

 
#endif  /* INTERRUPT_PRIVATE_H */

/**********************************************************************************************************************
 *  END OF FILE: INTERRUPT_private.h
 *********************************************************************************************************************/
