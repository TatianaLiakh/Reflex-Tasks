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

 	i = SCM2VP_PUT_BOXES_ON_CONVEYOR; /* SCM2VP_PUT_BOXES_ON_CONVEYOR */
	fputs( "SCM2VP_PUT_BOXES_ON_CONVEYOR = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SCM2VP_BROKEN_PRESENCE_SENSOR; /* SCM2VP_BROKEN_PRESENCE_SENSOR */
	fputs( "SCM2VP_BROKEN_PRESENCE_SENSOR = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SCM2VP_BROKEN_COLOR_SENSORS; /* SCM2VP_BROKEN_COLOR_SENSORS */
	fputs( "SCM2VP_BROKEN_COLOR_SENSORS = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SCM2VP_FINISH_VERIFICATION; /* SCM2VP_FINISH_VERIFICATION */
	fputs( "SCM2VP_FINISH_VERIFICATION = " , file);
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
