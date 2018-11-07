#ifndef _VPusr1_h
#define _VPusr1_h 1
/* VPUSR1.H file. Place your code here. */
/* It will be included at the top of all include-files in every generated file. */

int GetOutMsgNumberFromScenariousBlock(void);

//ÔÓÍÊÖÈß ÖÅË GetMessageFromScenariousBlock(ÏÓÑÒÎ);
int GetMessageFromScenariousBlock(void);

//ÔÓÍÊÖÈß ÖÅË  GetMessageCodeFromScenariousBlock        (ÏÓÑÒÎ);  /*÷òåíèå èç ïàìÿòè êîäà ñîáûòèÿ */
int GetMessageCodeFromScenariousBlock();

//ÔÓÍÊÖÈß ÏËÀÂ GetFloatParamFromScenariousBlock     (ÏÓÑÒÎ);  /*÷òåíèå èç ïàìÿòè ïàğàìåòğà ñîáûòèÿ */
float GetFloatParamFromScenariousBlock();

/* ÔÓÍÊÖÈß ÊÖÅË GetShortParamFromScenariousBlock     (ÏÓÑÒÎ); */
short GetShortParamFromScenariousBlock();

//ÔÓÍÊÖÈß ÖÅË  GetIntParamFromScenariousBlock       (ÏÓÑÒÎ);
int GetIntParamFromScenariousBlock();

//ÔÓÍÊÖÈß ÄÖÅË GetLongParamFromScenariousBlock      (ÏÓÑÒÎ);
long GetLongParamFromScenariousBlock();

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

//ÔÓÍÊÖÈß ÖÅË  GetInpMsgNumber_FromScenariousBlock (ÏÓÑÒÎ);  /* ÷òåíèå ÷èñëà ñîîáù. âî âõîäí. áóôåğå */
int GetInpMsgNumber_FromScenariousBlock();

//ÔÓÍÊÖÈß ÖÅË  GetOutMsgNumber_FromScenariousBlock (ÏÓÑÒÎ); /* ÷òåíèå ÷èñëà ñîîáù. â âûõîäí. áóôåğå */*/
int GetOutMsgNumber_FromScenariousBlock();

/*float - source, int - desired bit*/
int GetBit(float,int);

float PortsToFloat( int zero_bit, int first, int second, int third);

float SQRT(float); 
#endif