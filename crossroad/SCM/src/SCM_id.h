	
	#define Idiling /* C_0 - Idiling */ 0
	#define RunNextTest /* C_1 - RunNextTest */ 1
	#define TestIdling1 /* C_2 - TestIdling1 */ 350 
	#define TestIdling2 /* C_3 - TestIdling2 */ 400 
	#define TestIdling3 /* C_4 - TestIdling3 */ 350 
 
	
	enum EN0 {		
		SCM2VP_RUN_CARS /* SCM2VP_RUN_CARS */,
		SCM2VP_NO_CARS /* SCM2VP_NO_CARS */,
		SCM2VP_RUN_WRONG_CAR /* SCM2VP_RUN_WRONG_CAR */
	
	};
 
		
	enum EN1 {
		SCM2VM_TEST_RUN_CARS /* SCM2VM_TEST_RUN_CARS */,
		SCM2VM_TEST_NO_CARS /* SCM2VM_TEST_NO_CARS */,
		SCM2VM_TEST_RUN_WRONG_CAR /* SCM2VM_TEST_RUN_WRONG_CAR */,
		SCM2VM_TEST_COMPLETED /* SCM2VM_TEST_COMPLETED */,
		SCM2VM_FINISH_VERIFICATION /* SCM2VM_FINISH_VERIFICATION */
	
	};

	
	enum EN2 {
		VM2SCM_START_VERIFICATION /* VM2SCM_START_VERIFICATION */
	
	};