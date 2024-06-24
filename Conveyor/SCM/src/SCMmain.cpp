/* MAIN FILE OF THE PROJECT */
#include "SCMext.h" /* Common files for all generated c-files */
#include "SCMproc.h"  /* Process-functions desription */
#include "SCMgvar.h"  /* Project variables images */
#include "SCMio.h"    /* Scan-input/output functions */
void Control_Loop(void);  /* for r_main.h */
#include "r_main.h"  /* Codes of the main-function that calls Control_Loop */

void Control_Loop (void)    /* ”правл€ющий алгоритм */
{
	Input();
	P0();  /* Process Init */
	P1();  /* Process ReceiveVMOutputMsg */
	P2();  /* Process TestDriver */
	P3();  /* Process TestRandomBoxes */
	P4();  /* Process TestBrokenPresenceSensor */
	P5();  /* Process TestBrokenColorSensors */
	Output();
	Prepare_PSW((INT16S)(PROCESS_N1), (INT16S)PROCESS_Nn);
}