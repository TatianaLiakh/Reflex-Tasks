#include "r_cnst.h"
#include "r_io.h"
#include "VMcnst.h"
#include "VMxvar.h"

void Input (void)
{
/*======= Input Ports Reading =============*/
	PI0 = INBYTE((INT16U)0, (INT16U)0); /* ������ ����� */
	PI1 = INBYTE((INT16U)0, (INT16U)1); /* ������ ����� */
}
