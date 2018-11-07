/* FILE OF PROC-IMAGES OF THE PROJECT */
#include "VPext.h" /* Common files for all generated c-files */
#include "VPxvar.h"  /* Var-images */

void P0 (void) /* œ–Œ÷≈——: INIT */
{
	switch (Check_State(0)) {

		case 0:    /*  P0S0() - —Œ—“ŒﬂÕ»≈: InitialSetup */
		
		P0V1 = 0.2;
		Set_Start(2);
		Set_Start(4);
		Set_Start(3); 
		Set_Start(1);
		Set_Start(5);
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

		

		
			break;
		default:
			break;
	}
}

void P2 (void) /* œ–Œ÷≈——: READ_ADC */
{
	switch (Check_State(2)) {

		case 0:    /*  P2S0() - —Œ—“ŒﬂÕ»≈: READ */

		P0V0 = PortsToFloat(P0V2, P0V3, P0V4, P0V5);
		
		
	
	
	
	
		
			break;
		default:
			break;
	}
}

void P3 (void) /* œ–Œ÷≈——: TANK */
{
	switch (Check_State(3)) {

		case 0:    /*  P3S0() - —Œ—“ŒﬂÕ»≈: Normal */
	
		
		P0V1 += (-C_5 * SQRT(P0V1)  * C_0  + C_6 * P0V0  * C_0 )/C_4 ;

		if (P0V1 >= C_3) Set_State(3, 1); 
		if ( P0V1 < C_7 ) Set_State(3, 2);
			break;
		case 1:    /*  P3S1() - —Œ—“ŒﬂÕ»≈: Owerflow */
	
			
		P0V1 = C_3;						
		P0V1 += (-C_5 * C_0 * SQRT(P0V1) + C_6 * C_0 * P0V0) / C_4;
					
		if (P0V1 < C_3) Set_State(3, 0);
			break;
		case 2:    /*  P3S2() - —Œ—“ŒﬂÕ»≈: Underfill */

		
		P0V1 += ( -C_5 * P0V1 * SQRT(P0V1)  * C_0  / C_7  + C_6 * P0V0 * C_0 ) / C_4 ;
		if (P0V1 < 0) P0V1 = 0;
				
		if ( P0V1 > C_7 ) Set_State(3, 0);
			break;
		default:
			break;
	}
}

void P4 (void) /* œ–Œ÷≈——: WRITE_DAC */
{
	switch (Check_State(4)) {

		case 0:    /*  P4S0() - —Œ—“ŒﬂÕ»≈: WRITE */

		P0V6[1] = GetBit(P0V1, 0);
		P0V7[1] = GetBit(P0V1, 1);
		P0V8[1] = GetBit(P0V1, 2);
		P0V9[1] = GetBit(P0V1, 3);
		
			break;
		default:
			break;
	}
}

void P5 (void) /* œ–Œ÷≈——: Info */
{
	switch (Check_State(5)) {

		case 0:    /*  P5S0() - —Œ—“ŒﬂÕ»≈: Idiling */

		if (Timeout(5, 50))  
		{
			SendMsgFloatParamToGUI(C_9, P0V1);
		
		
			Set_State(5, 0);
		}
			break;
		default:
			break;
	}
}
