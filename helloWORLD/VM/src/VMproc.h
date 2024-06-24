/* Process-Images functions prototypes */
#ifndef _VMproc_h
#define _VMproc_h 1

void P0(void);  /* Process Init */
void P1(void);  /* Process ReceiveSCMOutputMsg */
void P2(void);  /* Process Terminator */

#define PROCESS_N1 0
#define PROCESS_Nn 2 /* Number Of Proc */

#endif