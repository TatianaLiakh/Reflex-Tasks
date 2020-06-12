/* FILE OF PROC-IMAGES OF THE PROJECT */
#include "VMext.h" /* Common files for all generated c-files */
#include "VMxvar.h"  /* Var-images */

void P0 (void) /* œ–Œ÷≈——: Init */
{
	switch (Check_State(0)) {

		case 0:    /*  P0S0() - —Œ—“ŒﬂÕ»≈: Start */
	
			SendMsgSCMCode(C_11); 	
			Set_Start(2);
			Set_Start(1);
			Set_Stop(0);
			break;
		default:
			break;
	}
}

void P1 (void) /* œ–Œ÷≈——: ReceiveCAOutputMsg */
{
	switch (Check_State(1)) {

		case 0:    /*  P1S0() - —Œ—“ŒﬂÕ»≈: Init */
		
			P1V1 = C_3;
			P1V2 = C_3;
			Set_State(1, 1);
			break;
		case 1:    /*  P1S1() - —Œ—“ŒﬂÕ»≈: Start */

			if (GetNextMsgFromCA()) 
			{
				P1V0 = GetMsgCodeFromCA();
				switch (P1V0) 				
				{
					case C_4:
						P1V1 = C_2;
					break;
					case C_5:
						P1V2 = C_2;
					break;
				}
			}
			
			break;
		default:
			break;
	}
}

void P2 (void) /* œ–Œ÷≈——: ReceiveSCMOutputMsg */
{
	switch (Check_State(2)) {

		case 0:    /*  P2S0() - —Œ—“ŒﬂÕ»≈: Start */

			
			if (GetNextMsgFromSCM()) 
			{
				P2V0 = GetMsgCodeFromSCM();
				switch (P2V0) 				
				{			
					case C_6:			
						SendMsgGUICode(C_24);
						Set_Start(6); 
						Set_Start(7);
						Set_Start(8);
						Set_Start(9);	
						break;
						
					case C_7:
						SendMsgGUICode(C_25);
						Set_Start(4);	
					break;
					
					case C_8:
						SendMsgGUICode(C_26);
						Set_Start(5);	
					break;
					
					case C_9:
						Set_Start(3); 
						break;
					
					case C_10:
						SendMsgGUICode(C_27);
						Set_Stop(3); 
						Set_Stop(2);
						break;
				}
			}
			
			break;
		default:
			break;
	}
}

void P3 (void) /* œ–Œ÷≈——: Terminator */
{
	switch (Check_State(3)) {

		case 0:    /*  P3S0() - —Œ—“ŒﬂÕ»≈: Report */
			
			if((!(Check_State(6) & MASK_OF_INACTIVITY)))
			{
				SendMsgGUICode(C_16);
			}
			if ((Check_State(6) == STATE_OF_ERROR))
			{
				SendMsgGUICode(C_17);
			}

			Set_Stop(6);
			
			if((!(Check_State(7) & MASK_OF_INACTIVITY)))
			{
				SendMsgGUICode(C_18);
			}
			if ((Check_State(7) == STATE_OF_ERROR))
			{
				SendMsgGUICode(C_19);
			}

			Set_Stop(7);
			
			if((!(Check_State(8) & MASK_OF_INACTIVITY)))
			{
				SendMsgGUICode(C_20);
			}
			if ((Check_State(8) == STATE_OF_ERROR))
			{
				SendMsgGUICode(C_21);
			}

			Set_Stop(8);
			
			if((!(Check_State(9) & MASK_OF_INACTIVITY)))
			{
				SendMsgGUICode(C_22); 
			}
			if ((Check_State(9) == STATE_OF_ERROR))
			{
				SendMsgGUICode(C_23);
			}

			Set_Stop(9);
			
			if((!(Check_State(4) & MASK_OF_INACTIVITY)))
			{
				SendMsgGUICode(C_14); 
			}
			if ((Check_State(4) == STATE_OF_ERROR))
			{
				SendMsgGUICode(C_12);
			}

			Set_Stop(4);
			
			if((!(Check_State(5) & MASK_OF_INACTIVITY)))
			{
				SendMsgGUICode(C_15); 
			}
			if ((Check_State(5) == STATE_OF_ERROR))
			{
				SendMsgGUICode(C_13);
			}

			Set_Stop(5);
			Set_Stop(3);
			break;
		default:
			break;
	}
}

void P4 (void) /* œ–Œ÷≈——: PresenceSensorControl */
{
	switch (Check_State(4)) {

		case 0:    /*  P4S0() - —Œ—“ŒﬂÕ»≈: Control */

		if(P1V1 == C_2)
			Set_Error(4);
		
			break;
		default:
			break;
	}
}

void P5 (void) /* œ–Œ÷≈——: ColorSensorsControl */
{
	switch (Check_State(5)) {

		case 0:    /*  P5S0() - —Œ—“ŒﬂÕ»≈: Control */

		if(P1V2 == C_2)
			Set_Error(5);
		
			break;
		default:
			break;
	}
}

void P6 (void) /* œ–Œ÷≈——: GreenBoxControl */
{
	switch (Check_State(6)) {

		case 0:    /*  P6S0() - —Œ—“ŒﬂÕ»≈: WaitingOfGreenBox */

		if(P0V0 && P0V2)
			Set_State(6, 1);
			break;
		case 1:    /*  P6S1() - —Œ—“ŒﬂÕ»≈: WaitingOnLaunch */

		if(P0V4)
			Set_State(6, 2);
		if (Timeout(6, C_0))  Set_Error(6);
			break;
		case 2:    /*  P6S2() - —Œ—“ŒﬂÕ»≈: StabilityControl */

		if(!P0V0)
			Set_State(6, 0);	
		else if(!P0V4 || P0V5) Set_Error(6);
			break;
		default:
			break;
	}
}

void P7 (void) /* œ–Œ÷≈——: RedBoxControl */
{
	switch (Check_State(7)) {

		case 0:    /*  P7S0() - —Œ—“ŒﬂÕ»≈: WaitingOfRedBox */

		if(P0V0 && P0V1)
			Set_State(7, 1);
			break;
		case 1:    /*  P7S1() - —Œ—“ŒﬂÕ»≈: WaitingOnLaunch */

		if(!P0V4 && P0V3)
			Set_State(7, 2);
		if (Timeout(7, C_0))  Set_Error(7);
			break;
		case 2:    /*  P7S2() - —Œ—“ŒﬂÕ»≈: StabilityControl */
		
		if(!P0V0)
			Set_State(7, 0);	
		else if(P0V4 || !P0V3 || P0V5) Set_Error(7);
			break;
		default:
			break;
	}
}

void P8 (void) /* œ–Œ÷≈——: BlueBoxControl */
{
	switch (Check_State(8)) {

		case 0:    /*  P8S0() - —Œ—“ŒﬂÕ»≈: WaitingOfBlueBox */

		if(P0V0 && !P0V1 && !P0V2)
			Set_State(8, 1);
		else if(P0V5) Set_Error(8);
			break;
		case 1:    /*  P8S1() - —Œ—“ŒﬂÕ»≈: WaitingForShutdown */

		if(!P0V4 && !P0V3)
			Set_State(8, 2);
		if (Timeout(8, C_0))  Set_Error(8);
			break;
		case 2:    /*  P8S2() - —Œ—“ŒﬂÕ»≈: RemovingControl */

		if((P0V5 && !P0V4 && !P0V3) || !P0V0) 
			Set_State(8, 0);	
		if (Timeout(8, C_1))  Set_Error(8);
			break;
		default:
			break;
	}
}

void P9 (void) /* œ–Œ÷≈——: MainConveyorControl */
{
	switch (Check_State(9)) {

		case 0:    /*  P9S0() - —Œ—“ŒﬂÕ»≈: Start */

		P9V1 = 2*C_0 + C_1;
		Set_State(9, 1);
			break;
		case 1:    /*  P9S1() - —Œ—“ŒﬂÕ»≈: WaitingForShutdown */

		if(!P0V3)
			Set_State(9, 2);
			break;
		case 2:    /*  P9S2() - —Œ—“ŒﬂÕ»≈: TurnOffControl */

		if (Timeout(9, P9V1)) 
		{
			if(P0V3)
				Set_State(9, 1);
			else Set_Error(9);
		}
			break;
		default:
			break;
	}
}
