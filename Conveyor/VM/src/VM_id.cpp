#include <stdio.h>
#include "VM_id.h"
main () {
	int i;
	FILE * file;
	char string[2 * 132];
	file = fopen("VM_constants.cfg","w");
	i = AlgorithmDelay; /* C_0 - AlgorithmDelay */
	fputs( "AlgorithmDelay = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = TestIdling; /* C_1 - TestIdling */
	fputs( "TestIdling = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = Error; /* C_2 - Error */
	fputs( "Error = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = Norm; /* C_3 - Norm */
	fputs( "Norm = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = CA2GUI_PRESENCE_SENSOR_ERROR; /* CA2GUI_PRESENCE_SENSOR_ERROR */
	fputs( "CA2GUI_PRESENCE_SENSOR_ERROR = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = CA2GUI_COLOR_SENSORS_ERROR; /* CA2GUI_COLOR_SENSORS_ERROR */
	fputs( "CA2GUI_COLOR_SENSORS_ERROR = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SCM2VM_TEST_PUT_BOXES_ON_CONVEYOR; /* SCM2VM_TEST_PUT_BOXES_ON_CONVEYOR */
	fputs( "SCM2VM_TEST_PUT_BOXES_ON_CONVEYOR = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SCM2VM_TEST_BROKEN_PRESENCE_SENSOR; /* SCM2VM_TEST_BROKEN_PRESENCE_SENSOR */
	fputs( "SCM2VM_TEST_BROKEN_PRESENCE_SENSOR = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SCM2VM_TEST_BROKEN_COLOR_SENSORS; /* SCM2VM_TEST_BROKEN_COLOR_SENSORS */
	fputs( "SCM2VM_TEST_BROKEN_COLOR_SENSORS = " , file);
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

 	i = VM2GUI_TEST_PASSED_WRONG_PRESENCE_SENSOR; /* VM2GUI_TEST_PASSED_WRONG_PRESENCE_SENSOR */
	fputs( "VM2GUI_TEST_PASSED_WRONG_PRESENCE_SENSOR = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_TEST_PASSED_WRONG_COLOR_SENSORS; /* VM2GUI_TEST_PASSED_WRONG_COLOR_SENSORS */
	fputs( "VM2GUI_TEST_PASSED_WRONG_COLOR_SENSORS = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_TEST_FAILED_WRONG_PRESENCE_SENSOR; /* VM2GUI_TEST_FAILED_WRONG_PRESENCE_SENSOR */
	fputs( "VM2GUI_TEST_FAILED_WRONG_PRESENCE_SENSOR = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_TEST_FAILED_WRONG_COLOR_SENSORS; /* VM2GUI_TEST_FAILED_WRONG_COLOR_SENSORS */
	fputs( "VM2GUI_TEST_FAILED_WRONG_COLOR_SENSORS = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_TEST_PASSED_GREEN_BOXES_CONTROL; /* VM2GUI_TEST_PASSED_GREEN_BOXES_CONTROL */
	fputs( "VM2GUI_TEST_PASSED_GREEN_BOXES_CONTROL = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_TEST_FAILED_GREEN_BOXES_CONTROL; /* VM2GUI_TEST_FAILED_GREEN_BOXES_CONTROL */
	fputs( "VM2GUI_TEST_FAILED_GREEN_BOXES_CONTROL = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_TEST_PASSED_RED_BOXES_CONTROL; /* VM2GUI_TEST_PASSED_RED_BOXES_CONTROL */
	fputs( "VM2GUI_TEST_PASSED_RED_BOXES_CONTROL = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_TEST_FAILED_RED_BOXES_CONTROL; /* VM2GUI_TEST_FAILED_RED_BOXES_CONTROL */
	fputs( "VM2GUI_TEST_FAILED_RED_BOXES_CONTROL = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_TEST_PASSED_BLUE_BOXES_CONTROL; /* VM2GUI_TEST_PASSED_BLUE_BOXES_CONTROL */
	fputs( "VM2GUI_TEST_PASSED_BLUE_BOXES_CONTROL = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_TEST_FAILED_BLUE_BOXES_CONTROL; /* VM2GUI_TEST_FAILED_BLUE_BOXES_CONTROL */
	fputs( "VM2GUI_TEST_FAILED_BLUE_BOXES_CONTROL = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_TEST_PASSED_MAIN_CONVEYOR_CONTROL; /* VM2GUI_TEST_PASSED_MAIN_CONVEYOR_CONTROL */
	fputs( "VM2GUI_TEST_PASSED_MAIN_CONVEYOR_CONTROL = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_TEST_FAILED_MAIN_CONVEYOR_CONTROL; /* VM2GUI_TEST_FAILED_MAIN_CONVEYOR_CONTROL */
	fputs( "VM2GUI_TEST_FAILED_MAIN_CONVEYOR_CONTROL = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_START_TEST_RANDOM_BOXES; /* VM2GUI_START_TEST_RANDOM_BOXES */
	fputs( "VM2GUI_START_TEST_RANDOM_BOXES = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_START_TEST_WRONG_PRESENCE_SENSOR; /* VM2GUI_START_TEST_WRONG_PRESENCE_SENSOR */
	fputs( "VM2GUI_START_TEST_WRONG_PRESENCE_SENSOR = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_START_TEST_WRONG_COLOR_SENSORS; /* VM2GUI_START_TEST_WRONG_COLOR_SENSORS */
	fputs( "VM2GUI_START_TEST_WRONG_COLOR_SENSORS = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_END_VERIFICATION; /* VM2GUI_END_VERIFICATION */
	fputs( "VM2GUI_END_VERIFICATION = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	fclose(file);
}
