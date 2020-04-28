/* Process-Images functions prototypes */
#ifndef _VMproc_h
#define _VMproc_h 1

void P0(void);  /* Process Init */
void P1(void);  /* Process ReceiveSCMOutputMsg */
void P2(void);  /* Process Terminator */
void P3(void);  /* Process NoCarsControl */
void P4(void);  /* Process OpenRoadDelayControl */
void P5(void);  /* Process ErrorControlForOpenRoad */
void P6(void);  /* Process CloseRoadDelayControl */
void P7(void);  /* Process ErrorControlForCloseRoad */

#define PROCESS_N1 0
#define PROCESS_Nn 7 /* Number Of Proc */

#endif