#include "r_cnst.h"
#include "r_io.h"
#include "CAcnst.h"
#include "CAxvar.h"

void Output (void)
{
	if (P0V1[0] != P0V1[1]) {
		FPO0 = ON;
		if (!(P0V1[1] == ZERO)) PO0 |= MASK1_S8;
		else PO0 &= ~MASK1_S8;
	}


/*======= Output Port =============*/
	if(FPO0 == ON) OUTBYTE((INT16U)C_6, (INT16U)0, (INT8U)~PO0);
}
