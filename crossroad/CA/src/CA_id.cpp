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

 	i = KCyclesDelay; /* C_2 - KCyclesDelay */
	fputs( "KCyclesDelay = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = PCyclesDelay; /* C_3 - PCyclesDelay */
	fputs( "PCyclesDelay = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	fclose(file);
}
