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
	P0();  /* Process INIT */
	P1();  /* Process ReadInputMsgs */
	P2();  /* Process READ_ADC */
	P3();  /* Process TANK */
	P4();  /* Process WRITE_DAC */
	P5();  /* Process Info */
	Output();
	Prepare_PSW((INT16S)(PROCESS_N1), (INT16S)PROCESS_Nn);
}