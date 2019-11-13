#include "r_cnst.h"
#include "r_io.h"
#include "VPcnst.h"
#include "VPxvar.h"

void Input (void)
{
/*======= Input Ports Reading =============*/
	PI0 = INBYTE((INT16U)0, (INT16U)0); /* чтение байта */
	FPO0 = OFF; PO0 = INBYTE((INT16U)1, (INT16U)0);
}
