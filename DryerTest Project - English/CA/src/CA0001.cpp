/* FILE OF PROC-IMAGES OF THE PROJECT */
#include "CAext.h" /* Common files for all generated c-files */
#include "CAxvar.h"  /* Var-images */

void P0 (void) /* œ–Œ÷≈——: Init */
{
	switch (Check_State(0)) {

		case 0:    /*  P0S0() - —Œ—“ŒﬂÕ»≈: Functioning */
  
	if (P0V0 == C_0) 
	{
		P0V1[1] = C_0;		
		Set_State(0, 1);						
	}
	else P0V1[1] = C_1;
			break;
		case 1:    /*  P0S1() - —Œ—“ŒﬂÕ»≈: Drying */
  
	if (P0V0 == C_0) Set_State(0, 1);
	if (Timeout(0, 5))  
	 {	
		if (1) Set_State(0, 0);
		P0V1[1] = C_0;	
	 }
			break;
		default:
			break;
	}
}
