/* Process-Images functions prototypes */
#ifndef _CAproc_h
#define _CAproc_h 1

void P0(void);  /* Process Init */
void P1(void);  /* Process SortingBoxes */
void P2(void);  /* Process MainConveyorOperation */
void P3(void);  /* Process PresenceSensorControl */
void P4(void);  /* Process ColorSensorsControl */

#define PROCESS_N1 0
#define PROCESS_Nn 4 /* Number Of Proc */

#endif