/* Process-Images functions prototypes */
#ifndef _SCMproc_h
#define _SCMproc_h 1

void P0(void);  /* Process Init */
void P1(void);  /* Process ReceiveVMOutputMsg */
void P2(void);  /* Process TestDriver */
void P3(void);  /* Process TestNoCars */
void P4(void);  /* Process TestNormCars */
void P5(void);  /* Process TestWrongCar */

#define PROCESS_N1 0
#define PROCESS_Nn 5 /* Number Of Proc */

#endif