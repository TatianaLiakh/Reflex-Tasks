#include <stdio.h>
#include "VP_id.h"
main () {
	int i;
	FILE * file;
	char string[2 * 132];
	file = fopen("VP_constants.cfg","w");
	i = T_H; /* C_0 - T_H */
	fputs( "T_H = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = PI; /* C_1 - PI */
	fputs( "PI = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = g; /* C_2 - g */
	fputs( "g = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = H; /* C_3 - H */
	fputs( "H = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SIMULATOR_DELAY; /* C_4 - SIMULATOR_DELAY */
	fputs( "SIMULATOR_DELAY = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = GAMMA; /* C_5 - GAMMA */
	fputs( "GAMMA = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = BETA; /* C_6 - BETA */
	fputs( "BETA = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = X_MIN; /* C_7 - X_MIN */
	fputs( "X_MIN = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = X_MAX; /* C_8 - X_MAX */
	fputs( "X_MAX = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VP2GUI_Tank_Level; /* VP2GUI_Tank_Level */
	fputs( "VP2GUI_Tank_Level = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VP2GUI_U_Level; /* VP2GUI_U_Level */
	fputs( "VP2GUI_U_Level = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	fclose(file);
}
