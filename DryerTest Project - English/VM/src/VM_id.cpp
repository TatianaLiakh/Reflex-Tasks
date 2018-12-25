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

 	i = AlgorithmDelay; /* C_2 - AlgorithmDelay */
	fputs( "AlgorithmDelay = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = ObjectDelay; /* C_3 - ObjectDelay */
	fputs( "ObjectDelay = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = TestIdling; /* C_4 - TestIdling */
	fputs( "TestIdling = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SCM2VM_TEST_DRYER_NORMAL_TURN_ON; /* SCM2VM_TEST_DRYER_NORMAL_TURN_ON */
	fputs( "SCM2VM_TEST_DRYER_NORMAL_TURN_ON = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SCM2VM_TEST_DRYER_NORMAL_TURN_OFF; /* SCM2VM_TEST_DRYER_NORMAL_TURN_OFF */
	fputs( "SCM2VM_TEST_DRYER_NORMAL_TURN_OFF = " , file);
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

 	i = VM2GUI_TEST_PASSED_DRYER_NORMAL_TURN_ON; /* VM2GUI_TEST_PASSED_DRYER_NORMAL_TURN_ON */
	fputs( "VM2GUI_TEST_PASSED_DRYER_NORMAL_TURN_ON = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_TEST_PASSED_DRYER_NORMAL_TURN_OFF; /* VM2GUI_TEST_PASSED_DRYER_NORMAL_TURN_OFF */
	fputs( "VM2GUI_TEST_PASSED_DRYER_NORMAL_TURN_OFF = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_TEST_FAILED_DRYER_NORMAL_TURN_ON; /* VM2GUI_TEST_FAILED_DRYER_NORMAL_TURN_ON */
	fputs( "VM2GUI_TEST_FAILED_DRYER_NORMAL_TURN_ON = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_TEST_FAILED_DRYER_NORMAL_TURN_OFF; /* VM2GUI_TEST_FAILED_DRYER_NORMAL_TURN_OFF */
	fputs( "VM2GUI_TEST_FAILED_DRYER_NORMAL_TURN_OFF = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_TEST_NOT_ACTIVE_DRYER_NORMAL_TURN_ON; /* VM2GUI_TEST_NOT_ACTIVE_DRYER_NORMAL_TURN_ON */
	fputs( "VM2GUI_TEST_NOT_ACTIVE_DRYER_NORMAL_TURN_ON = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_TEST_NOT_ACTIVE_DRYER_NORMAL_TURN_OFF; /* VM2GUI_TEST_NOT_ACTIVE_DRYER_NORMAL_TURN_OFF */
	fputs( "VM2GUI_TEST_NOT_ACTIVE_DRYER_NORMAL_TURN_OFF = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_START_TEST_DRYER_TURN_ON; /* VM2GUI_START_TEST_DRYER_TURN_ON */
	fputs( "VM2GUI_START_TEST_DRYER_TURN_ON = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_START_TEST_DRYER_TURN_OFF; /* VM2GUI_START_TEST_DRYER_TURN_OFF */
	fputs( "VM2GUI_START_TEST_DRYER_TURN_OFF = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_END_VERIFICATION; /* VM2GUI_END_VERIFICATION */
	fputs( "VM2GUI_END_VERIFICATION = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	fclose(file);
}
