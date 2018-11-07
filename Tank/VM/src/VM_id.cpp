#include <stdio.h>
#include "VM_id.h"
main () {
	int i;
	FILE * file;
	char string[2 * 132];
	file = fopen("VM_constants.cfg","w");
	i = H; /* C_0 - H */
	fputs( "H = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = U_MIN; /* C_1 - U_MIN */
	fputs( "U_MIN = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = U_MAX; /* C_2 - U_MAX */
	fputs( "U_MAX = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = DELTA_U; /* C_3 - DELTA_U */
	fputs( "DELTA_U = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = DELTA_X; /* C_4 - DELTA_X */
	fputs( "DELTA_X = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = IDILING_DELAY; /* C_5 - IDILING_DELAY */
	fputs( "IDILING_DELAY = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = CONTROLLER_DELAY; /* C_6 - CONTROLLER_DELAY */
	fputs( "CONTROLLER_DELAY = " , file);
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

 	i = CA2GUI_X_LEVEL; /* CA2GUI_X_LEVEL */
	fputs( "CA2GUI_X_LEVEL = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = CA2GUI_U_LEVEL; /* CA2GUI_U_LEVEL */
	fputs( "CA2GUI_U_LEVEL = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SCM2VM_StartTestNewDesiredLevel; /* SCM2VM_StartTestNewDesiredLevel */
	fputs( "SCM2VM_StartTestNewDesiredLevel = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SCM2VM_FINISH_VERIFICATION; /* SCM2VM_FINISH_VERIFICATION */
	fputs( "SCM2VM_FINISH_VERIFICATION = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_TEST_FAILED_U_MAX; /* VM2GUI_TEST_FAILED_U_MAX */
	fputs( "VM2GUI_TEST_FAILED_U_MAX = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_TEST_FAILED_U_MIN; /* VM2GUI_TEST_FAILED_U_MIN */
	fputs( "VM2GUI_TEST_FAILED_U_MIN = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_TEST_FAILED_OWERFLOW; /* VM2GUI_TEST_FAILED_OWERFLOW */
	fputs( "VM2GUI_TEST_FAILED_OWERFLOW = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_TEST_FAILED_UNDERFILL; /* VM2GUI_TEST_FAILED_UNDERFILL */
	fputs( "VM2GUI_TEST_FAILED_UNDERFILL = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_TEST_FAILED_DELTA_U; /* VM2GUI_TEST_FAILED_DELTA_U */
	fputs( "VM2GUI_TEST_FAILED_DELTA_U = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_TEST_FAILED_BIG_LEVEL_DIFFERENCE; /* VM2GUI_TEST_FAILED_BIG_LEVEL_DIFFERENCE */
	fputs( "VM2GUI_TEST_FAILED_BIG_LEVEL_DIFFERENCE = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_TEST_PASSED_X_LEVEL_CONTROL; /* VM2GUI_TEST_PASSED_X_LEVEL_CONTROL */
	fputs( "VM2GUI_TEST_PASSED_X_LEVEL_CONTROL = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_X_LEVEL; /* VM2GUI_X_LEVEL */
	fputs( "VM2GUI_X_LEVEL = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2GUI_END_VERIFICATION; /* VM2GUI_END_VERIFICATION */
	fputs( "VM2GUI_END_VERIFICATION = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	fclose(file);
}
