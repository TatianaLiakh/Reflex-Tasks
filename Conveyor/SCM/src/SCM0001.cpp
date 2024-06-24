/* FILE OF PROC-IMAGES OF THE PROJECT */
#include "SCMext.h" /* Common files for all generated c-files */
#include "SCMxvar.h"  /* Var-images */

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

void P1 (void) /* œ–Œ÷≈——: ReceiveVMOutputMsg */
{
	switch (Check_State(1)) {

		case 0:    /*  P1S0() - —Œ—“ŒﬂÕ»≈: Start */

			if (GetNextMsgFromVM()) 
			{
				P1V0 = GetMsgCodeFromVM();
				switch (P1V0)
				{
				case C_12:
					Set_Start(2);
					break;
				}
			}
		
			break;
		default:
			break;
	}
}

void P2 (void) /* œ–Œ÷≈——: TestDriver */
{
	switch (Check_State(2)) {

		case 0:    /*  P2S0() - —Œ—“ŒﬂÕ»≈: RunTestPutBoxesOnConveyor */

			Set_Start(3);
			Set_State(2, 1);
			break;
		case 1:    /*  P2S1() - —Œ—“ŒﬂÕ»≈: IdilingTest1 */

			if ((Check_State(3) & MASK_OF_INACTIVITY))
				Set_State(2, 2);
			break;
		case 2:    /*  P2S2() - —Œ—“ŒﬂÕ»≈: RunTestBrokenPresenceSensor */

			Set_Start(4);
			Set_State(2, 3);
			break;
		case 3:    /*  P2S3() - —Œ—“ŒﬂÕ»≈: IdilingTest2 */

			if ((Check_State(4) & MASK_OF_INACTIVITY))
				Set_State(2, 4);
			break;
		case 4:    /*  P2S4() - —Œ—“ŒﬂÕ»≈: RunTestBrokenColorSensors */

			Set_Start(5);
			Set_State(2, 5);
			break;
		case 5:    /*  P2S5() - —Œ—“ŒﬂÕ»≈: IdilingTest3 */

			if ((Check_State(5) & MASK_OF_INACTIVITY))
				Set_State(2, 6);
			break;
		case 6:    /*  P2S6() - —Œ—“ŒﬂÕ»≈: Finish */

			SendMsgToVerificationModuleCode(C_11);
			SendMsgToVirtualPlantCode(C_6);
			Set_Stop(2);
			break;
		default:
			break;
	}
}

void P3 (void) /* œ–Œ÷≈——: TestRandomBoxes */
{
	switch (Check_State(3)) {

		case 0:    /*  P3S0() - —Œ—“ŒﬂÕ»≈: Start */

			SendMsgToVirtualPlantCode(C_3);
			SendMsgToVerificationModuleCode(C_7);
			Set_State(3, 1);
			break;
		case 1:    /*  P3S1() - —Œ—“ŒﬂÕ»≈: End */

			if (Timeout(3, C_0))  
			{
				SendMsgToVerificationModuleCode(C_10);
				Set_Stop(3);
			}
			break;
		default:
			break;
	}
}

void P4 (void) /* œ–Œ÷≈——: TestBrokenPresenceSensor */
{
	switch (Check_State(4)) {

		case 0:    /*  P4S0() - —Œ—“ŒﬂÕ»≈: Start */

			SendMsgToVirtualPlantCode(C_4);
			SendMsgToVerificationModuleCode(C_8);
			Set_State(4, 1);
			break;
		case 1:    /*  P4S1() - —Œ—“ŒﬂÕ»≈: End */

			if (Timeout(4, C_1)) 
			{
				SendMsgToVerificationModuleCode(C_10);
				Set_Stop(4);
			}
			break;
		default:
			break;
	}
}

void P5 (void) /* œ–Œ÷≈——: TestBrokenColorSensors */
{
	switch (Check_State(5)) {

		case 0:    /*  P5S0() - —Œ—“ŒﬂÕ»≈: Start */

			SendMsgToVirtualPlantCode(C_5);
			SendMsgToVerificationModuleCode(C_9);
			Set_State(5, 1);
			break;
		case 1:    /*  P5S1() - —Œ—“ŒﬂÕ»≈: End */

			if (Timeout(5, C_2))  
			{
				SendMsgToVerificationModuleCode(C_10);
				Set_Stop(5);
			}
			break;
		default:
			break;
	}
}
