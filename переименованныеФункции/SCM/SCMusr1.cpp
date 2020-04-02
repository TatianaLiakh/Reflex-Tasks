#include "SCMusr1.h"
#include "msg_queue.h"
QueueMsg last_msg_from_verifier;

MsgQueue InputQueueFromVerifier;

MsgQueue Dispatcher2Algorithm_OutputQueue;
MsgQueue Dispatcher2Plant_OutputQueue;
MsgQueue Dispatcher2Verifier_OutputQueue;

int GetOutMsgNumber_Verifier(void)
{
	return GetLenMsgQueue(&InputQueueFromVerifier);
}

/************************/
/*Verifier Input msg queue*/
/************************/
//тсмйжхъ жек GetNextMsgFromVerifier(осярн);
int GetNextMsgFromVerifier(void)
{
	return GetHeadMsgQueue(&InputQueueFromVerifier, &last_msg_from_verifier);
}

//тсмйжхъ жек  GetMsgCodeFromVerifier        (осярн);  /*ВРЕМХЕ ХГ ОЮЛЪРХ ЙНДЮ ЯНАШРХЪ */
int GetMsgCodeFromVerifier()
{
	return last_msg_from_verifier.code;
}

//тсмйжхъ окюб GetFloatParamFromVerifier     (осярн);  /*ВРЕМХЕ ХГ ОЮЛЪРХ ОЮПЮЛЕРПЮ ЯНАШРХЪ */
float GetFloatParamFromVerifier()
{
	return last_msg_from_verifier.param.pr_float;

}
//тсмйжхъ джек GetLongParamFromVerifier      (осярн);
long GetLongParamFromVerifier()
{
	return last_msg_from_verifier.param.pr_long;
}

/************************/
/*  Output Plant msg queue*/
/************************/
//тсмйжхъ жек  SendMessageToPlantCode       (жек);
int SendMsgToPlantCode(int code)
{
	return PutTailMsgQueue(&Dispatcher2Plant_OutputQueue, code);
}

//тсмйжхъ жек  SendMsgFloatParamToPlant (жек, окюб);
int SendMsgFloatParamToPlant(int code, float param)
{
	return PutTailMsgQueueF(&Dispatcher2Plant_OutputQueue, code, param);

}

/* тсмйжхъ жек  SendMsgShortParamToPlant (жек, йжек); */
int SendMsgShortParamToPlant(int code, short param)
{
	return PutTailMsgQueueS(&Dispatcher2Plant_OutputQueue, code, param);

}

/* тсмйжхъ жек  SendMsgIntParamToPlant   (жек, жек); */
int SendMsgIntParamToPlant(int code, int param)
{
	return PutTailMsgQueueI(&Dispatcher2Plant_OutputQueue, code, param);

}

//тсмйжхъ жек  SendMsgLongParamToPlant  (жек, джек);
int SendMsgLongParamToPlant(int code, long param)
{
	return PutTailMsgQueueL(&Dispatcher2Plant_OutputQueue, code, param);
}



/********/
/*Algorithm  Output msg queue*/
/********/

//тсмйжхъ жек  SendMsgToAlgorithmCode       (жек);
int SendMsgToAlgorithmCode(int code)
{
	return PutTailMsgQueue(&Dispatcher2Algorithm_OutputQueue, code);
}

//тсмйжхъ жек  SendMsgFloatParamToAlgorithm (жек, окюб);
int SendMsgFloatParamToAlgorithm(int code, float param)
{
	return PutTailMsgQueueF(&Dispatcher2Algorithm_OutputQueue, code, param);

}

/* тсмйжхъ жек  SendMsgShortParamToAlgorithm (жек, йжек); */
int SendMsgShortParamToAlgorithm(int code, short param)
{
	return PutTailMsgQueueS(&Dispatcher2Algorithm_OutputQueue, code, param);

}

/* тсмйжхъ жек  SendMsgIntParamToAlgorithm   (жек, жек); */
int SendMsgIntParamToAlgorithm(int code, int param)
{
	return PutTailMsgQueueI(&Dispatcher2Algorithm_OutputQueue, code, param);

}

//тсмйжхъ жек  SendMsgLongParamToAlgorithm  (жек, джек);
int SendMsgLongParamToAlgorithm(int code, long param)
{
	return PutTailMsgQueueL(&Dispatcher2Algorithm_OutputQueue, code, param);
}




/********/
/*Verifier  Output msg queue*/
/********/

//тсмйжхъ жек  SendMsgToVerifierCode       (жек);
int SendMsgToVerifierCode(int code)
{
	return PutTailMsgQueue(&Dispatcher2Verifier_OutputQueue, code);
}

//тсмйжхъ жек  SendMsgFloatParamToVerifier (жек, окюб);
int SendMsgFloatParamToVerifier(int code, float param)
{
	return PutTailMsgQueueF(&Dispatcher2Verifier_OutputQueue, code, param);

}

/* тсмйжхъ жек  SendMsgShortParamToVerifier (жек, йжек); */
int SendMsgShortParamToVerifier(int code, short param)
{
	return PutTailMsgQueueS(&Dispatcher2Verifier_OutputQueue, code, param);

}

/* тсмйжхъ жек  SendMsgIntParamToVerifier   (жек, жек); */
int SendMsgIntParamToVerifier(int code, int param)
{
	return PutTailMsgQueueI(&Dispatcher2Verifier_OutputQueue, code, param);

}

//тсмйжхъ жек  SendMsgLongParamToVerifier  (жек, джек);
int SendMsgLongParamToVerifier(int code, long param)
{
	return PutTailMsgQueueL(&Dispatcher2Verifier_OutputQueue, code, param);
}







