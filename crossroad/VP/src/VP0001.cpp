/* FILE OF PROC-IMAGES OF THE PROJECT */
#include "VPext.h" /* Common files for all generated c-files */
#include "VPxvar.h"  /* Var-images */

void P0 (void) /* œ–Œ÷≈——: Init */
{
	switch (Check_State(0)) {

		case 0:    /*  P0S0() - —Œ—“ŒﬂÕ»≈: Start */
 			
		Set_Start(1);
		Set_Stop(0);
			break;
		default:
			break;
	}
}

void P1 (void) /* œ–Œ÷≈——: ReceiveSCMOutputMsg */
{
	switch (Check_State(1)) {

		case 0:    /*  P1S0() - —Œ—“ŒﬂÕ»≈: Start */

		if (GetMessageFromScenariousBlock()) 
		{
			P1V1 = GetMessageCodeFromScenariousBlock();
			switch (P1V1)
			{	
				case C_7:
				if((Check_State(2) & MASK_OF_INACTIVITY))
				{
					P1V0 = C_4;	
					Set_Start(2);	
				}					
					break;
				case C_6:
					P1V0 = C_3;	
					break;
				case C_8:
						P1V0 = C_2;
					break;
			}
		}
		
			break;
		default:
			break;
	}
}

void P2 (void) /* œ–Œ÷≈——: RunCars */
{
	switch (Check_State(2)) {

		case 0:    /*  P2S0() - —Œ—“ŒﬂÕ»≈: Start */

		P0V1[1] = C_1;
		if(P1V0 != C_4) Set_State(2, 1);
			break;
		case 1:    /*  P2S1() - —Œ—“ŒﬂÕ»≈: GetToSensor */

		P0V1[1] = C_0;
		if(P1V0 == C_3)	Set_State(2, 2);
			break;
		case 2:    /*  P2S2() - —Œ—“ŒﬂÕ»≈: WaitingForSwitching */
				  	 	  
		if(P0V0)	
			Set_State(2, 3);
			break;
		case 3:    /*  P2S3() - —Œ—“ŒﬂÕ»≈: PassingSensor */

		if (Timeout(2, C_5)) 
		{	
			P0V1[1] = C_1;
			Set_State(2, 4);
		}
			break;
		case 4:    /*  P2S4() - —Œ—“ŒﬂÕ»≈: TimeBetweenCars */

		P2V3 = Random();
		if (Timeout(2, P2V3))  Set_State(2, 0);
			break;
		default:
			break;
	}
}
