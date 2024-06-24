/* Process-Images functions prototypes */
#ifndef _VMproc_h
#define _VMproc_h 1

void P0(void);  /* Process Init */
void P1(void);  /* Process ReceiveCAOutputMsg */
void P2(void);  /* Process ReceiveSCMOutputMsg */
void P3(void);  /* Process Terminator */
void P4(void);  /* Process PresenceSensorControl */
void P5(void);  /* Process ColorSensorsControl */
void P6(void);  /* Process GreenBoxControl */
void P7(void);  /* Process RedBoxControl */
void P8(void);  /* Process BlueBoxControl */
void P9(void);  /* Process MainConveyorControl */

#define PROCESS_N1 0
#define PROCESS_Nn 9 /* Number Of Proc */

#endif