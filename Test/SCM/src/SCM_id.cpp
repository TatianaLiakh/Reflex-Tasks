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

 	fclose(file);
}
