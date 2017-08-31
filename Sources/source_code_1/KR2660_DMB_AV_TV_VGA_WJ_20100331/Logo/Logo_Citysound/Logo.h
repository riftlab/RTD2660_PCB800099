#if(_LOGO_ENABLE)

/*
// #Code : Logo Info
Logo Width       :24
Logo Height      :10
1 Bit Font Count : 41
2 Bit Font Count : 62
4 Bit Font Count : 5

OSD RAM INFOMATION :
Font size                :0681
Font select base address :000B
Font base address        :00FB
*/

typedef struct
{
	BYTE LogoWidth;
	BYTE LogoHeight;
	WORD FontBassAddress;

	BYTE DoubleSize;

	WORD Font1BitOffset;
	WORD Font2BitOffset;
	WORD Font4BitOffset;

	BYTE Font1BitCnt;
	BYTE Font2BitCnt;
	BYTE Font4BitCnt;
	
	BYTE HPositon;
	BYTE VPosition;

	BYTE BackGroundColorR;
	BYTE BackGroundColorG;
	BYTE BackGroundColorB;
	

}SLogoOsdMap;


#ifdef __LOGO__

//-------------------------------------------------------------------------------
// #Code : SLogoOsdMap
code SLogoOsdMap tLogoOsdMap =
{
	24,			// BYTE LogoWidth;
	10,			// BYTE LogoHeight;
	0xfb,		// WORD FontBassAddress;
	0,			//BYTE DoubleSize;
	0,			// WORD Font1BitOffset;
	42,		// WORD Font2BitOffset;
	168,		// WORD Font4BitOffset;
	41,		// BYTE Font1BitCnt;
	62,			// BYTE Font2BitCnt;
	5,			// BYTE Font4BitCnt;
	50,			// BYTE HPositon;
	50,			// BYTE VPosition;
	0x0,		// BYTE BackGroundColorR;
	0x0,		// BYTE BackGroundColorG;
	0xff,		// BYTE BackGroundColorB;
};
//-------------------------------------------------------------------------------
// #Code : Palette
BYTE code tLogoPalette[] =
{
	0x00,0x00,0xff,		// 0
	0xc0,0xc0,0xc0,		// 1
	0xff,0x00,0x00,		// 2
	0x00,0xff,0xff,		// 3
	0x80,0x80,0x80,		// 4
	0x00,0xff,0x00,		// 5
	0x00,0x80,0x00,		// 6
	0x80,0x00,0x00,		// 7
	0x80,0x80,0x00,		// 8
	0xff,0x00,0xff,		// 9
	0x00,0x00,0x00,		// 10
	0x00,0x00,0x00,		// 11
	0x00,0x00,0x00,		// 12
	0x00,0x00,0x00,		// 13
	0x00,0x00,0x00,		// 14
	0x00,0x00,0x00,		// 15
};
//-------------------------------------------------------------------------------
// #Code : Logo Table
BYTE code tLogoTable[] =
{
//Charcter command Byte 0
0x10,0x0B,    //Row : 0
0x8C,_bb_,5,0xA2,_bb_,6,0x90,0xA2,0x8C,0xA2,0xA2,0x8C,_bb_,8,_nn_,
0x10,0x23,    //Row : 1
0x8C,0x8C,0x8C,0xA2,_bb_,12,0x8C,_bb_,9,_nn_,
0x10,0x3B,    //Row : 2
0x8C,0xA2,0xA2,0x8C,0x8C,0xA2,0xA2,0x8C,_bb_,7,0xA2,0x8C,_bb_,9,_nn_,
0x10,0x53,    //Row : 3
0x8C,0xA2,0x8C,0x8C,0x8C,0xA2,0x8C,_bb_,8,0x90,0xA2,0x8C,_bb_,8,_nn_,
0x10,0x6B,    //Row : 4
0xA2,0x8C,_bb_,4,0xA2,0x8C,0x8C,0x8C,0xA4,0xA4,0x90,0xB4,0x8C,_bb_,11,_nn_,
0x10,0x83,    //Row : 5
0xA2,0xA2,0x8C,0x8C,0x8C,0xA2,0x8C,_bb_,4,0xAC,0x90,0x8C,_bb_,12,_nn_,
0x10,0x9B,    //Row : 6
0x8C,0xA2,0xA2,0x8C,0x8C,0xA2,0x8C,_bb_,8,0xA4,0xA2,0x8C,_bb_,8,_nn_,
0x10,0xB3,    //Row : 7
0x8C,0x8C,0xA2,0xA2,0xA4,0x8C,0xA2,0xA2,0xA2,0x8C,0x8C,0x8C,0xA2,_bb_,4,0x8C,_bb_,8,_nn_,
0x10,0xCB,    //Row : 8
0x8C,_bb_,4,0xA2,_bb_,4,0x90,0xA2,_bb_,5,0x8C,_bb_,10,_nn_,
0x10,0xE3,    //Row : 9
0x8C,_bb_,24,_nn_,



//Charcter command Byte 1
0x50,0x0B,    //Row : 0
0x00,_bb_,5,0x15,0x16,0x17,0x18,0x19,0x1A,0x2A,0x1B,0x00,0x1C,0x1D,0x00,_bb_,8,_nn_,
0x50,0x23,    //Row : 1
0x00,0x00,0x00,0x1E,0x1F,0x20,0x21,0x22,0x23,0x24,0x25,0x26,0x27,0x28,0x29,0x01,0x00,_bb_,8,_nn_,
0x50,0x3B,    //Row : 2
0x00,0x2A,0x2B,0x02,0x02,0x2C,0x2D,0x00,_bb_,6,0x03,0x2E,0x01,0x00,_bb_,8,_nn_,
0x50,0x53,    //Row : 3
0x00,0x2F,0x02,0x02,0x02,0x30,0x00,0x04,0x05,0x06,0x07,0x00,0x08,0x09,0x2B,0x31,0x00,_bb_,6,0x0A,0x00,_nn_,
0x50,0x6B,    //Row : 4
0x32,0x0B,0x02,0x02,0x02,0x33,0x0C,0x0D,0x0E,0x34,0x35,0x2C,0x36,0x0F,0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x00,_nn_,
0x50,0x83,    //Row : 5
0x37,0x38,0x02,0x02,0x02,0x39,0x19,0x1A,0x1B,0x1C,0x3A,0x2D,0x1D,0x1E,0x1F,0x20,0x21,0x22,0x23,0x24,0x25,0x26,0x27,0x28,_nn_,
0x50,0x9B,    //Row : 6
0x00,0x3B,0x3C,0x02,0x02,0x3D,0x00,_bb_,8,0x3E,0x3F,0x00,_bb_,8,_nn_,
0x50,0xB3,    //Row : 7
0x00,0x00,0x40,0x41,0x42,0x02,0x43,0x44,0x45,0x00,0x00,0x00,0x46,0x47,0x48,0x49,0x00,_bb_,8,_nn_,
0x50,0xCB,    //Row : 8
0x00,_bb_,4,0x4A,0x4B,0x4C,0x4D,0x2E,0x4E,0x4F,0x50,0x51,0x52,0x00,_bb_,10,_nn_,
0x50,0xE3,    //Row : 9
0x00,_bb_,24,_nn_,



//Charcter command Byte 2
0x90,0x0B,    //Row : 0
0x10,_bb_,5,0x22,_bb_,6,0x00,0x22,0x10,0x02,0x22,0x10,_bb_,8,_nn_,
0x90,0x23,    //Row : 1
0x10,0x10,0x10,0x22,0x02,0x22,0x02,0x02,0x22,_bb_,6,0x02,0x20,0x10,_bb_,8,_nn_,
0x90,0x3B,    //Row : 2
0x10,0x22,0x22,0x20,0x20,0x22,0x02,0x10,_bb_,6,0x20,0x22,0x20,0x10,_bb_,8,_nn_,
0x90,0x53,    //Row : 3
0x10,0x22,0x20,0x20,0x20,0x22,0x10,0x50,0x50,0x20,0x20,0x10,0x20,0x90,0x00,0x22,0x10,_bb_,6,0x30,0x10,_nn_,
0x90,0x6B,    //Row : 4
0x02,0x21,0x20,0x20,0x20,0x04,0x50,0x50,0x50,0x06,0x3E,0x00,0x00,0x90,0x90,0x10,0x10,0x70,0x70,0xA0,0xA0,0x30,0x30,0x10,_nn_,
0x90,0x83,    //Row : 5
0x1A,0x22,0x20,0x20,0x20,0x22,0x50,0x50,0x50,0x60,0x07,0x00,0x80,0x90,0x90,0x10,0x10,0x70,0x70,0xA0,0xA0,0x30,0x30,0x30,_nn_,
0x90,0x9B,    //Row : 6
0x10,0x22,0x02,0x20,0x20,0x22,0x10,_bb_,8,0x04,0x02,0x10,_bb_,8,_nn_,
0x90,0xB3,    //Row : 7
0x10,0x10,0x02,0x22,0x04,0x20,0x22,0x22,0x04,0x10,0x10,0x10,0x22,_bb_,4,0x10,_bb_,8,_nn_,
0x90,0xCB,    //Row : 8
0x10,_bb_,4,0x22,_bb_,4,0x00,0x22,_bb_,5,0x10,_bb_,10,_nn_,
0x90,0xE3,    //Row : 9
0x10,_bb_,24,
_end_



};
//-------------------------------------------------------------------------------
// #Code : 1 Bit Font
BYTE code tLogoFont1Bit[] =
{
    0x0F,0xC1,0x87,0x3E,0x62,0xDB,0x54,0x9A,0x02,0x56,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x91,0x54,0x91,0x54,0x91,0x54,0x91,0x54,0x91,0x54,0x91,0x54,0x91,0x54,0x91,
    0x54,0x91,0x54,0x92,0x24,0x49,0x92,0x24,0x49,0x92,0x24,0x49,0x92,0x24,0x49,0x92,0x24,0x49,0x92,0x24,0x49,0x92,0x24,0x34,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x76,0x02,0x00,0x00,0x00,0x00,0x00,0x70,0x48,0x77,0x52,0x00,0x00,0x00,0x00,0x00,0x58,0xD0,0x09,0x00,0x00,0x00,0x00,0x00,0x00,0x50,0x03,0x00,
    0x00,0x00,0x00,0x80,0xA1,0x39,0xAC,0x5D,0x00,0x00,0x00,0x00,0x00,0x58,0xB0,0x85,0x0D,0x00,0x00,0x00,0x00,0x00,0x90,0xAA,0x5E,0x49,0x92,0x95,0x24,0x49,0x92,0x24,
    0x49,0x92,0x24,0x49,0x92,0x24,0x49,0x92,0x24,0x49,0x92,0x24,0x49,0x12,0x00,0x00,0x00,0xDD,0xD0,0x0D,0x7B,0xC3,0xDE,0xB0,0x37,0x52,0x87,0x15,0xB3,0x3B,0x87,0xB5,
    0x4E,0x91,0x54,0x91,0xD4,0x90,0xCC,0x90,0xCC,0x90,0xCC,0x90,0x8C,0x84,0x6D,0x2D,0xD8,0x1B,0xBA,0x41,0x03,0x00,0x00,0xE0,0xD0,0x4E,0xD1,0x5D,0xC5,0xDE,0x15,0xD6,
    0x3A,0x29,0x6B,0x25,0x39,0xBD,0x93,0x44,0x67,0x25,0x44,0x42,0x87,0xEE,0x2C,0xC8,0x86,0xB5,0x61,0x83,0x8D,0x01,0x29,0x45,0x32,0x87,0xE4,0x00,0x00,0x00,0x74,0x82,
    0x35,0xC5,0x8E,0x21,0xA1,0x3B,0x61,0x77,0x00,0x00,0x00,0x90,0x52,0xAC,0xCC,0x61,0xAF,0x3A,0xEC,0x7D,0xC2,0xDE,0x01,0x00,0x00,0xC8,0x58,0x64,0xA6,0x3B,0x99,0xE9,
    0x4E,0x66,0xBA,0x93,0x99,0xEE,0x00,0x00,0x00,0x84,0x45,0x58,0x2B,0x61,0xAD,0x84,0xB5,0x12,0xD6,0x0A,0x00,0x00,0x40,0xCA,0x26,0x4F,0x91,0x9C,0x43,0x52,0x45,0x52,
    0x45,0x00,0x00,0x00,0x0E,0xAB,0x27,0x24,0x27,0x33,0xDD,0xC9,0x4C,0x77,0x32,0xD3,0x1D,0x00,0x00,0x00,0xD9,0xD8,0x27,0xF4,0xAA,0x62,0x67,0x86,0x95,0x19,0x92,0x2A,
    0x92,0x2A,0x92,0x2A,0x92,0x2A,0x92,0xAA,0x53,0x49,0xD5,0x4E,0x52,0xA5,0x93,0x2A,0x92,0x2A,0x62,0x6F,0xE8,0x86,0x6E,0x00,0x00,0x00,0x00,0xC0,0x90,0x4C,0x91,0x4C,
    0x91,0x54,0x91,0xD4,0x61,0xAD,0x93,0xD1,0x3B,0x2B,0x45,0x74,0x68,0x00,0x00,0x00,0xC0,0x0D,0xEA,0x42,0x4C,0x6C,0x9C,0x14,0xD0,0x09,0xDD,0x09,0xDD,0x09,0xDD,0x09,
    0xDD,0x09,0xDD,0x09,0xDD,0x09,0x4D,0x58,0xC0,0x61,0xAD,0x73,0x58,0xEB,0x1C,0xD6,0x3A,0x87,0xB5,0xCE,0x61,0xAD,0x73,0x58,0xEB,0x1C,0xD6,0x3A,0x8C,0x04,0xD0,0x0B,
    0xB8,0x2E,0xB8,0x2E,0x58,0xCB,0xB0,0x96,0x62,0xAD,0xC9,0x58,0xEB,0xD8,0xB9,0xAE,0x06,0x42,0x92,0xCC,0xEC,0x24,0x33,0x3A,0x99,0x21,0x0B,0xD6,0x81,0x0C,0xBB,0x0B,
    0x13,0x40,0xD8,0x3B,0x61,0xEF,0x84,0xBD,0x13,0x7A,0x27,0x74,0x27,0x90,0x5D,0xC3,0xB2,0x42,0x03,0x61,0xEF,0x84,0xBD,0x13,0xF6,0x4E,0xD8,0x3B,0x87,0xBD,0x53,0xAC,
    0x7D,0x86,0xAC,0x42,0x05,0x90,0x99,0xEE,0x64,0xA6,0x3B,0x99,0xE9,0x4E,0x66,0xBA,0x93,0x99,0xEE,0xA4,0xA6,0x3B,0x49,0x74,0x7A,0x0E,0x0B,0x08,0x6B,0x25,0xAC,0x95,
    0xB0,0x56,0xC2,0x5A,0x09,0x6B,0x25,0x24,0x09,0x49,0x28,0x2B,0x40,0xAA,0x48,0xAA,0x48,0xAA,0x48,0xAA,0x48,0xAA,0x48,0xAA,0x48,0xAA,0x08,0xB1,0x03,0x64,0xA6,0x3B,
    0x99,0xE9,0x4E,0x66,0xBA,0x93,0x99,0xEE,0x64,0xA6,0x3B,0x99,0xE9,0x4E,0x66,0xBA,0xC3,0xB1,0x02,0x64,0xA6,0x3B,0x99,0xE9,0x4E,0x66,0xBA,0x93,0x19,0xB2,0x6A,0xC8,
    0x3E,0xC5,0xEA,0x84,0x6D,0x07,0x40,0xAA,0x48,0xAA,0x48,0xAA,0x48,0xAA,0x48,0xAA,0x48,0xAA,0x5A,0x92,0x73,0x76,0x88,0x0A,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x00,
};
//-------------------------------------------------------------------------------
// #Code : 2 Bit Font
BYTE code tLogoFont2Bit[] =
{
    0x0F,0x18,0x7C,0x3E,0x42,0x6B,0x5D,0x9A,0x05,0x90,0x00,0x00,0x00,0x00,0x00,0x00,0x36,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x00,0x00,0x14,0x24,0xA1,
    0x92,0x24,0x01,0x00,0x00,0x00,0x00,0x05,0xAD,0x4B,0x41,0x03,0x00,0x00,0x00,0x14,0x24,0x89,0x49,0x92,0x24,0x49,0x12,0x00,0x00,0x00,0xC0,0x06,0xB4,0x03,0x00,0x00,
    0x00,0x00,0x40,0x22,0x24,0x49,0x92,0x24,0x49,0x92,0x24,0x00,0x00,0x00,0x00,0xB3,0x00,0x00,0x00,0x00,0x00,0x00,0x48,0x64,0xAF,0x24,0x49,0x92,0x24,0x49,0x92,0x04,
    0x00,0x00,0x00,0x60,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x42,0x48,0x92,0x24,0x49,0x92,0x24,0x49,0x00,0x00,0x00,0x80,0x69,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0xA4,0x25,0x92,0x00,0x00,0x00,0x00,0x00,0xD0,0x54,0xB3,0x9B,0x02,0x00,0x00,0x00,0x00,0x40,0x15,0xCC,0x06,0x00,0x00,0x00,0x00,0x00,0x14,0x5C,0x37,0x00,0x00,0x00,
    0x80,0x45,0xE6,0x5A,0x24,0x6B,0x91,0xAC,0x45,0xB2,0x00,0x00,0x00,0x00,0xF4,0x2C,0x68,0x00,0x00,0x00,0x00,0x00,0x98,0x8D,0x9D,0x50,0x49,0x4A,0x92,0xCC,0x0E,0x00,
    0x00,0x00,0xA0,0x6F,0x80,0x42,0x69,0x00,0x50,0x50,0x19,0x24,0x29,0x93,0x24,0x93,0x24,0x49,0x92,0x24,0x49,0x92,0x24,0x49,0x12,0x40,0x41,0xB9,0x80,0x72,0xC1,0x05,
    0x00,0x00,0x20,0x09,0x95,0x24,0x93,0x24,0x49,0x92,0x24,0x49,0x92,0x24,0x49,0x92,0x24,0x49,0x92,0x24,0x49,0x92,0xA4,0x61,0xC3,0x05,0x00,0x00,0x00,0x00,0x80,0x24,
    0x49,0x92,0x24,0x49,0x92,0x24,0x49,0x92,0x24,0x49,0x92,0x24,0xC9,0x49,0x92,0x58,0x49,0x16,0xC9,0x01,0x00,0x00,0x00,0x00,0x37,0x70,0xE1,0x02,0x49,0x92,0x24,0x49,
    0x92,0x24,0x49,0x56,0x92,0x2C,0x92,0x60,0x05,0x34,0x00,0x00,0x00,0xC0,0x55,0xB8,0xA0,0x70,0x15,0x68,0x00,0x90,0x24,0x49,0x4E,0x92,0xE0,0x64,0x01,0x00,0x00,0x00,
    0x00,0xE0,0x01,0x6C,0x0F,0x34,0x00,0x00,0x00,0x20,0x49,0x12,0x48,0x03,0x00,0x00,0x00,0x00,0x00,0xC0,0x5E,0x00,0x00,0x00,0x00,0x00,0x24,0x49,0x42,0x01,0x00,0x00,
    0x00,0x00,0x00,0x80,0x01,0x00,0x00,0x00,0x00,0x00,0x49,0x92,0x24,0x91,0x30,0x00,0x00,0x00,0x00,0x00,0x60,0xA1,0xB1,0x00,0x00,0x00,0x00,0x00,0x49,0x92,0x24,0x49,
    0x92,0x24,0xC9,0x4E,0x54,0xEC,0x00,0x00,0x00,0x00,0x00,0xD0,0x5C,0x28,0x1E,0xA0,0x00,0x00,0xC0,0x21,0x47,0x92,0x24,0x49,0x92,0x24,0x49,0x92,0x24,0x49,0x92,0x49,
    0x26,0x51,0xA9,0x84,0x6D,0x0F,0x6E,0x6C,0x6C,0x00,0x00,0x80,0x8B,0x46,0x29,0xB8,0x69,0xEC,0x04,0x49,0x92,0x24,0x49,0x92,0x24,0x49,0x92,0x24,0x49,0x92,0x24,0x49,
    0x92,0x24,0x49,0x92,0x24,0xB7,0x06,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xD8,0x05,0x33,0x00,0x00,0x00,0x00,0x00,0x05,0x00,0x17,0x6C,0x90,0xC1,
    0x4E,0xA8,0x24,0x4C,0x92,0xAA,0x24,0x99,0x9D,0x24,0x49,0x92,0x24,0x49,0x92,0xC4,0x5D,0xD0,0x17,0x6E,0xA8,0x86,0x0B,0x0A,0x00,0x0D,0x00,0x92,0x24,0x49,0x92,0x24,
    0x49,0x92,0x9C,0x24,0xC9,0x5A,0x49,0xA2,0x93,0x1C,0x92,0x2C,0x92,0xD3,0x24,0x0B,0x00,0x00,0x77,0xC1,0x05,0x1A,0x0A,0xEA,0x06,0x17,0x40,0xD2,0x58,0x07,0x34,0x00,
    0x00,0x00,0x00,0x40,0x69,0xB8,0x01,0x00,0x00,0x00,0x00,0x90,0x24,0x49,0x92,0x3D,0x49,0xA2,0x32,0x09,0xD9,0x09,0x5B,0x42,0x99,0xC0,0x1E,0xA8,0x0D,0x00,0x40,0x01,
    0xFA,0x06,0x05,0x68,0x70,0x81,0x1B,0x95,0x60,0x27,0xD4,0x24,0xEC,0x24,0x4C,0x92,0x92,0x24,0x55,0x49,0xB2,0x77,0x92,0xCC,0x24,0xC9,0x4C,0x0A,0xDC,0xE0,0x02,0x0D,
    0x50,0xE0,0x06,0x6E,0x70,0x41,0xD3,0x24,0x8D,0x04,0x4E,0xE0,0x1C,0x58,0x0B,0xD6,0x82,0x5E,0xD0,0x0D,0xDD,0x1A,0x00,0x50,0x70,0x03,0x37,0x5C,0xC0,0x05,0x40,0xB7,
    0x45,0xB2,0x16,0xC9,0x82,0x59,0x00,0x00,0x00,0x00,0x00,0xA0,0x81,0x06,0x00,0x00,0x00,0x00,0x00,0xA0,0x0A,0xAA,0xA0,0x0A,0xAA,0xA0,0x0A,0xAA,0xA0,0x0A,0x00,0xA0,
    0x0A,0x00,0x00,0x00,0x00,0x80,0x6E,0x00,0x00,0x00,0x00,0x00,0x00,0xD0,0x00,0x00,0x00,0x00,0x00,0x00,0x2A,0xA1,0x24,0x14,0x03,0x60,0x02,0x95,0x50,0x95,0x50,0x95,
    0x50,0x95,0x50,0x95,0x50,0x12,0x8A,0x01,0x00,0x00,0x00,0x00,0x60,0x2D,0xE8,0x05,0x00,0xD0,0xA0,0x1B,0xBA,0xA1,0x1B,0xBA,0x61,0x2D,0xE8,0x45,0x81,0x5D,0x90,0x81,
    0x09,0x65,0x06,0x66,0x60,0x06,0x87,0x99,0xB3,0xD8,0x73,0xA0,0x1A,0x38,0x84,0xC3,0xCC,0x39,0xCC,0x9C,0xC3,0xCC,0x39,0xCC,0x9C,0xC3,0xCC,0x59,0xEC,0x39,0x50,0x0D,
    0x00,0x00,0x00,0x00,0xAA,0xA0,0x0A,0xAA,0x00,0x00,0x00,0x00,0x00,0x00,0xA0,0x0A,0x14,0x00,0x00,0x00,0x80,0x24,0x49,0x92,0x24,0x49,0x92,0x24,0x49,0x92,0x24,0x49,
    0x92,0xCC,0x24,0xC9,0x4C,0x92,0xEC,0x9D,0x24,0x55,0x01,0x00,0x00,0x40,0x03,0x0D,0x17,0xB8,0x81,0x1B,0x1A,0x74,0x43,0x37,0x74,0xC3,0x6A,0x58,0x0B,0xCE,0x82,0x73,
    0x20,0x07,0xBA,0xA1,0x1B,0x00,0xE0,0xBA,0xC0,0x05,0x37,0x70,0x43,0x61,0xA6,0x9B,0x99,0x6E,0x66,0xBA,0x99,0xE9,0x66,0xA6,0x9B,0xBD,0xBB,0xA9,0xBD,0x1A,0x1C,0x00,
    0xBA,0xA1,0x1B,0xBA,0xA1,0x1B,0xBA,0xA1,0x1B,0x56,0x83,0x03,0x48,0xA2,0x32,0x09,0xD9,0x09,0x53,0x09,0x5B,0x02,0x7B,0xA0,0x36,0x00,0x00,0x0A,0x68,0x70,0x81,0x5B,
    0xA3,0x5C,0xC0,0x0D,0x00,0x48,0x92,0x24,0x49,0x92,0x24,0x49,0x92,0x24,0x49,0x92,0x24,0x49,0x92,0x24,0x49,0x92,0x24,0x49,0xB2,0x27,0x00,0x00,0x00,0x00,0x00,0xA0,
    0xC1,0x7D,0x41,0xA2,0x49,0x34,0x49,0x2F,0x92,0x75,0x48,0x4E,0x48,0x92,0xEE,0x24,0x59,0x2B,0x49,0x72,0x92,0x00,0x0D,0x7D,0x01,0x00,0xDC,0xA0,0x68,0x70,0x41,0x01,
    0x00,0x00,0x00,0x00,0x00,0x80,0x29,0x00,0x00,0x00,0x00,0x00,0x00,0xD8,0x05,0x00,0x00,0x00,0x00,0xC0,0x0D,0xCE,0x03,0xE7,0x00,0x00,0x00,0x00,0x00,0xDC,0xC0,0x05,
    0x48,0xA2,0xB2,0x13,0x46,0x42,0xD9,0x03,0x0A,0x00,0x00,0x00,0x00,0x00,0xB8,0x2F,0x50,0x00,0x00,0x00,0x48,0x92,0x24,0x49,0x92,0x24,0x49,0x92,0x24,0x49,0x32,0x49,
    0x12,0x3B,0x95,0x30,0x76,0x00,0x00,0x00,0x00,0x00,0xA8,0xDB,0x0D,0x97,0xAB,0x41,0x21,0x49,0x92,0x24,0x49,0x92,0x24,0x49,0x92,0x24,0x49,0x92,0x24,0x49,0x92,0x24,
    0x49,0x92,0x24,0xC9,0x24,0x49,0x92,0x24,0x49,0x92,0x24,0x49,0x92,0x24,0x49,0x92,0x24,0x49,0x92,0x24,0x49,0x92,0x24,0x49,0x76,0x82,0x06,0x67,0x69,0x12,0x87,0x64,
    0xA5,0x25,0x49,0x56,0x92,0x24,0x49,0x92,0x24,0x49,0x92,0x04,0xC0,0x7D,0x69,0x94,0x1B,0x2E,0x50,0xEA,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xB3,0x84,0xA4,0x93,
    0x95,0x04,0x00,0x00,0x00,0x00,0x50,0x97,0x82,0xC5,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x2C,0x00,0x00,0x00,0x00,0x00,0x00,0xD0,0x00,0x00,0x00,0x00,0x80,0x82,0xCA,
    0x20,0x49,0x04,0x00,0x00,0x00,0x00,0x14,0xDC,0x2E,0x60,0x55,0x03,0x00,0x60,0x43,0x65,0x90,0x84,0x49,0x92,0x9D,0x24,0x49,0x92,0x24,0x01,0x00,0xC0,0x0D,0x05,0x50,
    0x2E,0xB8,0x00,0x0A,0x2A,0x41,0x12,0x76,0x92,0xA9,0x24,0x49,0x92,0x24,0x49,0xFA,0x24,0x59,0x24,0xC1,0x49,0x43,0xA3,0xD1,0x70,0xE1,0x02,0x00,0x5C,0x37,0x6E,0x28,
    0xD0,0x70,0xC1,0x39,0x70,0x0E,0x9C,0x03,0xE7,0x80,0x06,0x00,0x00,0x00,0x00,0x00,0x6E,0xE0,0x02,0x00,0x00,0xB0,0x13,0x62,0x07,0x00,0x00,0x00,0x00,0x00,0x3C,0x28,
    0xEE,0x06,0x00,0x00,0x00,0x00,0x00,0x49,0x92,0x24,0x49,0x92,0xC4,0x44,0x85,0x02,0x00,0x00,0x00,0x00,0xA0,0x71,0xB1,0x51,0x00,0x00,0x00,0x40,0x92,0x24,0x49,0x92,
    0x24,0x49,0x92,0x24,0x49,0x25,0x2A,0x00,0x00,0x00,0x00,0x00,0x00,0xBB,0xD9,0x00,0x00,0x00,0x92,0x24,0x49,0x92,0x24,0x49,0x92,0x24,0x49,0x92,0x24,0x91,0x98,0x00,
    0x00,0x00,0x00,0x00,0x00,0x54,0x38,0x00,0x00,0x00,0x92,0x24,0x49,0x92,0x24,0x49,0x92,0x24,0x49,0x92,0x24,0x81,0x01,0x00,0x00,0x21,0x00,0x00,0x00,0x2C,0x09,0x00,
    0x00,0x49,0x32,0x49,0x92,0x24,0x49,0x92,0x24,0x49,0xB2,0x92,0x04,0x00,0x00,0x80,0x96,0x00,0x00,0xB0,0x0F,0x00,0x00,0x90,0x64,0x93,0x24,0x49,0x92,0x24,0x49,0x92,
    0x64,0x25,0x09,0xA4,0x01,0x00,0x68,0x6B,0x14,0x00,0x00,0x16,0xC0,0x6E,0x00,0x00,0x92,0x24,0x49,0x92,0x24,0x27,0x49,0x9A,0x24,0xB0,0x00,0x00,0x00,0x00,0x80,0x1B,
    0x16,0x14,0x2C,0x00,0x00,0x00,0xB1,0x92,0x20,0x59,0xD0,0x00,0x00,0x00,0x00,0xA0,0x5C,0x40,0xB9,0xE0,0x02,0x00,0x00,0x00,0x00,0x00,
};
//-------------------------------------------------------------------------------
// #Code : 4 Bit Font
BYTE code tLogoFont4Bit[] =
{
    0x0E,0xF2,0xC3,0x81,0x64,0x79,0x5D,0xAB,0x00,0xCB,0x00,0x00,0x00,0x00,0xB0,0xF0,0xE0,0x00,0x00,0x00,0x00,0x00,0x80,0xA1,0x5E,0x55,0xA9,0xAA,0xAA,0xAA,0x2A,0x00,
    0x00,0x00,0x00,0xB0,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x00,0x60,0x81,0xC5,0x33,0x8B,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x05,0x16,0xCF,0x2C,0x74,0xC3,0x75,0x41,0x02,0x89,0x50,0x81,0x54,0x90,0x40,0x02,0x09,0x74,0xC3,0x75,0x41,0x02,
    0x89,0x50,0x81,0x54,0x90,0x40,0x02,0x09,0x74,0xC3,0x75,0x41,0x02,0x89,0xB4,0x0A,0xA4,0x82,0x04,0x12,0x48,0x00,0x00,0x00,0x38,0x00,0x00,0x00,0x80,0x04,0x12,0x48,
    0x20,0x81,0x04,0x12,0x43,0xD5,0x0D,0xB5,0x01,0x24,0x90,0x40,0x02,0x09,0x24,0x90,0x18,0xAA,0x6E,0xA8,0x0D,0x20,0x81,0x04,0x12,0x48,0x20,0x81,0xC4,0x50,0x75,0xD3,
    0x6A,0x03,0x00,0x00,0x00,0x00,0x00,0x70,0x00,0x18,0xCE,0x06,0x00,0x00,0x00,0xD8,0x00,0x80,0xA2,0xA2,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,
    0xAA,0xAA,0x8A,0x0D,0x00,0xD0,0xB8,0x01,0x00,0x00,0x00,0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
//-------------------------------------------------------------------------------


#else




#endif		//#ifdef __LOGO__


void CDrawLogo(void); 
void SetLogoOsdMap(void);
void COsdFxCodeWrite(BYTE *pArray);
void COsdLogoColorPalette(BYTE *pColorPaletteArray);



#endif		//#if(_LOGO_ENABLE)

extern BYTE code tLogoTemp;
