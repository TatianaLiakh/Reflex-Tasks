/* FILE OF PROC-IMAGES OF THE PROJECT */
#include "VMext.h" /* Common files for all generated c-files */
#include "VMxvar.h"  /* Var-images */

void P0 (void) /* œ–Œ÷≈——: Init */
{
	switch (Check_State(0)) {

		case 0:    /*  P0S0() - —Œ—“ŒﬂÕ»≈: Start */
	
			SendMsgSCMCode(C_7); 	
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

			
			if (GetNextMsgFromSCM()) 
			{
				P1V0 = GetMsgCodeFromSCM();
				switch (P1V0) 				
				{
				
					case C_4:					
						SendMsgGUICode(C_15);
						Set_Start(2); 	
						break;
					case C_6:
						SendMsgGUICode(C_17);
						Set_Stop(2); 
						Set_Stop(1);
						break;
				}
			}
			
			break;
		default:
			break;
	}
}

void P2 (void) /* œ–Œ÷≈——: Terminator */
{
	switch (Check_State(2)) {

		case 0:    /*  P2S0() - —Œ—“ŒﬂÕ»≈: Idling */

			if (Timeout(2, C_3))  Set_State(2, 1);
			break;
		case 1:    /*  P2S1() - —Œ—“ŒﬂÕ»≈: Report */
			
			SendMsgGUICode(C_9);
			Set_Stop(2);
			break;
		default:
			break;
	}
}
