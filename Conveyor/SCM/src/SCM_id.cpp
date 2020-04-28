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
