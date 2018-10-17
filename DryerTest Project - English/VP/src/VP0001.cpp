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
				case C_3:
					Set_Start(2);	
					break;					
				case C_4:
					Set_Stop(2);
					P0V1[1] = C_1;
					break;			
			}
		}
		
			break;
		default:
			break;
	}
}

void P2 (void) /* œ–Œ÷≈——: InsertHands */
{
	switch (Check_State(2)) {

		case 0:    /*  P2S0() - —Œ—“ŒﬂÕ»≈: Choice */

		P2V1 = Random();
		if (P2V1 <= 80) Set_State(2, 1);
		else Set_State(2, 2);
			break;
		case 1:    /*  P2S1() - —Œ—“ŒﬂÕ»≈: SensorOn */

		P0V1[1] = C_0; 
		if (Timeout(2, C_2))  Set_State(2, 0);
			break;
		case 2:    /*  P2S2() - —Œ—“ŒﬂÕ»≈: SensorOff */

		P0V1[1] = C_1; 
		if (Timeout(2, C_2))  Set_State(2, 0);
			break;
		default:
			break;
	}
}
