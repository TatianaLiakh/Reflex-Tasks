/* Process-Images functions prototypes */
#ifndef _VMproc_h
#define _VMproc_h 1

void P0(void);  /* Process INIT */
void P1(void);  /* Process READ_ADC */
void P2(void);  /* Process Info */
void P3(void);  /* Process ReceiveSCMOutputMsg */
void P4(void);  /* Process XValueRestrictionsInvariant */
void P5(void);  /* Process UValueRestrictionsInvariant */
void P6(void);  /* Process VoltageDerivativeRestrictionsInvariant */
void P7(void);  /* Process XLevelTendsToDesired */

#define PROCESS_N1 0
#define PROCESS_Nn 7 /* Number Of Proc */

#endif