#include <stdio.h>
#include "SCM_id.h"
main () {
	int i;
	FILE * file;
	char string[2 * 132];
	file = fopen("SCM_constants.cfg","w");
	i = X_MIN; /* C_0 - X_MIN */
	fputs( "X_MIN = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = X_MAX; /* C_1 - X_MAX */
	fputs( "X_MAX = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = Idiling; /* C_2 - Idiling */
	fputs( "Idiling = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = RunNextTest; /* C_3 - RunNextTest */
	fputs( "RunNextTest = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = H; /* C_4 - H */
	fputs( "H = " , file);
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

 	i = COM2CA_XD; /* COM2CA_XD */
	fputs( "COM2CA_XD = " , file);
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

 	fclose(file);
}
