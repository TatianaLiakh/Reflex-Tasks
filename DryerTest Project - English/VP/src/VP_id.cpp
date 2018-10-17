#include <stdio.h>
#include "VP_id.h"
main () {
	int i;
	FILE * file;
	char string[2 * 132];
	file = fopen("VP_constants.cfg","w");
	i = ON; /* C_0 - ON */
	fputs( "ON = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = OFF; /* C_1 - OFF */
	fputs( "OFF = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SENSOR_DELAY; /* C_2 - SENSOR_DELAY */
	fputs( "SENSOR_DELAY = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SCM2VP_INSERT_HANDS; /* SCM2VP_INSERT_HANDS */
	fputs( "SCM2VP_INSERT_HANDS = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SCM2VP_TAKE_AWAY_HANDS; /* SCM2VP_TAKE_AWAY_HANDS */
	fputs( "SCM2VP_TAKE_AWAY_HANDS = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	fclose(file);
}
