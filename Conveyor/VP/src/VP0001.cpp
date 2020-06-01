/* FILE OF PROC-IMAGES OF THE PROJECT */
#include "VPext.h" /* Common files for all generated c-files */
#include "VPxvar.h"  /* Var-images */

void P0 (void) /* ÏÐÎÖÅÑÑ: Init */
{
	switch (Check_State(0)) {

		case 0:    /*  P0S0() - ÑÎÑÒÎßÍÈÅ: Start */
 			
		Set_Start(1);
		Set_Stop(0);
			break;
		default:
			break;
	}
}

void P1 (void) /* ÏÐÎÖÅÑÑ: ReceiveSCMOutputMsg */
{
	switch (Check_State(1)) {

		case 0:    /*  P1S0() - ÑÎÑÒÎßÍÈÅ: Start */

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
				case C_8:
					P1V0 = C_5;
					break;
				case C_9:
					P1V0 = C_6;
					break;
				case C_10:
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

void P2 (void) /* ÏÐÎÖÅÑÑ: PutBoxesOnConveyor */
{
	switch (Check_State(2)) {

		case 0:    /*  P2S0() - ÑÎÑÒÎßÍÈÅ: Start */

		P0V0[1] = C_1;
		P0V1[1] = C_1;
		P0V2[1] = C_1;
		Set_State(2, 1);
			break;
		case 1:    /*  P2S1() - ÑÎÑÒÎßÍÈÅ: Randomize */

		P2V7 = Random();
		P2V8 = Random();
		Set_State(2, 2);
			break;
		case 2:    /*  P2S2() - ÑÎÑÒÎßÍÈÅ: ColorChoice */

		if (P2V8 >= 20 && P2V8 <= 35) Set_State(2, 5);
		else if (P2V8 > 35 && P2V8 <= 50) Set_State(2, 6);	
		else
		{
			if((P1V0 == C_4) || (P1V0 == C_6)) 
				Set_State(2, 3); 
			else Set_State(2, 1);
		}
			break;
		case 3:    /*  P2S3() - ÑÎÑÒÎßÍÈÅ: BlueBoxMode */

		if (Timeout(2, P2V7)) 
		{
			P0V0[1] = C_0;
			Set_State(2, 4);
		}
			break;
		case 4:    /*  P2S4() - ÑÎÑÒÎßÍÈÅ: RemovingOfBlueBox */

		if (Timeout(2, C_3)) 
		{
			if(P0V5 && !P0V3 && !P0V4)
				Set_State(2, 0);
		}
			break;
		case 5:    /*  P2S5() - ÑÎÑÒÎßÍÈÅ: GreenBoxMode */

		if (Timeout(2, P2V7)) 
		{
			if((P1V0 == C_4) || (P1V0 == C_6)) 
				P0V0[1] = C_0;
			if(P1V0 == C_6)
				P0V1[1] = C_0;
			P0V2[1] = C_0;
			Set_State(2, 7);
		}
			break;
		case 6:    /*  P2S6() - ÑÎÑÒÎßÍÈÅ: RedBoxMode */

		if (Timeout(2, P2V7)) 
		{
			if((P1V0 == C_4) || (P1V0 == C_6))
				P0V0[1] = C_0;
			if(P1V0 == C_6)
				P0V2[1] = C_0;
			P0V1[1] = C_0;
			Set_State(2, 7);
		}
			break;
		case 7:    /*  P2S7() - ÑÎÑÒÎßÍÈÅ: PassingSensor */

		if (Timeout(2, C_2))  
			Set_State(2, 0);
			break;
		default:
			break;
	}
}
