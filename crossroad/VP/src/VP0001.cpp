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

		P1V0 = C_6;
		if (GetMessageFromScenariousBlock()) 
		{
			P1V2 = GetMessageCodeFromScenariousBlock();
			switch (P1V2)
			{
				case C_8:
					if((Check_State(2) & MASK_OF_INACTIVITY))
						Set_Start(2);	
					break;					
				case C_9:
					P1V0 = C_7;
					if((Check_State(2) & MASK_OF_INACTIVITY))
						Set_Start(2);	
					break;
				case C_10:
					if((Check_State(3) & MASK_OF_INACTIVITY))
						Set_Start(3);	
					break;
			}
		}
		
			break;
		default:
			break;
	}
}

void P2 (void) /* œ–Œ÷≈——: RunCar */
{
	switch (Check_State(2)) {

		case 0:    /*  P2S0() - —Œ—“ŒﬂÕ»≈: GetToSensor1 */

		if (Timeout(2, C_2))  
		{
			P0V1[1] = C_0;
			Set_State(2, 1);
		}
			break;
		case 1:    /*  P2S1() - —Œ—“ŒﬂÕ»≈: WaitingForSwitching */
 
		if(P0V0 == C_0)
			Set_State(2, 2);
			break;
		case 2:    /*  P2S2() - —Œ—“ŒﬂÕ»≈: WaitingYellowLight */

		if (Timeout(2, C_4))  Set_State(2, 3);
			break;
		case 3:    /*  P2S3() - —Œ—“ŒﬂÕ»≈: PassingSensor1 */

		if (Timeout(2, C_5)) 
		{
			if(P1V0 == C_6)
				P0V1[1] = C_1;
			Set_State(2, 4);
		}
			break;
		case 4:    /*  P2S4() - —Œ—“ŒﬂÕ»≈: PassingCrossroad */

		if (Timeout(2, C_3)) 
		{
			if(P1V0 == C_6)
				P0V1[1] = C_0;
			Set_State(2, 5);
		}
			break;
		case 5:    /*  P2S5() - —Œ—“ŒﬂÕ»≈: PassingSensor2 */

		if (Timeout(2, C_5)) 
		{
			if(P1V0 == C_6)
				P0V1[1] = C_1;
			Set_State(2, 6);
		}
			break;
		case 6:    /*  P2S6() - —Œ—“ŒﬂÕ»≈: GetAwayFromSensor2 */

		if (Timeout(2, C_2))  Set_Stop(2);
			break;
		default:
			break;
	}
}

void P3 (void) /* œ–Œ÷≈——: RunTwoCars */
{
	switch (Check_State(3)) {

		case 0:    /*  P3S0() - —Œ—“ŒﬂÕ»≈: Init */

		P3V2 = 1; 	
		Set_State(3, 1);
			break;
		case 1:    /*  P3S1() - —Œ—“ŒﬂÕ»≈: GetToSensor1 */

		if (Timeout(3, C_2))  
		{
			P0V1[1] = C_0;
			Set_State(3, 2);
		}
			break;
		case 2:    /*  P3S2() - —Œ—“ŒﬂÕ»≈: WaitingForSwitching */
 
		if(P0V0 == C_0)
			Set_State(3, 3);
			break;
		case 3:    /*  P3S3() - —Œ—“ŒﬂÕ»≈: WaitingYellowLight */

		if(P3V2 == 2)
			Set_State(3, 4);
		if (Timeout(3, C_4))  Set_State(3, 4);
			break;
		case 4:    /*  P3S4() - —Œ—“ŒﬂÕ»≈: PassingSensor1 */

		if(P0V0 == C_1)
			Set_State(3, 2);
		if (Timeout(3, C_5)) 
		{
			P0V1[1] = C_1;
			Set_State(3, 5);
		}
			break;
		case 5:    /*  P3S5() - —Œ—“ŒﬂÕ»≈: PassingCrossroad */

		if (Timeout(3, C_3)) 
		{
			P0V1[1] = C_0;
			Set_State(3, 6);
		}
			break;
		case 6:    /*  P3S6() - —Œ—“ŒﬂÕ»≈: PassingSensor2 */

		if (Timeout(3, C_5)) 
		{
			P0V1[1] = C_1;
			Set_State(3, 7);
		}
			break;
		case 7:    /*  P3S7() - —Œ—“ŒﬂÕ»≈: GetAwayFromSensor2 */

		if (Timeout(3, C_2)) 
		{
			if(P3V2 == 1)
			{
				P3V2++; 
				Set_State(3, 1);
			}
			else if(P3V2 == 2)
				Set_Stop(3);
		}
			break;
		default:
			break;
	}
}
