
#define ON /* C_0 - ON */ 1
#define OFF /* C_1 - OFF */ 0
#define SensorDelay /* C_2 - SensorDelay */ 20 
#define RemovingDelay /* C_3 - RemovingDelay */ 10 
#define Norm /* C_4 - Norm */ 01
#define PresenceSensorWrong /* C_5 - PresenceSensorWrong */ 00
#define ColorSensorWrong /* C_6 - ColorSensorWrong */ 10

enum EN0 {		
	SCM2VP_PUT_BOXES_ON_CONVEYOR /* SCM2VP_PUT_BOXES_ON_CONVEYOR */,
	SCM2VP_BROKEN_PRESENCE_SENSOR /* SCM2VP_BROKEN_PRESENCE_SENSOR */,
	SCM2VP_BROKEN_COLOR_SENSORS /* SCM2VP_BROKEN_COLOR_SENSORS */,
	SCM2VP_FINISH_VERIFICATION /* SCM2VP_FINISH_VERIFICATION */

};