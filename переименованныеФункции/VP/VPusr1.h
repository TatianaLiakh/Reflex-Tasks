#ifndef _VPusr1_h
#define _VPusr1_h 1
/* VPUSR1.H file. Place your code here. */
/* It will be included at the top of all include-files in every generated file. */

int GetOutMsgNumberFromDispatcher(void);

//ÔÓÍÊÖÈß ÖÅË GetMessageFromDispatcher(ÏÓÑÒÎ);
int GetMessageFromDispatcher(void);

//ÔÓÍÊÖÈß ÖÅË  GetMessageCodeFromDispatcher        (ÏÓÑÒÎ);  /*÷òåíèå èç ïàìÿòè êîäà ñîáûòèÿ */
int GetMessageCodeFromDispatcher();

//ÔÓÍÊÖÈß ÏËÀÂ GetFloatParamFromDispatcher     (ÏÓÑÒÎ);  /*÷òåíèå èç ïàìÿòè ïàğàìåòğà ñîáûòèÿ */
float GetFloatParamFromDispatcher();

/* ÔÓÍÊÖÈß ÊÖÅË GetShortParamFromDispatcher     (ÏÓÑÒÎ); */
short GetShortParamFromDispatcher();

//ÔÓÍÊÖÈß ÖÅË  GetIntParamFromDispatcher       (ÏÓÑÒÎ);
int GetIntParamFromDispatcher();

//ÔÓÍÊÖÈß ÄÖÅË GetLongParamFromDispatcher      (ÏÓÑÒÎ);
long GetLongParamFromDispatcher();

//ÔÓÍÊÖÈß ÖÅË  SendMsgToGUICode       (ÖÅË);
int SendMsgToGUICode(int code);

//ÔÓÍÊÖÈß ÖÅË  SendMsgFloatParamToGUI (ÖÅË, ÏËÀÂ);
int SendMsgFloatParamToGUI(int code, float param);

/* ÔÓÍÊÖÈß ÖÅË  SendMsgShortParamToGUI (ÖÅË, ÊÖÅË); */
int SendMsgShortParamToGUI(int code, short param);

/* ÔÓÍÊÖÈß ÖÅË  SendMsgIntParamToGUI   (ÖÅË, ÖÅË); */
int SendMsgIntParamToGUI(int code, int param);

//ÔÓÍÊÖÈß ÖÅË  SendMsgLongParamToGUI  (ÖÅË, ÄÖÅË);
int SendMsgLongParamToGUI(int code, long param);

//ÔÓÍÊÖÈß ÖÅË  GetInpMsgNumber_FromDispatcher (ÏÓÑÒÎ);  /* ÷òåíèå ÷èñëà ñîîáù. âî âõîäí. áóôåğå */
int GetInpMsgNumber_FromDispatcher();

//ÔÓÍÊÖÈß ÖÅË  GetOutMsgNumber_FromDispatcher (ÏÓÑÒÎ); /* ÷òåíèå ÷èñëà ñîîáù. â âûõîäí. áóôåğå */*/
int GetOutMsgNumber_FromDispatcher();

/*float - source, int - desired bit*/
int GetBit(float,int);

float PortsToFloat( int zero_bit, int first, int second, int third);

float SQRT(float); 
#endif