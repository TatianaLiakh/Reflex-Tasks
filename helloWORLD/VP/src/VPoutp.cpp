#include "r_cnst.h"
#include "r_io.h"
#include "VPcnst.h"
#include "VPxvar.h"

void Output (void)
{


/*======= Output Port =============*/
	if(FPO0 == ON) OUTBYTE((INT16U)1, (INT16U)0, (INT8U)~PO0);
}
