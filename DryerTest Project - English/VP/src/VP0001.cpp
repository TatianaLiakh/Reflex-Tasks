/* FILE OF PROC-IMAGES OF THE PROJECT */
#include "VPext.h" /* Common files for all generated c-files */
#include "VPxvar.h"  /* Var-images */

void P0 (void) /* ÏĞÎÖÅÑÑ: Init */
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

void P1 (void) /* ÏĞÎÖÅÑÑ: DispatcherCmd */
{
	switch (Check_State(1)) {

		case 0:    /*  P1S0() - ÑÎÑÒÎßÍÈÅ: Start */

            if ( GetMessageFromScenariousBlock()) {
                switch (GetMessageCodeFromScenariousBlock()){
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

void P2 (void) /* ÏĞÎÖÅÑÑ: InsertHands */
{
	switch (Check_State(2)) {

		case 0:    /*  P2S0() - ÑÎÑÒÎßÍÈÅ: Init */

            P0V1[1] = C_0; 
            P2V1 = 1; 
            Set_State(2, 1);
			break;
		 P2V1
		 ++
		 ;
		case 1:    /*  P2S1() - ÑÎÑÒÎßÍÈÅ: Off */

            P0V1[1] = C_1;
            if (Timeout(2, P2V1))  {
                P2V1++; 
                Set_State(2, 2);
            }
			break;
		case 2:    /*  P2S2() - ÑÎÑÒÎßÍÈÅ: On */

            P0V1[1] = C_0; 
            if (P2V1 >= C_2) Set_State(2, 0);
            if (Timeout(2, P2V1))  Set_State(2, 1);
			break;
		default:
			break;
	}
}
