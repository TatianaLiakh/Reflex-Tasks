/* Process-Images functions prototypes */
#ifndef _VMproc_h
#define _VMproc_h 1

void P0(void);  /* Process Init */
void P1(void);  /* Process ReceiveSCMOutputMsg */
void P2(void);  /* Process Terminator */
void P3(void);  /* Process NormalOpenRoadDelayControl */
void P4(void);  /* Process NormalCloseRoadDelayControl */

#define PROCESS_N1 0
#define PROCESS_Nn 4 /* Number Of Proc */

#endif