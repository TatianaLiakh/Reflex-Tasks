#include <stdio.h>
#include "CA_id.h"
main () {
	int i;
	FILE * file;
	char string[2 * 132];
	file = fopen("CA_constants.cfg","w");
	i = ON; /* C_0 - ON */
	fputs( "ON = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = OFF; /* C_1 - OFF */
	fputs( "OFF = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SECOND; /* C_2 - SECOND */
	fputs( "SECOND = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = THIRTY_SECONDS; /* C_3 - THIRTY_SECONDS */
	fputs( "THIRTY_SECONDS = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = MINUTE; /* C_4 - MINUTE */
	fputs( "MINUTE = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = BA_FPGA1_U1; /* C_5 - BA_FPGA1_U1 */
	fputs( "BA_FPGA1_U1 = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = BA_FPGA3_U1; /* C_6 - BA_FPGA3_U1 */
	fputs( "BA_FPGA3_U1 = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	fclose(file);
}
