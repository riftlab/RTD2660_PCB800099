////////////////////////////////////////////////////////////////////////////
//         Copyright of KaiXuang Video Technology Co.,LTD                 //
//                                                                        //
//                                                                        //
//                        DDCCI BG Definitions                            //
//	 Ver: 1.00															  //
//   Create file time: 2008.11.1                                          //
//   End modify time:  2008.11.1                                          //
//	 For RTD2660/2662               									  //
////////////////////////////////////////////////////////////////////////////
#if(_SUPPORTDDCCI)

#define DDC2B_CMD_DBG_READRTD                   0xa1
#define DDC2B_CMD_DBG_WRITERTD                  0xa2
#define DDC2B_CMD_DBG_READIIC                   0xa3
#define DDC2B_CMD_DBG_WRITEIIC                  0xa4
#define DDC2B_CMD_DBG_WRITERTDEX                0xa5

#define DDC2B_CMD_DBG_STOP                      0xa9
#define DDC2B_CMD_DBG_RUN                       0xaa
//#define DDC2B_CMD_DBG_GETDBGSTR                 0xab
//#define DDC2B_CMD_DBG_CUSTOM_CMD                0xac
#define DDC2B_CMD_DBG_SET_PARAM                 0xad

#define DDC2B_CMD_DBG_VIRTUALKEY                0xb0

#define DDC2B_CMD_DBG_CHGTOUART                 0xb1

#define DDC2B_CMD_DBG_WRITEMCUDATA              0xb3
#define DDC2B_CMD_DBG_READMCUDATA               0xb4


typedef enum 
{
    MDT_DATA = 0,
    MDT_IDATA,
    MDT_XDATA,
    MDT_CODE,                       // read only
    MDT_HDCP,

    MDT_GET_EXT_ADDRESS,            // ��չ��ַ��Сֵ,���ֵ.

    MDT_GET_EXT_LOGO_INF,           // Logo ��Ϣ
    MDT_GET_EXT_EDID_GROUP_CNT,     // Edid ����
    MDT_GET_EXT_EDID_INF,           // Edid ��Ϣ
    MDT_GET_EXT_IR_INF,             // �õ� IR ��Ϣ
    MDT_GET_EXT_IRKEY_INF,          // �õ� IR ÿһ�� key ����Ϣ
    MDT_GET_EXT_IRVALUE,            // �õ�һ��IR��ֵ
    
    MDT_GET_EXT_ADKEY_INF,          // �õ� IR ��Ϣ
    MDT_GET_EXT_ADKEY_DATA,         // �õ� IR ÿһ�� key ����Ϣ
    MDT_GET_EXT_ADVALUE,            // ��ȡAD�ڵ�ADֵ
    MDT_GET_EXT_PANEL_INF,          // ��ȡ Panel ��Ϣ
    MDT_GET_EXT_OTHERFUNC_CNT,      // ��ȡ Other Function ������
    MDT_GET_EXT_OTHERFUNC_INF,      // ��ȡ Other Function ����Ϣ

    MDT_GET_EXT_SDKEY_INF,			// ��׼��������Ϣ
    MDT_GET_EXT_SDKEY_ONEINF,		// Stanard Key Info
    MDT_GET_EXT_SDKEY_MASKVALUE,	// Stanard Key Mask Value

    MDT_FLASHERASE,						// write only
    MDT_FLASH_PROTECT_ENABLE,			// write only
    MDT_FLASH_PROTECT_DISABLE,			// write only
    MDT_FLASH_INITOPCODE,				// write only

    MDT_FLASH_RDSR						// read only
     
}TMcuDataType;
#ifdef __DDCCIDBG__

unsigned char xdata ucVirtualKey = _NONE_KEY_MESSAGE;


void DDCCI_Debug();

void DDCCI_DBG_Read_RTD();
void DDCCI_DBG_Write_RTD();
void DDCCI_DBG_Read_IIC();
void DDCCI_DBG_Write_IIC();
void DDCCI_DBG_Write_RTDEX();
void DDCCI_DBG_Stop();
void DDCCI_DBG_Run();

void DDCCI_DBG_VirtualKey();
void GetVirtualKey();
void DDCCI_DBG_ChgUart();

void DD_ReadMcu(void);
void DD_WriteMcu(void);
void ReadData(BYTE *sBuf,BYTE ucLength,WORD usAddress);
void ReadIData(BYTE *sBuf,BYTE ucLength,WORD usAddress);
void ReadXData(BYTE *sBuf,BYTE ucLength,WORD usAddress);
void ReadCode(BYTE *sBuf,BYTE ucLength,WORD usAddress);
void WriteData(BYTE *sBuf,BYTE ucLength,WORD usAddress);
void WriteIData(BYTE *sBuf,BYTE ucLength,WORD usAddress);
void WriteXData(BYTE *sBuf,BYTE ucLength,WORD usAddress);
void ReadHDCPData(BYTE *sBuf,BYTE ucLength,WORD usAddress);
//void WriteDHCP(BYTE *sBuf,BYTE ucLength,WORD usAddress);

#endif    //#ifdef __DDCCIDBG__

extern unsigned char xdata ucVirtualKey;

extern void DDCCI_Debug();
extern void GetVirtualKey();
BYTE FlReadStatusReg(void);
void FlashEraseSector(BYTE ucPage);
#endif    //#if(SUPPORTDDCCI)