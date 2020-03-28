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

 	i = SCM2VM_TEST_RUN_CAR; /* SCM2VM_TEST_RUN_CAR */
	fputs( "SCM2VM_TEST_RUN_CAR = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SCM2VM_TEST_RUN_WRONG_CAR; /* SCM2VM_TEST_RUN_WRONG_CAR */
	fputs( "SCM2VM_TEST_RUN_WRONG_CAR = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SCM2VM_TEST_RUN_TWO_CARS; /* SCM2VM_TEST_RUN_TWO_CARS */
	fputs( "SCM2VM_TEST_RUN_TWO_CARS = " , file);
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

 	i = VM2GUI_START_TEST_RUN_CAR; /* VM2GUI_START_TEST_RUN_CAR */
	fputs( "VM2GUI_START_TEST_RUN_CAR = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_START_TEST_RUN_WRONG_CAR; /* VM2GUI_START_TEST_RUN_WRONG_CAR */
	fputs( "VM2GUI_START_TEST_RUN_WRONG_CAR = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_START_TEST_RUN_TWO_CARS; /* VM2GUI_START_TEST_RUN_TWO_CARS */
	fputs( "VM2GUI_START_TEST_RUN_TWO_CARS = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_TEST_PASSED_NORMAL_OPEN_ROAD_DELAY; /* VM2GUI_TEST_PASSED_NORMAL_OPEN_ROAD_DELAY */
	fputs( "VM2GUI_TEST_PASSED_NORMAL_OPEN_ROAD_DELAY = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_TEST_PASSED_NORMAL_CLOSE_ROAD_DELAY; /* VM2GUI_TEST_PASSED_NORMAL_CLOSE_ROAD_DELAY */
	fputs( "VM2GUI_TEST_PASSED_NORMAL_CLOSE_ROAD_DELAY = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_TEST_FAILED_NORMAL_OPEN_ROAD_DELAY; /* VM2GUI_TEST_FAILED_NORMAL_OPEN_ROAD_DELAY */
	fputs( "VM2GUI_TEST_FAILED_NORMAL_OPEN_ROAD_DELAY = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_TEST_FAILED_NORMAL_CLOSE_ROAD_DELAY; /* VM2GUI_TEST_FAILED_NORMAL_CLOSE_ROAD_DELAY */
	fputs( "VM2GUI_TEST_FAILED_NORMAL_CLOSE_ROAD_DELAY = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_END_VERIFICATION; /* VM2GUI_END_VERIFICATION */
	fputs( "VM2GUI_END_VERIFICATION = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	fclose(file);
}
