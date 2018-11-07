/* Process-Images functions prototypes */
#ifndef _VPproc_h
#define _VPproc_h 1

void P0(void);  /* Process INIT */
void P1(void);  /* Process ReadInputMsgs */
void P2(void);  /* Process READ_ADC */
void P3(void);  /* Process TANK */
void P4(void);  /* Process WRITE_DAC */
void P5(void);  /* Process Info */

#define PROCESS_N1 0
#define PROCESS_Nn 5 /* Number Of Proc */

#endif