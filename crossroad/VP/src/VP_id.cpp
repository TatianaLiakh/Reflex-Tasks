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

 	i = Wrong; /* C_2 - Wrong */
	fputs( "Wrong = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = Norm; /* C_3 - Norm */
	fputs( "Norm = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = NoCars; /* C_4 - NoCars */
	fputs( "NoCars = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SensorTime; /* C_5 - SensorTime */
	fputs( "SensorTime = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SCM2VP_RUN_CARS; /* SCM2VP_RUN_CARS */
	fputs( "SCM2VP_RUN_CARS = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SCM2VP_NO_CARS; /* SCM2VP_NO_CARS */
	fputs( "SCM2VP_NO_CARS = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SCM2VP_RUN_WRONG_CAR; /* SCM2VP_RUN_WRONG_CAR */
	fputs( "SCM2VP_RUN_WRONG_CAR = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	fclose(file);
}
