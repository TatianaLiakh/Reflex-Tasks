/* FILE OF PROC-IMAGES OF THE PROJECT */
#include "CAext.h" /* Common files for all generated c-files */
#include "CAxvar.h"  /* Var-images */

void P0 (void) /* œ–Œ÷≈——: Init */
{
	switch (Check_State(0)) {

		case 0:    /*  P0S0() - —Œ—“ŒﬂÕ»≈: Start */
  
			P0V5[1] = C_0;
			P0V4[1] = C_0;
			P0V3[1] = C_0;
			Set_Start(1);
			Set_Start(2);
			Set_Start(3);
			Set_Start(4);
			Set_Stop(0);
			break;
		default:
			break;
	}
}

void P1 (void) /* œ–Œ÷≈——: SortingBoxes */
{
	switch (Check_State(1)) {

		case 0:    /*  P1S0() - —Œ—“ŒﬂÕ»≈: Start */

			if(P0V0 && !P0V1 && !P0V2)
			{
				P0V5[1] = C_1;
				P0V4[1] = C_0;
				P0V3[1] = C_0;
			}
			else
				P0V5[1] = C_0;
			if(P0V0 && P0V1)
			{
				P0V5[1] = C_0;
				P0V4[1] = C_0;
				P0V3[1] = C_1;
			}
			if(P0V0 && P0V2)
			{
				P0V5[1] = C_0;
				P0V4[1] = C_1;
				P0V3[1] = C_1;
			}
			
			break;
		default:
			break;
	}
}

void P2 (void) /* œ–Œ÷≈——: MainConveyorOperation */
{
	switch (Check_State(2)) {

		case 0:    /*  P2S0() - —Œ—“ŒﬂÕ»≈: Start */

			if(!P0V0)
				P0V3[1] = C_1;		
			
			break;
		default:
			break;
	}
}

void P3 (void) /* œ–Œ÷≈——: PresenceSensorControl */
{
	switch (Check_State(3)) {

		case 0:    /*  P3S0() - —Œ—“ŒﬂÕ»≈: Control */

			if(!P0V0 && (P0V1 || P0V2))
			{
				SendMsgGUICode(C_2);	
				Set_Stop(3);
			}
			
			break;
		default:
			break;
	}
}

void P4 (void) /* œ–Œ÷≈——: ColorSensorsControl */
{
	switch (Check_State(4)) {

		case 0:    /*  P4S0() - —Œ—“ŒﬂÕ»≈: Control */

			if(P0V0 && P0V1 && P0V2)
			{
				SendMsgGUICode(C_3);		
				Set_Stop(4);
			}
			
			break;
		default:
			break;
	}
}
