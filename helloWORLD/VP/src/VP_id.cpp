#include <stdio.h>
#include "VP_id.h"
main () {
	int i;
	FILE * file;
	char string[2 * 132];
	file = fopen("VP_constants.cfg","w");
	i = SCM2VP_MESSAGE_TURN_ON; /* SCM2VP_MESSAGE_TURN_ON */
	fputs( "SCM2VP_MESSAGE_TURN_ON = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SCM2VP_MESSAGE_TURN_OFF; /* SCM2VP_MESSAGE_TURN_OFF */
	fputs( "SCM2VP_MESSAGE_TURN_OFF = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	fclose(file);
}
