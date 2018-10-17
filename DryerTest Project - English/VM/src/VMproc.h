/* Process-Images functions prototypes */
#ifndef _VMproc_h
#define _VMproc_h 1

void P0(void);  /* Process Init */
void P1(void);  /* Process ReceiveSCMOutputMsg */
void P2(void);  /* Process DryerNormalTurnOnControl */
void P3(void);  /* Process DryerNormalTurnOffControl */
void P4(void);  /* Process DryerStateControl */
void P5(void);  /* Process InvariantFrequencyControl */

#define PROCESS_N1 0
#define PROCESS_Nn 5 /* Number Of Proc */

#endif