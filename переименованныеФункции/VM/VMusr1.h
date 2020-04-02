#ifndef _VMusr1_h
#define _VMusr1_h 1
/* AlgorithmUSR1.H file. Place your code here. */
/* It will be included at the top of all include-files in every generated file. */

int GetOutGUIMsgNumber_GUI(void);
int GetOutDispatcherMsgNumber_GUI(void);


/************************/
/*Algorithm Input msg queue*/ 
/************************/

//тсмйжхъ жек GetNextMsgFromAlgorithm(осярн);
int GetNextMsgFromAlgorithm(void);

//тсмйжхъ жек  GetMsgCodeFromAlgorithm        (осярн);  /*ВРЕМХЕ ХГ ОЮЛЪРХ ЙНДЮ ЯНАШРХЪ */
int GetMsgCodeFromAlgorithm();

//тсмйжхъ окюб GetFloatParamFromAlgorithm     (осярн);  /*ВРЕМХЕ ХГ ОЮЛЪРХ ОЮПЮЛЕРПЮ ЯНАШРХЪ */
float GetFloatParamFromAlgorithm();

//тсмйжхъ джек GetLongParamFromAlgorithm      (осярн);
long GetLongParamFromAlgorithm();


/************************/
/*Dispatcher Input msg queue*/
/************************/

//тсмйжхъ жек GetNextMsgFromDispatcher(осярн);
int GetNextMsgFromDispatcher(void);

//тсмйжхъ жек  GetMsgCodeFromDispatcher        (осярн);  /*ВРЕМХЕ ХГ ОЮЛЪРХ ЙНДЮ ЯНАШРХЪ */
int GetMsgCodeFromDispatcher();

//тсмйжхъ окюб GetFloatParamFromDispatcher     (осярн);  /*ВРЕМХЕ ХГ ОЮЛЪРХ ОЮПЮЛЕРПЮ ЯНАШРХЪ */
float GetFloatParamFromDispatcher();

//тсмйжхъ джек GetLongParamFromDispatcher      (осярн);
long GetLongParamFromDispatcher();



/************************/
/*  Output GUI msg queue*/
/************************/

//тсмйжхъ жек  SendMsgGUICode       (жек);
int SendMsgGUICode(int code);

//тсмйжхъ жек  SendMsgFloatParamGUI (жек, окюб);
int SendMsgFloatParamGUI(int code, float param);

/* тсмйжхъ жек  SendMsgShortParamPIV (жек, йжек); */
int SendMsgShortParamGUI(int code, short param);

/* тсмйжхъ жек  SendMsgIntParamPIV   (жек, жек); */
int SendMsgIntParamGUI(int code, int param);

//тсмйжхъ жек  SendMsgLongParamGUI  (жек, джек);
int SendMsgLongParamGUI(int code, long param);

/********/
/*Dispatcher  Output msg queue*/
/********/
/*тсмйжхъ жек  SendMsgToDispatcher(жек); */ 
int SendMsgToDispatcher(int code);

//тсмйжхъ жек  SendMsgFloatToDispatcher (жек, окюб);
int SendMsgFloatToDispatcher(int code, float param);

/* тсмйжхъ жек  SendMsgShortToDispatcher(жек, йжек); */
int SendMsgShortToDispatcher(int code, short param);

/* тсмйжхъ жек  SendMsgIntToDispatcher  (жек, жек); */
int SendMsgIntToDispatcher(int code, int param);

//тсмйжхъ жек  SendMsgLongParamGUI  (жек, джек);
int SendMsgLongToDispatcher(int code, long param);


float PortsToFloat(int zero_bit, int first, int second, int third);

float ABS(float);
#endif