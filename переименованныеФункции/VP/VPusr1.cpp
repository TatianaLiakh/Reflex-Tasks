#include "vpusr1.h"
#include "msg_queue.h"
QueueMsg last_msg;

MsgQueue MainInputQueue;
MsgQueue MainOutputQueue;


int GetOutMsgNumberFromDispatcher(void)
{
	return GetLenMsgQueue(&MainOutputQueue);
}
//ÔÓÍÊÖÈß ÖÅË GetMessageFromDispatcher(ÏÓÑÒÎ);
int GetMessageFromDispatcher(void)
{
	return GetHeadMsgQueue(&MainInputQueue, &last_msg);
}

//ÔÓÍÊÖÈß ÖÅË  GetMessageCodeFromDispatcher        (ÏÓÑÒÎ);  /*÷òåíèå èç ïàìÿòè êîäà ñîáûòèÿ */
int GetMessageCodeFromDispatcher()
{
	return last_msg.code;
}

//ÔÓÍÊÖÈß ÏËÀÂ GetFloatParamFromDispatcher     (ÏÓÑÒÎ);  /*÷òåíèå èç ïàìÿòè ïàðàìåòðà ñîáûòèÿ */
float GetFloatParamFromDispatcher()
{
	return last_msg.param.pr_float;
}

/* ÔÓÍÊÖÈß ÊÖÅË GetShortParamFromDispatcher     (ÏÓÑÒÎ); */
short GetShortParamFromDispatcher()
{
	return last_msg.param.pr_short[0];
}

//ÔÓÍÊÖÈß ÖÅË  GetIntParamFromDispatcher       (ÏÓÑÒÎ);
int GetIntParamFromDispatcher()
{
	return last_msg.param.pr_int;
}

//ÔÓÍÊÖÈß ÄÖÅË GetLongParamFromDispatcher      (ÏÓÑÒÎ);
long GetLongParamFromDispatcher()
{
	return last_msg.param.pr_long;
}

//ÔÓÍÊÖÈß ÖÅË  SendMsgToGUICode       (ÖÅË);
int SendMsgToGUICode(int code)
{
	return PutTailMsgQueue(&MainOutputQueue, code);
}

//ÔÓÍÊÖÈß ÖÅË  SendMsgFloatParamToGUI (ÖÅË, ÏËÀÂ);
int SendMsgFloatParamToGUI(int code, float param)
{
	return PutTailMsgQueueF(&MainOutputQueue, code, param);

}

/* ÔÓÍÊÖÈß ÖÅË  SendMsgShortParamToGUI (ÖÅË, ÊÖÅË); */
int SendMsgShortParamToGUI(int code, short param)
{
	return PutTailMsgQueueS(&MainOutputQueue, code, param);

}

/* ÔÓÍÊÖÈß ÖÅË  SendMsgIntParamToGUI   (ÖÅË, ÖÅË); */
int SendMsgIntParamToGUI(int code, int param)
{
	return PutTailMsgQueueI(&MainOutputQueue, code, param);

}

//ÔÓÍÊÖÈß ÖÅË  SendMsgLongParamToGUI  (ÖÅË, ÄÖÅË);
int SendMsgLongParamToGUI(int code, long param)
{
	return PutTailMsgQueueL(&MainOutputQueue, code, param);
}

//ÔÓÍÊÖÈß ÖÅË  GetInpMsgNumber_FromDispatcher (ÏÓÑÒÎ);  /* ÷òåíèå ÷èñëà ñîîáù. âî âõîäí. áóôåðå */
int GetInpMsgNumber_FromDispatcher()
{
	return GetLenMsgQueue(&MainInputQueue);
}

int GetBit(float val, int num)
{
	int int_val = *(int*)(&val);
	int local = (int_val >> ((3 - num) * 8)) & 0xFF; 
	return local; 
}


float PortsToFloat( int zero_bit,  int first,  int second, int third)
{
		int int_rez = ((zero_bit & 0xFF) << 24) 
				+ ( (first & 0xFF) << 16 ) 
				+ (( second& 0xFF) << 8 ) + (third & 0xFF);
				
	float rez = *(float *)(&int_rez);
	return rez;
}
#include <math.h>
float SQRT(float f)
{
	return sqrt(f);
	
}