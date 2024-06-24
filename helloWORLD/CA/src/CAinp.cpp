#include "r_cnst.h"
#include "r_io.h"
#include "CAcnst.h"
#include "CAxvar.h"

void Input (void)
{
/*======= Input Ports Reading =============*/
	PI0 = INBYTE((INT16U)0, (INT16U)0); /* чтение байта */
	FPO0 = OFF; PO0 = INBYTE((INT16U)1, (INT16U)0);
	if (PO0 & MASK1_S8) P0V0[0] = 1;
	else P0V0[0] = 0;
	P0V0[1] = P0V0[0];
}
