/* FILE OF PROC-IMAGES OF THE PROJECT */
#include "CAext.h" /* Common files for all generated c-files */
#include "CAxvar.h"  /* Var-images */

void P0 (void) /* œ–Œ÷≈——: INIT */
{
	switch (Check_State(0)) {

		case 0:    /*  P0S0() - —Œ—“ŒﬂÕ»≈: InitialSetup */
		
		Set_Start(2);
		Set_Start(5);
		Set_Start(3);
		Set_Start(4);
		Set_Start(1);
		Set_Start(6);
		Set_Stop(0);
			break;
		default:
			break;
	}
}

void P1 (void) /* œ–Œ÷≈——: ReadInputMsgs */
{
	switch (Check_State(1)) {

		case 0:    /*  P1S0() - —Œ—“ŒﬂÕ»≈: StartReading */

    
    if (GetNextMsgGUI()) 
	{
		P1V1 = GetMsgGUICode();
		if (P1V1 == C_9)
		{
			P0V2 = GetFloatParamGUI();
		}
	}
	
			break;
		default:
			break;
	}
}

void P2 (void) /* œ–Œ÷≈——: READ_ADC */
{
	switch (Check_State(2)) {

		case 0:    /*  P2S0() - —Œ—“ŒﬂÕ»≈: READ */

		P0V1 = PortsToFloat(P0V3, P0V4, P0V5, P0V6);
	
		
			break;
		default:
			break;
	}
}

void P3 (void) /* œ–Œ÷≈——: CONTROLLER */
{
	switch (Check_State(3)) {

		case 0:    /*  P3S0() - —Œ—“ŒﬂÕ»≈: Init */

		P3V3 = 0.0;
		P3V4 = 0.0;
		Set_State(3, 1);
			break;
		case 1:    /*  P3S1() - —Œ—“ŒﬂÕ»≈: NormalPIControl */

		P3V4 = P0V2 - P0V1;
		P3V3 += P3V4;
		
		 
		P0V0 = C_7 * P3V4 + C_8 * P3V3 * C_0;		
		
		if (P0V0 > C_5)
		{ P0V0 = C_5; }
		if( P0V0 < 0 ) P0V0 = 0.0;		
		if (P0V1 >= C_2) { Set_State(3, 2); }
		else if ( P0V1 < C_1) { Set_State(3, 3);	}
			break;
		case 2:    /*  P3S2() - —Œ—“ŒﬂÕ»≈: Owerflow */

		  
		P0V0 = 0;  
		if (P0V1 < C_2) Set_State(3, 0);
			break;
		case 3:    /*  P3S3() - —Œ—“ŒﬂÕ»≈: LowLevel */

	  
		P0V0 = C_5;
		if (P0V1 > C_1) Set_State(3, 0);
			break;
		default:
			break;
	}
}

void P4 (void) /* œ–Œ÷≈——: Filter */
{
	switch (Check_State(4)) {

		case 0:    /*  P4S0() - —Œ—“ŒﬂÕ»≈: Init */

		P4V1 = C_4;
		Set_State(4, 1);
			break;
		case 1:    /*  P4S1() - —Œ—“ŒﬂÕ»≈: Filtering */

		if ( P0V0 >= P4V1) 
			if ( P0V0 - P4V1 > C_6 )
			{
				P0V0 = P4V1 + C_6;
			}
		else 
			if ( P4V1 - P0V0 > C_6 )
			{
				P0V0 = P4V1 - C_6;
			}
		P4V1 = P0V0;	
		
			break;
		default:
			break;
	}
}

void P5 (void) /* œ–Œ÷≈——: WRITE_DAC */
{
	switch (Check_State(5)) {

		case 0:    /*  P5S0() - —Œ—“ŒﬂÕ»≈: WRITE */


		P0V7[1] = GetBit(P0V0, 0);
		P0V8[1] = GetBit(P0V0, 1);
		P0V9[1] = GetBit(P0V0, 2);
		P0V10[1] = GetBit(P0V0, 3);
	
	
	
	
		
			break;
		default:
			break;
	}
}

void P6 (void) /* œ–Œ÷≈——: Info */
{
	switch (Check_State(6)) {

		case 0:    /*  P6S0() - —Œ—“ŒﬂÕ»≈: Idiling */

		if (Timeout(6, 50))  
		{		
			
			SendMsgFloatParamGUI(C_11, P0V0); 
			Set_State(6, 0);
		}
			break;
		default:
			break;
	}
}
