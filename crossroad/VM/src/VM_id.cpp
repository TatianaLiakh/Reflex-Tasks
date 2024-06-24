#include <stdio.h>
#include "VM_id.h"
main () {
	int i;
	FILE * file;
	char string[2 * 132];
	file = fopen("VM_constants.cfg","w");
	i = PCyclesDelay; /* C_0 - PCyclesDelay */
	fputs( "PCyclesDelay = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = KCyclesDelay; /* C_1 - KCyclesDelay */
	fputs( "KCyclesDelay = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = AlgorithmDelay; /* C_2 - AlgorithmDelay */
	fputs( "AlgorithmDelay = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = Active; /* C_3 - Active */
	fputs( "Active = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = Error; /* C_4 - Error */
	fputs( "Error = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SCM2VM_TEST_RUN_CARS; /* SCM2VM_TEST_RUN_CARS */
	fputs( "SCM2VM_TEST_RUN_CARS = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SCM2VM_TEST_NO_CARS; /* SCM2VM_TEST_NO_CARS */
	fputs( "SCM2VM_TEST_NO_CARS = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SCM2VM_TEST_RUN_WRONG_CAR; /* SCM2VM_TEST_RUN_WRONG_CAR */
	fputs( "SCM2VM_TEST_RUN_WRONG_CAR = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SCM2VM_TEST_COMPLETED; /* SCM2VM_TEST_COMPLETED */
	fputs( "SCM2VM_TEST_COMPLETED = " , file);
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

 	i = VM2GUI_START_TEST_RUN_CARS; /* VM2GUI_START_TEST_RUN_CARS */
	fputs( "VM2GUI_START_TEST_RUN_CARS = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_START_TEST_NO_CARS; /* VM2GUI_START_TEST_NO_CARS */
	fputs( "VM2GUI_START_TEST_NO_CARS = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_START_TEST_RUN_WRONG_CAR; /* VM2GUI_START_TEST_RUN_WRONG_CAR */
	fputs( "VM2GUI_START_TEST_RUN_WRONG_CAR = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_TEST_PASSED_NO_CARS; /* VM2GUI_TEST_PASSED_NO_CARS */
	fputs( "VM2GUI_TEST_PASSED_NO_CARS = " , file);
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

 	i = VM2GUI_TEST_FAILED_NO_CARS; /* VM2GUI_TEST_FAILED_NO_CARS */
	fputs( "VM2GUI_TEST_FAILED_NO_CARS = " , file);
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
