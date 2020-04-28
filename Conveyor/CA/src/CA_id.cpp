#include <stdio.h>
#include "CA_id.h"
main () {
	int i;
	FILE * file;
	char string[2 * 132];
	file = fopen("CA_constants.cfg","w");
	i = OFF; /* C_0 - OFF */
	fputs( "OFF = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = ON; /* C_1 - ON */
	fputs( "ON = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = CA2GUI_PRESENCE_SENSOR_ERROR; /* CA2GUI_PRESENCE_SENSOR_ERROR */
	fputs( "CA2GUI_PRESENCE_SENSOR_ERROR = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = CA2GUI_COLOR_SENSORS_ERROR; /* CA2GUI_COLOR_SENSORS_ERROR */
	fputs( "CA2GUI_COLOR_SENSORS_ERROR = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	fclose(file);
}
