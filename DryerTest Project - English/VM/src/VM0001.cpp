/* FILE OF PROC-IMAGES OF THE PROJECT */
#include "VMext.h" /* Common files for all generated c-files */
#include "VMxvar.h"  /* Var-images */

void P0 (void) /* œ–Œ÷≈——: Init */
{
	switch (Check_State(0)) {

		case 0:    /*  P0S0() - —Œ—“ŒﬂÕ»≈: Start */

		SendMsgToSCM(C_8);
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
			case C_5:
				SendMsgGUICode(C_16);
				Set_Start(3);
				Set_Start(2); 	
				break;
			case C_6: 
				SendMsgGUICode(C_17);
				Set_Start(4);
				Set_Start(2); 
				break;
			case C_7:
				SendMsgGUICode(C_18);
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

		if (Timeout(2, C_4))  Set_State(2, 1);
			break;
		case 1:    /*  P2S1() - —Œ—“ŒﬂÕ»≈: Report */

	
		if((!(Check_State(3) & MASK_OF_INACTIVITY)))
		{
			SendMsgGUICode(C_10);
		}
		if ((Check_State(3) == STATE_OF_ERROR))
		{
			SendMsgGUICode(C_12);
		}


		Set_Stop(3);
		
		
		
		if((!(Check_State(4) & MASK_OF_INACTIVITY)))
		{
			SendMsgGUICode(C_11);
		}

		if ((Check_State(4) == STATE_OF_ERROR))
		{
			SendMsgGUICode(C_13);
		}

		 
		Set_Stop(4);
		
		SendMsgToSCM(C_9);
		Set_Stop(2);
			break;
		default:
			break;
	}
}

void P3 (void) /* œ–Œ÷≈——: DryerNormalTurnOnControl */
{
	switch (Check_State(3)) {

		case 0:    /*  P3S0() - —Œ—“ŒﬂÕ»≈: WaitingOfHands */

		if(P0V0 == C_0) 
			Set_State(3, 1);
		if (Timeout(3, C_3))  Set_Error(3);
			break;
		case 1:    /*  P3S1() - —Œ—“ŒﬂÕ»≈: WaitingOnLaunch */

		if (P0V1 == C_0)
		{
			Set_State(3, 2); 
		}
		if (Timeout(3, C_2))  Set_Error(3);
			break;
		case 2:    /*  P3S2() - —Œ—“ŒﬂÕ»≈: StabilityControl */

		
		if (P0V0 == C_1)
				Set_State(3, 0); 
		else if(P0V1 == C_1) Set_Error(3);
			break;
		default:
			break;
	}
}

void P4 (void) /* œ–Œ÷≈——: DryerNormalTurnOffControl */
{
	switch (Check_State(4)) {

		case 0:    /*  P4S0() - —Œ—“ŒﬂÕ»≈: WaitingOff */

		
		if (P0V1 == C_1) Set_Error(4);
		if (Timeout(4, C_2))  Set_State(4, 1);
			break;
		case 1:    /*  P4S1() - —Œ—“ŒﬂÕ»≈: StabilityControl */

		if (P0V1 == C_0) Set_Error(4);
			break;
		default:
			break;
	}
}
