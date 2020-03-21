/* Process-Images functions prototypes */
#ifndef _VPproc_h
#define _VPproc_h 1

void P0(void);  /* Process Init */
void P1(void);  /* Process ReceiveSCMOutputMsg */
void P2(void);  /* Process RunCar */
void P3(void);  /* Process RunTwoCars */

#define PROCESS_N1 0
#define PROCESS_Nn 3 /* Number Of Proc */

#endif