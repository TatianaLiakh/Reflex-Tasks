#include "r_cnst.h"
#include "r_io.h"
#include "VPcnst.h"
#include "VPxvar.h"

void Input (void)
{
/*======= Input Ports Reading =============*/
	PI0 = INBYTE((INT16U)0, (INT16U)0); /* чтение байта */
	PI1 = INBYTE((INT16U)0, (INT16U)1); /* чтение байта */
	PI2 = INBYTE((INT16U)0, (INT16U)2); /* чтение байта */
	PI3 = INBYTE((INT16U)0, (INT16U)3); /* чтение байта */
	FPO0 = OFF; PO0 = INBYTE((INT16U)1, (INT16U)0);
	FPO1 = OFF; PO1 = INBYTE((INT16U)1, (INT16U)1);
	FPO2 = OFF; PO2 = INBYTE((INT16U)1, (INT16U)2);
	FPO3 = OFF; PO3 = INBYTE((INT16U)1, (INT16U)3);
	P0V2 = (INT16S)PI0;
	P0V3 = (INT16S)PI1;
	P0V4 = (INT16S)PI2;
	P0V5 = (INT16S)PI3;
	P0V6[0] = (INT16S)PO0;
	P0V6[1] = P0V6[0];
	P0V7[0] = (INT16S)PO1;
	P0V7[1] = P0V7[0];
	P0V8[0] = (INT16S)PO2;
	P0V8[1] = P0V8[0];
	P0V9[0] = (INT16S)PO3;
	P0V9[1] = P0V9[0];
}
