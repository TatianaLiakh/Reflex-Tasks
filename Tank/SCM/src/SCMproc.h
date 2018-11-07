/* Process-Images functions prototypes */
#ifndef _SCMproc_h
#define _SCMproc_h 1

void P0(void);  /* Process INIT */
void P1(void);  /* Process ReceiveVMOutputMsg */
void P2(void);  /* Process TestTankControl */
void P3(void);  /* Process TestNormalDesiredLevelControl */
void P4(void);  /* Process TestMinimumDesiredLevelControl */
void P5(void);  /* Process TestMaximumDesiredLevelControl */

#define PROCESS_N1 0
#define PROCESS_Nn 5 /* Number Of Proc */

#endif