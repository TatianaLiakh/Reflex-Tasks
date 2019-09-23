#include <stdio.h>
#include "VP_id.h"
main () {
	int i;
	FILE * file;
	char string[2 * 132];
	file = fopen("VP_constants.cfg","w");
	i = D2P_MESSAGE_TURN_ON; /* D2P_MESSAGE_TURN_ON */
	fputs( "D2P_MESSAGE_TURN_ON = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = D2P_MESSAGE_TURN_OFF; /* D2P_MESSAGE_TURN_OFF */
	fputs( "D2P_MESSAGE_TURN_OFF = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	fclose(file);
}
