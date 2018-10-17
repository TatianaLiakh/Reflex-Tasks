/* Process-Images functions prototypes */
#ifndef _SCMproc_h
#define _SCMproc_h 1

void P0(void);  /* Process Init */
void P1(void);  /* Process ReceiveVMOutputMsg */
void P2(void);  /* Process TestDriver */
void P3(void);  /* Process TestHandsUnderDryer */
void P4(void);  /* Process TestRemoveHands */

#define PROCESS_N1 0
#define PROCESS_Nn 4 /* Number Of Proc */

#endif