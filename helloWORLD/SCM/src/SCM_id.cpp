#include <stdio.h>
#include "SCM_id.h"
main () {
	int i;
	FILE * file;
	char string[2 * 132];
	file = fopen("SCM_constants.cfg","w");
	i = Idiling; /* C_0 - Idiling */
	fputs( "Idiling = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = RunNextTest; /* C_1 - RunNextTest */
	fputs( "RunNextTest = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SCM2VP_MESSAGE_TURN_ON; /* SCM2VP_MESSAGE_TURN_ON */
	fputs( "SCM2VP_MESSAGE_TURN_ON = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SCM2VP_MESSAGE_TURN_OFF; /* SCM2VP_MESSAGE_TURN_OFF */
	fputs( "SCM2VP_MESSAGE_TURN_OFF = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SCM2VM_TEST_NORMAL_TURN_ON; /* SCM2VM_TEST_NORMAL_TURN_ON */
	fputs( "SCM2VM_TEST_NORMAL_TURN_ON = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SCM2VM_TEST_NORMAL_TURN_OFF; /* SCM2VM_TEST_NORMAL_TURN_OFF */
	fputs( "SCM2VM_TEST_NORMAL_TURN_OFF = " , file);
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

 	fclose(file);
}
