#include <stdio.h>
#include "SCM_id.h"
main () {
	int i;
	FILE * file;
	char string[2 * 132];
	file = fopen("SCM_constants.cfg","w");
	i = TestIdling1; /* C_0 - TestIdling1 */
	fputs( "TestIdling1 = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = TestIdling2; /* C_1 - TestIdling2 */
	fputs( "TestIdling2 = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = TestIdling3; /* C_2 - TestIdling3 */
	fputs( "TestIdling3 = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SCM2VP_RUN_CARS; /* SCM2VP_RUN_CARS */
	fputs( "SCM2VP_RUN_CARS = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SCM2VP_NO_CARS; /* SCM2VP_NO_CARS */
	fputs( "SCM2VP_NO_CARS = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SCM2VP_RUN_WRONG_CAR; /* SCM2VP_RUN_WRONG_CAR */
	fputs( "SCM2VP_RUN_WRONG_CAR = " , file);
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

 	fclose(file);
}
