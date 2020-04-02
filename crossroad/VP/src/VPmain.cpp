/* MAIN FILE OF THE PROJECT */
#include "VPext.h" /* Common files for all generated c-files */
#include "VPproc.h"  /* Process-functions desription */
#include "VPgvar.h"  /* Project variables images */
#include "VPio.h"    /* Scan-input/output functions */
void Control_Loop(void);  /* for r_main.h */
#include "r_main.h"  /* Codes of the main-function that calls Control_Loop */

void Control_Loop (void)    /* ”правл€ющий алгоритм */
{
	Input();
	P0();  /* Process Init */
	P1();  /* Process ReceiveSCMOutputMsg */
	P2();  /* Process RunCar */
	P3();  /* Process RunTwoCars */
	Output();
	Prepare_PSW((INT16S)(PROCESS_N1), (INT16S)PROCESS_Nn);
}