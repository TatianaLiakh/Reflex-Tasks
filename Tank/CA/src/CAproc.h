/* Process-Images functions prototypes */
#ifndef _CAproc_h
#define _CAproc_h 1

void P0(void);  /* Process INIT */
void P1(void);  /* Process ReadInputMsgs */
void P2(void);  /* Process READ_ADC */
void P3(void);  /* Process CONTROLLER */
void P4(void);  /* Process Filter */
void P5(void);  /* Process WRITE_DAC */
void P6(void);  /* Process Info */

#define PROCESS_N1 0
#define PROCESS_Nn 6 /* Number Of Proc */

#endif