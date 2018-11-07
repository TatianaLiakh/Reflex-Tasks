#include <stdio.h>
#include "CA_id.h"
main () {
	int i;
	FILE * file;
	char string[2 * 132];
	file = fopen("CA_constants.cfg","w");
	i = T_H; /* C_0 - T_H */
	fputs( "T_H = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = X_MIN; /* C_1 - X_MIN */
	fputs( "X_MIN = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = X_MAX; /* C_2 - X_MAX */
	fputs( "X_MAX = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = H; /* C_3 - H */
	fputs( "H = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = U_MIN; /* C_4 - U_MIN */
	fputs( "U_MIN = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = U_MAX; /* C_5 - U_MAX */
	fputs( "U_MAX = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = DELTA_U; /* C_6 - DELTA_U */
	fputs( "DELTA_U = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = K_P; /* C_7 - K_P */
	fputs( "K_P = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = K_I; /* C_8 - K_I */
	fputs( "K_I = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = COM2CA_XD; /* COM2CA_XD */
	fputs( "COM2CA_XD = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = CA2GUI_X_LEVEL; /* CA2GUI_X_LEVEL */
	fputs( "CA2GUI_X_LEVEL = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = CA2GUI_U_LEVEL; /* CA2GUI_U_LEVEL */
	fputs( "CA2GUI_U_LEVEL = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	fclose(file);
}
