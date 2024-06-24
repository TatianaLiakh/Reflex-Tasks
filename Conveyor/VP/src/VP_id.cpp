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

 	i = SensorDelay; /* C_2 - SensorDelay */
	fputs( "SensorDelay = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = RemovingDelay; /* C_3 - RemovingDelay */
	fputs( "RemovingDelay = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = Norm; /* C_4 - Norm */
	fputs( "Norm = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = PresenceSensorWrong; /* C_5 - PresenceSensorWrong */
	fputs( "PresenceSensorWrong = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = ColorSensorWrong; /* C_6 - ColorSensorWrong */
	fputs( "ColorSensorWrong = " , file);
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

 	fclose(file);
}
