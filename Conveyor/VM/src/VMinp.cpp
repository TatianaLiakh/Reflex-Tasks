#include "r_cnst.h"
#include "r_io.h"
#include "VMcnst.h"
#include "VMxvar.h"

void Input (void)
{
/*======= Input Ports Reading =============*/
	PI0 = INBYTE((INT16U)0, (INT16U)0); /* чтение байта */
	PI1 = INBYTE((INT16U)0, (INT16U)1); /* чтение байта */
	if (PI0 & MASK1_S8) P0V0 = 1;
	else P0V0 = 0;
	if (PI0 & MASK2_S8) P0V1 = 1;
	else P0V1 = 0;
	if (PI0 & MASK3_S8) P0V2 = 1;
	else P0V2 = 0;
	if (PI1 & MASK1_S8) P0V3 = 1;
	else P0V3 = 0;
	if (PI1 & MASK2_S8) P0V4 = 1;
	else P0V4 = 0;
	if (PI1 & MASK3_S8) P0V5 = 1;
	else P0V5 = 0;
}
