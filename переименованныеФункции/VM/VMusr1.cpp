#include "VMusr1.h"
#include "msg_queue.h"
QueueMsg last_msg_from_algorithm;
QueueMsg last_msg_from_dispatcher;

MsgQueue AlgorithmInputQueue;
MsgQueue DispatcherInputQueue;

MsgQueue MainGUIOutputQueue;
MsgQueue DispatcherOutputQueue;

int GetOutMsgNumber_GUI(void)
{
	return GetLenMsgQueue(&MainGUIOutputQueue);
}

int GetOutDispatcherMsgNumber_GUI(void)
{
	return GetLenMsgQueue(&DispatcherOutputQueue);
}

/************************/
/*Algorithm Input msg queue*/
/************************/
//ÔÓÍÊÖÈß ÖÅË GetNextMsgGUI(ÏÓÑÒÎ);
int GetNextMsgFromAlgorithm(void)
{
	return GetHeadMsgQueue(&AlgorithmInputQueue, &last_msg_from_algorithm);
}

//ÔÓÍÊÖÈß ÖÅË  GetMsgCodeFromAlgorithm        (ÏÓÑÒÎ);  /*÷òåíèå èç ïàìÿòè êîäà ñîáûòèÿ */
int GetMsgCodeFromAlgorithm()
{
	return last_msg_from_algorithm.code;
}

//ÔÓÍÊÖÈß ÏËÀÂ GetFloatParamFromAlgorithm     (ÏÓÑÒÎ);  /*÷òåíèå èç ïàìÿòè ïàğàìåòğà ñîáûòèÿ */
float GetFloatParamFromAlgorithm()
{
	return last_msg_from_algorithm.param.pr_float;

}
//ÔÓÍÊÖÈß ÄÖÅË GetLongParamFromAlgorithm      (ÏÓÑÒÎ);
long GetLongParamFromAlgorithm()
{
	return last_msg_from_algorithm.param.pr_long;
}

/************************/
/*Dispatcher Input msg queue*/
/************************/
//ÔÓÍÊÖÈß ÖÅË GetNextMsgGUI(ÏÓÑÒÎ);
int GetNextMsgFromDispatcher(void)
{
	return GetHeadMsgQueue(&DispatcherInputQueue, &last_msg_from_dispatcher);
}

//ÔÓÍÊÖÈß ÖÅË  GetMsgCodeFromDispatcher        (ÏÓÑÒÎ);  /*÷òåíèå èç ïàìÿòè êîäà ñîáûòèÿ */
int GetMsgCodeFromDispatcher()
{
	return last_msg_from_dispatcher.code;
}

//ÔÓÍÊÖÈß ÏËÀÂ GetFloatParamFromDispatcher     (ÏÓÑÒÎ);  /*÷òåíèå èç ïàìÿòè ïàğàìåòğà ñîáûòèÿ */
float GetFloatParamFromDispatcher()
{
	return last_msg_from_dispatcher.param.pr_float;

}
//ÔÓÍÊÖÈß ÄÖÅË GetLongParamFromDispatcher      (ÏÓÑÒÎ);
long GetLongParamFromDispatcher()
{
	return last_msg_from_dispatcher.param.pr_long;
}


/************************/
/*  Output GUI msg queue*/
/************************/
//ÔÓÍÊÖÈß ÖÅË  SendMsgGUICode       (ÖÅË);
int SendMsgGUICode(int code)
{
	return PutTailMsgQueue(&MainGUIOutputQueue, code);
}

//ÔÓÍÊÖÈß ÖÅË  SendMsgFloatParamGUI (ÖÅË, ÏËÀÂ);
int SendMsgFloatParamGUI(int code, float param)
{
	return PutTailMsgQueueF(&MainGUIOutputQueue, code, param);

}

/* ÔÓÍÊÖÈß ÖÅË  SendMsgShortParamGUI (ÖÅË, ÊÖÅË); */
int SendMsgShortParamGUI(int code, short param)
{
	return PutTailMsgQueueS(&MainGUIOutputQueue, code, param);

}

/* ÔÓÍÊÖÈß ÖÅË  SendMsgIntParamGUI   (ÖÅË, ÖÅË); */
int SendMsgIntParamGUI(int code, int param)
{
	return PutTailMsgQueueI(&MainGUIOutputQueue, code, param);

}

//ÔÓÍÊÖÈß ÖÅË  SendMsgLongParamGUI  (ÖÅË, ÄÖÅË);
int SendMsgLongParamGUI(int code, long param)
{
	return PutTailMsgQueueL(&MainGUIOutputQueue, code, param);
}



/********/
/*Dispatcher  Output msg queue*/
/********/

//ÔÓÍÊÖÈß ÖÅË  SendMsgToDispatcher       (ÖÅË);
int SendMsgToDispatcher(int code)
{
	return PutTailMsgQueue(&DispatcherOutputQueue, code);
}

//ÔÓÍÊÖÈß ÖÅË  SendMsgFloatParamDispatcher (ÖÅË, ÏËÀÂ);
int SendMsgFloatParamDispatcher(int code, float param)
{
	return PutTailMsgQueueF(&DispatcherOutputQueue, code, param);

}

/* ÔÓÍÊÖÈß ÖÅË  SendMsgShortParamDispatcher (ÖÅË, ÊÖÅË); */
int SendMsgShortParamDispatcher(int code, short param)
{
	return PutTailMsgQueueS(&DispatcherOutputQueue, code, param);

}

/* ÔÓÍÊÖÈß ÖÅË  SendMsgIntParamDispatcher   (ÖÅË, ÖÅË); */
int SendMsgIntParamDispatcher(int code, int param)
{
	return PutTailMsgQueueI(&DispatcherOutputQueue, code, param);

}

//ÔÓÍÊÖÈß ÖÅË  SendMsgLongParamDispatcher  (ÖÅË, ÄÖÅË);
int SendMsgLongParamDispatcher(int code, long param)
{
	return PutTailMsgQueueL(&DispatcherOutputQueue, code, param);
}

float PortsToFloat(int zero_bit, int first, int second, int third)
{
			int int_rez = ((zero_bit & 0xFF) << 24) 
				+ ( (first & 0xFF) << 16 ) 
				+ (( second& 0xFF) << 8 ) + (third & 0xFF);
				
	float rez = *(float *)(&int_rez);
	return rez;
}

float ABS(float f)
{
	if (f >= 0) return f;
	else return -f;
	
}









