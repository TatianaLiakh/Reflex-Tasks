
	
	#define Idiling /* C_0 - Idiling */ 0
	#define RunNextTest /* C_1 - RunNextTest */ 1
 
	
	enum EN0 {		
		SCM2VP_RUN_CAR /* SCM2VP_RUN_CAR */,
		SCM2VP_RUN_WRONG_CAR /* SCM2VP_RUN_WRONG_CAR */,
		SCM2VP_RUN_TWO_CARS /* SCM2VP_RUN_TWO_CARS */
	
	};
 
		
	enum EN1 {
		SCM2VM_TEST_RUN_CAR /* SCM2VM_TEST_RUN_CAR */,
		SCM2VM_TEST_RUN_WRONG_CAR /* SCM2VM_TEST_RUN_WRONG_CAR */,
		SCM2VM_TEST_RUN_TWO_CARS /* SCM2VM_TEST_RUN_TWO_CARS */,
		SCM2VM_FINISH_VERIFICATION /* SCM2VM_FINISH_VERIFICATION */
	
	};

	
	enum EN2 {
		VM2SCM_START_VERIFICATION /* VM2SCM_START_VERIFICATION */,
		VM2SCM_NEXT_TEST /* VM2SCM_NEXT_TEST */
	
	};