

#define X_MIN /* C_0 - X_MIN */ 0.1
#define X_MAX /* C_1 - X_MAX */ 0.5
#define Idiling /* C_2 - Idiling */ 0
#define RunNextTest /* C_3 - RunNextTest */ 1
#define H /* C_4 - H */ 0.6

enum EN0 {
	VM2SCM_START_VERIFICATION /* VM2SCM_START_VERIFICATION */,
	VM2SCM_NEXT_TEST /* VM2SCM_NEXT_TEST */

};
enum EN1 {
	COM2CA_XD /* COM2CA_XD */ 
 
};
enum EN2 {
	SCM2VM_StartTestNewDesiredLevel /* SCM2VM_StartTestNewDesiredLevel */,
	SCM2VM_FINISH_VERIFICATION /* SCM2VM_FINISH_VERIFICATION */

};