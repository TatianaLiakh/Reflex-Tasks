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

 	i = one_second; /* C_2 - one_second */
	fputs( "one_second = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = two_second; /* C_3 - two_second */
	fputs( "two_second = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	fclose(file);
}
