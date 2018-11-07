#include "r_cnst.h"
#include "r_io.h"
#include "VPcnst.h"
#include "VPxvar.h"

void Output (void)
{
	if (P0V6[0] != P0V6[1]) {
		FPO0 = ON;
		PO0 = P0V6[1];
	}
	if (P0V7[0] != P0V7[1]) {
		FPO1 = ON;
		PO1 = P0V7[1];
	}
	if (P0V8[0] != P0V8[1]) {
		FPO2 = ON;
		PO2 = P0V8[1];
	}
	if (P0V9[0] != P0V9[1]) {
		FPO3 = ON;
		PO3 = P0V9[1];
	}


/*======= Output Port =============*/
	if(FPO0 == ON) OUTBYTE((INT16U)1, (INT16U)0, (INT8U)~PO0);
	if(FPO1 == ON) OUTBYTE((INT16U)1, (INT16U)1, (INT8U)~PO1);
	if(FPO2 == ON) OUTBYTE((INT16U)1, (INT16U)2, (INT8U)~PO2);
	if(FPO3 == ON) OUTBYTE((INT16U)1, (INT16U)3, (INT8U)~PO3);
}
