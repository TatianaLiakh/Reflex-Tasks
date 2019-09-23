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

 	i = TestIdling; /* C_3 - TestIdling */
	fputs( "TestIdling = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = D2V_TEST_NORMAL_TURN_ON; /* D2V_TEST_NORMAL_TURN_ON */
	fputs( "D2V_TEST_NORMAL_TURN_ON = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = D2V_TEST_NORMAL_TURN_OFF; /* D2V_TEST_NORMAL_TURN_OFF */
	fputs( "D2V_TEST_NORMAL_TURN_OFF = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = D2V_FINISH_VERIFICATION; /* D2V_FINISH_VERIFICATION */
	fputs( "D2V_FINISH_VERIFICATION = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = V2D_START_VERIFICATION; /* V2D_START_VERIFICATION */
	fputs( "V2D_START_VERIFICATION = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = V2GUI_TEST_PASSED_NORMAL_TURN_ON; /* V2GUI_TEST_PASSED_NORMAL_TURN_ON */
	fputs( "V2GUI_TEST_PASSED_NORMAL_TURN_ON = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = V2GUI_TEST_FAILED_NORMAL_TURN_ON; /* V2GUI_TEST_FAILED_NORMAL_TURN_ON */
	fputs( "V2GUI_TEST_FAILED_NORMAL_TURN_ON = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = V2GUI_START_TEST_TURN_ON; /* V2GUI_START_TEST_TURN_ON */
	fputs( "V2GUI_START_TEST_TURN_ON = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = V2GUI_TEST_PASSED_NORMAL_TURN_OFF; /* V2GUI_TEST_PASSED_NORMAL_TURN_OFF */
	fputs( "V2GUI_TEST_PASSED_NORMAL_TURN_OFF = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = V2GUI_TEST_FAILED_NORMAL_TURN_OFF; /* V2GUI_TEST_FAILED_NORMAL_TURN_OFF */
	fputs( "V2GUI_TEST_FAILED_NORMAL_TURN_OFF = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = V2GUI_START_TEST_TURN_OFF; /* V2GUI_START_TEST_TURN_OFF */
	fputs( "V2GUI_START_TEST_TURN_OFF = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = V2GUI_END_VERIFICATION; /* V2GUI_END_VERIFICATION */
	fputs( "V2GUI_END_VERIFICATION = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	fclose(file);
}
