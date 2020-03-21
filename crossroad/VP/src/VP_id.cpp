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

 	i = DrivingTime; /* C_2 - DrivingTime */
	fputs( "DrivingTime = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = CrossingTime; /* C_3 - CrossingTime */
	fputs( "CrossingTime = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = YellowLightTime; /* C_4 - YellowLightTime */
	fputs( "YellowLightTime = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SensorTime; /* C_5 - SensorTime */
	fputs( "SensorTime = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = Norm; /* C_6 - Norm */
	fputs( "Norm = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = Wrong; /* C_7 - Wrong */
	fputs( "Wrong = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SCM2VP_RUN_CAR; /* SCM2VP_RUN_CAR */
	fputs( "SCM2VP_RUN_CAR = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SCM2VP_RUN_WRONG_CAR; /* SCM2VP_RUN_WRONG_CAR */
	fputs( "SCM2VP_RUN_WRONG_CAR = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SCM2VP_RUN_TWO_CARS; /* SCM2VP_RUN_TWO_CARS */
	fputs( "SCM2VP_RUN_TWO_CARS = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	fclose(file);
}
