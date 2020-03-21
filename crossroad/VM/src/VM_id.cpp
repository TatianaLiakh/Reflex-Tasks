#include <stdio.h>
#include "VM_id.h"
main () {
	int i;
	FILE * file;
	char string[2 * 132];
	file = fopen("VM_constants.cfg","w");
	i = ON; /* C_0 - ON */
	fputs( "ON = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = OFF; /* C_1 - OFF */
	fputs( "OFF = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = PCyclesDelay; /* C_2 - PCyclesDelay */
	fputs( "PCyclesDelay = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = KCyclesDelay; /* C_3 - KCyclesDelay */
	fputs( "KCyclesDelay = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = AlgorithmDelay; /* C_4 - AlgorithmDelay */
	fputs( "AlgorithmDelay = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = TestIdling; /* C_5 - TestIdling */
	fputs( "TestIdling = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SCM2VM_TEST_TRAFFIC_LIGHT_CYCLE; /* SCM2VM_TEST_TRAFFIC_LIGHT_CYCLE */
	fputs( "SCM2VM_TEST_TRAFFIC_LIGHT_CYCLE = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SCM2VM_FINISH_VERIFICATION; /* SCM2VM_FINISH_VERIFICATION */
	fputs( "SCM2VM_FINISH_VERIFICATION = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2SCM_START_VERIFICATION; /* VM2SCM_START_VERIFICATION */
	fputs( "VM2SCM_START_VERIFICATION = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2SCM_NEXT_TEST; /* VM2SCM_NEXT_TEST */
	fputs( "VM2SCM_NEXT_TEST = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_TEST_PASSED_PAUSE_P_CYCLES; /* VM2GUI_TEST_PASSED_PAUSE_P_CYCLES */
	fputs( "VM2GUI_TEST_PASSED_PAUSE_P_CYCLES = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_TEST_PASSED_DISABLE_MOTION_FOR_K_CYCLES; /* VM2GUI_TEST_PASSED_DISABLE_MOTION_FOR_K_CYCLES */
	fputs( "VM2GUI_TEST_PASSED_DISABLE_MOTION_FOR_K_CYCLES = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_TEST_FAILED_PAUSE_P_CYCLES; /* VM2GUI_TEST_FAILED_PAUSE_P_CYCLES */
	fputs( "VM2GUI_TEST_FAILED_PAUSE_P_CYCLES = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_TEST_FAILED_DISABLE_MOTION_FOR_K_CYCLES; /* VM2GUI_TEST_FAILED_DISABLE_MOTION_FOR_K_CYCLES */
	fputs( "VM2GUI_TEST_FAILED_DISABLE_MOTION_FOR_K_CYCLES = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_START_TEST_PAUSE_P_CYCLES; /* VM2GUI_START_TEST_PAUSE_P_CYCLES */
	fputs( "VM2GUI_START_TEST_PAUSE_P_CYCLES = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_START_TEST_DISABLE_MOTION_FOR_K_CYCLES; /* VM2GUI_START_TEST_DISABLE_MOTION_FOR_K_CYCLES */
	fputs( "VM2GUI_START_TEST_DISABLE_MOTION_FOR_K_CYCLES = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_END_VERIFICATION; /* VM2GUI_END_VERIFICATION */
	fputs( "VM2GUI_END_VERIFICATION = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	fclose(file);
}
