/* FILE OF PROC-IMAGES OF THE PROJECT */
#include "CAext.h" /* Common files for all generated c-files */
#include "CAxvar.h"  /* Var-images */

void P0 (void) /* œ–Œ÷≈——: Init */
{
	switch (Check_State(0)) {

		case 0:    /*  P0S0() - —Œ—“ŒﬂÕ»≈: Start */
  
			P0V1[1] = C_0;
			Set_State(0, 1);
			break;
		case 1:    /*  P0S1() - —Œ—“ŒﬂÕ»≈: SecondaryRoadControl */
			
			if(P0V0)
			{
				if((Check_State(1) & MASK_OF_INACTIVITY))
				{
					Set_Start(1);
				}
			}
			
			break;
		default:
			break;
	}
}

void P1 (void) /* œ–Œ÷≈——: LightWorkCycle */
{
	switch (Check_State(1)) {

		case 0:    /*  P1S0() - —Œ—“ŒﬂÕ»≈: PausePCycles */

			P0V1[1] = C_0;
			if (Timeout(1, C_3))  Set_State(1, 1);
			break;
		case 1:    /*  P1S1() - —Œ—“ŒﬂÕ»≈: DisableMotionForKCycles */

			P0V1[1] = C_1;
			if (Timeout(1, C_2)) 
			{	
				P0V1[1] = C_0;
				Set_Stop(1);
			}
			break;
		default:
			break;
	}
}
