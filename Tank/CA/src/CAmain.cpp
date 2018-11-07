/* MAIN FILE OF THE PROJECT */
#include "CAext.h" /* Common files for all generated c-files */
#include "CAproc.h"  /* Process-functions desription */
#include "CAgvar.h"  /* Project variables images */
#include "CAio.h"    /* Scan-input/output functions */
void Control_Loop(void);  /* for r_main.h */
#include "r_main.h"  /* Codes of the main-function that calls Control_Loop */

void Control_Loop (void)    /* ”правл€ющий алгоритм */
{
	Input();
	P0();  /* Process INIT */
	P1();  /* Process ReadInputMsgs */
	P2();  /* Process READ_ADC */
	P3();  /* Process CONTROLLER */
	P4();  /* Process Filter */
	P5();  /* Process WRITE_DAC */
	P6();  /* Process Info */
	Output();
	Prepare_PSW((INT16S)(PROCESS_N1), (INT16S)PROCESS_Nn);
}