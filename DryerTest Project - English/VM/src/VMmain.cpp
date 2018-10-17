/* MAIN FILE OF THE PROJECT */
#include "VMext.h" /* Common files for all generated c-files */
#include "VMproc.h"  /* Process-functions desription */
#include "VMgvar.h"  /* Project variables images */
#include "VMio.h"    /* Scan-input/output functions */
void Control_Loop(void);  /* for r_main.h */
#include "r_main.h"  /* Codes of the main-function that calls Control_Loop */

void Control_Loop (void)    /* ����������� �������� */
{
	Input();
	P0();  /* Process Init */
	P1();  /* Process ReceiveSCMOutputMsg */
	P2();  /* Process DryerNormalTurnOnControl */
	P3();  /* Process DryerNormalTurnOffControl */
	P4();  /* Process DryerStateControl */
	P5();  /* Process InvariantFrequencyControl */
	Output();
	Prepare_PSW((INT16S)(PROCESS_N1), (INT16S)PROCESS_Nn);
}