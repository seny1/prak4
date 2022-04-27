/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1651069988_1_
#define _BUR_1651069988_1_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_GLOBAL signed short motor_speed;
_GLOBAL signed short real_motor_speed;
_GLOBAL plcbit blink;
_GLOBAL plcbit gAxis03_ModuleOk;
_GLOBAL struct SdcDiDoIf_typ gAxis03_DiDoIf;
_GLOBAL struct SdcDrvIf16_typ gAxis03_DrvIf;
_GLOBAL struct SdcHwCfg_typ gAxis03_HW;
_GLOBAL struct ACP10AXIS_typ gAxis03;
_GLOBAL plcbit gAxis02_ModuleOk;
_GLOBAL struct SdcDiDoIf_typ gAxis02_DiDoIf;
_GLOBAL struct SdcDrvIf16_typ gAxis02_DrvIf;
_GLOBAL struct SdcHwCfg_typ gAxis02_HW;
_GLOBAL struct ACP10AXIS_typ gAxis02;
_GLOBAL plcbit gAxis01_ModuleOk;
_GLOBAL struct SdcDiDoIf_typ gAxis01_DiDoIf;
_GLOBAL struct SdcDrvIf16_typ gAxis01_DrvIf;
_GLOBAL struct SdcHwCfg_typ gAxis01_HW;
_GLOBAL struct ACP10AXIS_typ gAxis01;
_GLOBAL plcbit LED[4];





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Global.var\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1651069988_1_ */

