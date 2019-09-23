/* FILE OF PROC-IMAGES OF THE PROJECT */
#include "CAext.h" /* Common files for all generated c-files */
#include "CAxvar.h"  /* Var-images */

void P0 (void) /* œ–Œ÷≈——: Init */
{
	switch (Check_State(0)) {

		case 0:    /*  P0S0() - —Œ—“ŒﬂÕ»≈: Functioning */
  
			P0V0[1] = C_1;
			if (Timeout(0, C_3))  Set_State(0, 1);
			break;
		case 1:    /*  P0S1() - —Œ—“ŒﬂÕ»≈: Non_Functioning */
			
			P0V0[1] = C_0;
            if (Timeout(0, C_3))  Set_State(0, 0);
			break;
		default:
			break;
	}
}
