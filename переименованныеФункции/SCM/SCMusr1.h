#ifndef _SCMusr1_h
#define _SCMusr1_h 1

int GetOutMsgNumber_Verifier(void);

/************************/
/*Verifier Input msg queue*/
/************************/
//тсмйжхъ жек GetNextMsgFromVerifier(осярн);
int GetNextMsgFromVerifier(void);
//тсмйжхъ жек  GetMsgCodeFromVerifier        (осярн);  /*ВРЕМХЕ ХГ ОЮЛЪРХ ЙНДЮ ЯНАШРХЪ */
int GetMsgCodeFromVerifier();
//тсмйжхъ окюб GetFloatParamFromVerifier     (осярн);  /*ВРЕМХЕ ХГ ОЮЛЪРХ ОЮПЮЛЕРПЮ ЯНАШРХЪ */
float GetFloatParamFromVerifier();
//тсмйжхъ джек GetLongParamFromVerifier      (осярн);
long GetLongParamFromVerifier();

/************************/
/*  Output VP msg queue*/
/************************/
//тсмйжхъ жек  SendMessageToPlant       (жек);
int SendMsgToPlant(int code);
//тсмйжхъ жек  SendMsgFloatParamToPlant (жек, окюб);
int SendMsgFloatParamToPlant(int code, float param);
/* тсмйжхъ жек  SendMsgShortParamToPlant (жек, йжек); */
int SendMsgShortParamToPlant(int code, short param);
/* тсмйжхъ жек  SendMsgIntParamToPlant   (жек, жек); */
int SendMsgIntParamToPlant(int code, int param);
//тсмйжхъ жек  SendMsgLongParamToPlant  (жек, джек);
int SendMsgLongParamToPlant(int code, long param);


/********/
/*CA  Output msg queue*/
/********/

//тсмйжхъ жек  SendMsgToAlgorithm       (жек);
int SendMsgToAlgorithm(int code);
//тсмйжхъ жек  SendMsgFloatParamToAlgorithm (жек, окюб);
int SendMsgFloatParamToAlgorithm(int code, float param);
/* тсмйжхъ жек  SendMsgShortParamToAlgorithm (жек, йжек); */
int SendMsgShortParamToAlgorithm(int code, short param);
/* тсмйжхъ жек  SendMsgIntParamToAlgorithm   (жек, жек); */
int SendMsgIntParamToAlgorithm(int code, int param);
//тсмйжхъ жек  SendMsgLongParamToAlgorithm  (жек, джек);
int SendMsgLongParamToAlgorithm(int code, long param);



/********/
/*Verifier  Output msg queue*/
/********/

//тсмйжхъ жек  SendMsgToVerifierCode       (жек);
int SendMsgToVerifierCode(int code);
//тсмйжхъ жек  SendMsgFloatParamToVerifier (жек, окюб);
int SendMsgFloatParamToVerifier(int code, float param);
/* тсмйжхъ жек  SendMsgShortParamToVerifier (жек, йжек); */
int SendMsgShortParamToVerifier(int code, short param);
/* тсмйжхъ жек  SendMsgIntParamToVerifier   (жек, жек); */
int SendMsgIntParamToVerifier(int code, int param);
//тсмйжхъ жек  SendMsgLongParamToVerifier  (жек, джек);
int SendMsgLongParamToVerifier(int code, long param);


#endif