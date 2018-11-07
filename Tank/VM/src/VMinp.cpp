#include "r_cnst.h"
#include "r_io.h"
#include "VMcnst.h"
#include "VMxvar.h"

void Input (void)
{
/*======= Input Ports Reading =============*/
	PI0 = INBYTE((INT16U)0, (INT16U)0); /* чтение байта */
	PI1 = INBYTE((INT16U)0, (INT16U)1); /* чтение байта */
	PI2 = INBYTE((INT16U)0, (INT16U)2); /* чтение байта */
	PI3 = INBYTE((INT16U)0, (INT16U)3); /* чтение байта */
	PI4 = INBYTE((INT16U)0, (INT16U)4); /* чтение байта */
	PI5 = INBYTE((INT16U)0, (INT16U)5); /* чтение байта */
	PI6 = INBYTE((INT16U)0, (INT16U)6); /* чтение байта */
	PI7 = INBYTE((INT16U)0, (INT16U)7); /* чтение байта */
	P0V0 = (INT16S)PI0;
	P0V1 = (INT16S)PI1;
	P0V2 = (INT16S)PI2;
	P0V3 = (INT16S)PI3;
	P0V4 = (INT16S)PI4;
	P0V5 = (INT16S)PI5;
	P0V6 = (INT16S)PI6;
	P0V7 = (INT16S)PI7;
}
