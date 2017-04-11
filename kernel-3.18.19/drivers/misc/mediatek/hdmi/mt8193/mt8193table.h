
#ifndef __mt8193table_h__
#define __mt8193table_h__
#ifdef HDMI_MT8193_SUPPORT

enum HDMI_VIDEO_RESOLUTION {
	HDMI_VIDEO_720x480p_60Hz = 0,	/* 0 */
	HDMI_VIDEO_720x576p_50Hz,	/* 1 */
	HDMI_VIDEO_1280x720p_60Hz,	/* 2 */
	HDMI_VIDEO_1280x720p_50Hz,	/* 3 */
	HDMI_VIDEO_1920x1080i_60Hz,	/* 4 */
	HDMI_VIDEO_1920x1080i_50Hz,	/* 5 */
	HDMI_VIDEO_1920x1080p_30Hz,	/* 6 */
	HDMI_VIDEO_1920x1080p_25Hz,	/* 7 */
	HDMI_VIDEO_1920x1080p_24Hz,	/* 8 */
	HDMI_VIDEO_1920x1080p_23Hz,	/* 9 */
	HDMI_VIDEO_1920x1080p_29Hz,	/* a */
	HDMI_VIDEO_1920x1080p_60Hz,	/* b */
	HDMI_VIDEO_1920x1080p_50Hz,	/* c */

	HDMI_VIDEO_RESOLUTION_NUM
};

enum _HDMI_DEEP_COLOR_T {
	HDMI_DEEP_COLOR_AUTO = 0,
	HDMI_NO_DEEP_COLOR,
	HDMI_DEEP_COLOR_10_BIT,
	HDMI_DEEP_COLOR_12_BIT,
	HDMI_DEEP_COLOR_16_BIT
};
#define HDMI_DEEP_COLOR_T enum _HDMI_DEEP_COLOR_T

enum _HDMI_AUDIO_INPUT_TYPE_T {
	SV_I2S = 0,
	SV_SPDIF
};
#define HDMI_AUDIO_INPUT_TYPE_T enum _HDMI_AUDIO_INPUT_TYPE_T

enum _AUDIO_SAMPLING_T {
/* new add 2007/9/12 */
	FS_16K = 0x00,
	FS_22K,
	FS_24K,
	FS_32K,
	FS_44K,
	FS_48K,
	FS_64K,
	FS_88K,
	FS_96K,
	FS_176K,
	FS_192K,
	FS512_44K,		/* for DSD */
	FS_768K,
	FS128_44k,
	FS_128K,
	FS_UNKNOWN,
	FS_48K_MAX_CH
};
#define AUDIO_SAMPLING_T enum _AUDIO_SAMPLING_T

enum _HDMI_AUDIO_SAMPLING_T {
	HDMI_FS_32K = 0,
	HDMI_FS_44K,
	HDMI_FS_48K,
	HDMI_FS_88K,
	HDMI_FS_96K,
	HDMI_FS_176K,
	HDMI_FS_192K
};
#define HDMI_AUDIO_SAMPLING_T enum _HDMI_AUDIO_SAMPLING_T

enum _PCM_BIT_SIZE_T {
	PCM_16BIT = 0,
	PCM_20BIT,
	PCM_24BIT
};
#define PCM_BIT_SIZE_T enum _PCM_BIT_SIZE_T

enum _HDMI_OUT_COLOR_SPACE_T {
	HDMI_RGB = 0,
	HDMI_RGB_FULL,
	HDMI_YCBCR_444,
	HDMI_YCBCR_422,
	HDMI_XV_YCC,
	HDMI_YCBCR_444_FULL,
	HDMI_YCBCR_422_FULL
};
#define HDMI_OUT_COLOR_SPACE_T enum _HDMI_OUT_COLOR_SPACE_T

static const unsigned int HVSYNC_TOTAL_WIDTH_ACTIVE[HDMI_VIDEO_RESOLUTION_NUM][6] = {
	{0x020d035a, 0x0006003E, 0x00250204, 0x00250204, 0x007c034b, 0x3},	/* 480p@27M */
	{0x02710360, 0x00050040, 0x002d026c, 0x002d026c, 0x00860355, 0x3},	/* 576p@27M */
	{0x02ee0672, 0x00050028, 0x001a02e9, 0x001a02e9, 0x01060605, 0x0},	/* 720p@60Hz */
	{0x02ee07bc, 0x00050028, 0x001a02e9, 0x001a02e9, 0x01060605, 0x0},	/* 720p@50Hz */
	{0x04650898, 0x0005002C, 0x02480463, 0x00150230, 0x01180897, 0x0},	/* 1080i@60Hz */
	{0x04650a50, 0x0005002C, 0x02480463, 0x00150230, 0x018008ff, 0x0},	/* 1080i@50Hz */
	{0x04650898, 0x0005002C, 0x002a0461, 0x002a0461, 0x00c20841, 0x0},	/* 1080p@30Hz */
	{0x04650a50, 0x0005002C, 0x002a0461, 0x002a0461, 0x00c20841, 0x0},	/* 1080p@25Hz */
	{0x04650abe, 0x0005002C, 0x002a0461, 0x002a0461, 0x00c20841, 0x0},	/* 1080p@24Hz */
	{0x04650abe, 0x0005002C, 0x002a0461, 0x002a0461, 0x00c20841, 0x0},	/* 1080p@23.976Hz */
	{0x04650898, 0x0005002C, 0x002a0461, 0x002a0461, 0x00c20841, 0x0},	/* 1080p@29.97Hz */
	{0x04650898, 0x0005002C, 0x002a0461, 0x002a0461, 0x00c20841, 0x0},	/* 1080p@60Hz */
	{0x04650a50, 0x0005002C, 0x002a0461, 0x002a0461, 0x00c20841, 0x0},	/* 1080p@50Hz */
};

static const unsigned int HVSYNC_DELAY[HDMI_VIDEO_RESOLUTION_NUM] = {
	0x00130007,		/* 480p@27M */
	0x000b0003,		/* 576p@27M */
	0x000b0065,		/* 720p@60Hz */
	0x000b01af,		/* 720p@50Hz */
	0x000b01b0,		/* 1080i@60Hz */
	0x000b01b0,		/* 1080i@50Hz */
	0x0009004f,		/* 1080p@30Hz */
	0x00090207,		/* 1080p@25Hz */
	0x00090275,		/* 1080p@24Hz */
	0x00090276,		/* 1080p@23.976Hz */
	0x0009004f,		/* 1080p@29.97Hz */
	0x000b01b0,		/* 1080p@60Hz */
	0x000b01b0		/* 1080p@50Hz */
};

static const unsigned int CBCR_PRELOAD[HDMI_VIDEO_RESOLUTION_NUM] = {
	0x0,			/* 480p@27M */
	0x0,			/* 576p@27M */
	0x0,			/* 720p@60Hz */
	0x0,			/* 720p@50Hz */
	0x0,			/* 1080i@60Hz */
	0x0,			/* 1080i@50Hz */
	0x0,			/* 1080p@30Hz */
	0x0,			/* 1080p@25Hz */
	0x0,			/* 1080p@24Hz */
	0x0,			/* 1080p@23.976Hz */
	0x0,			/* 1080p@29.97Hz */
	0x0,			/* 1080p@60Hz */
	0x0			/* 1080p@50Hz */
};

static const unsigned char HDMI_VIDEO_ID_CODE[HDMI_VIDEO_RESOLUTION_NUM] = {
	2, 17, 4, 19, 5, 20, 34, 33, 32, 32, 34, 16, 31 };
/* 480P,576P,720P60,720P50,1080I60,1080I50,,,1080P30,1080P25,1080P24,1080P23.97,1080P29.97,1080p60,1080p50*/

static const unsigned int HDMI_ANL_INIT[8] = {
	0x0000BBBB, 0x00000000, 0x1F001F00, 0x00300094, 0xF4c81400, 0x46331717, 0x00004100,
	0x00004140
};

static const unsigned int HDMI_ANL_INIT_1080P_36BIT[8] = {
	0x0000CCCC, 0x00000000, 0x1F001F04, 0x00300094, 0x8F888F00, 0x46331717, 0x00004100,
	0x00004140
};

/* PLL setting */
/* Band, N1 ,N2, F2, N3 ,N4 */
static const unsigned char HDMI_PLL_SETTING[3][5] = {
	{0x94, 0x00, 0x14, 0xC8, 0xF4},	/* 27Mhz */
	{0x8F, 0x00, 0x8F, 0xA8, 0xD4},	/* 74Mhz */
	{0x8F, 0x00, 0x8F, 0x88, 0xB4}	/* 148 Mhz */
};

static const unsigned char HDMI_PLL_SETTING_X_1_25[3][5] = {
	{0x94, 0x00, 0x14, 0xC8, 0xF9},	/* 27 Mhz */
	{0x8F, 0x10, 0x8F, 0xA8, 0xB9},	/* 74Mhz */
	{0x8F, 0x10, 0x8F, 0x88, 0x99}	/* 148Mhz */
};

static const unsigned char HDMI_PLL_SETTING_X_1_5[3][5] = {
	{0x94, 0x00, 0x14, 0xC8, 0xCF},	/* 27Mhz */
	{0x8F, 0x00, 0x8F, 0xA8, 0xAF},	/* 74Mhz */
	{0x8F, 0x00, 0x8F, 0x88, 0x8F}	/* 148Mhz */
};

#define NCTS_BYTES          0x07
static const unsigned char HDMI_NCTS[7][7][NCTS_BYTES] = {
	{{0x00, 0x00, 0x69, 0x78, 0x00, 0x10, 0x00},	/* 32K, 480i/576i/480p@27MHz/576p@27MHz */
	 {0x00, 0x00, 0xd2, 0xf0, 0x00, 0x10, 0x00},	/* 32K, 480p@54MHz/576p@54MHz */
	 {0x00, 0x03, 0x37, 0xf9, 0x00, 0x2d, 0x80},	/* 32K, 720p@60/1080i@60 */
	 {0x00, 0x01, 0x22, 0x0a, 0x00, 0x10, 0x00},	/* 32K, 720p@50/1080i@50 */
	 {0x00, 0x06, 0x6f, 0xf3, 0x00, 0x2d, 0x80},	/* 32K, 1080p@60 */
	 {0x00, 0x02, 0x44, 0x14, 0x00, 0x10, 0x00},	/* 32K, 1080p@50 */
	 {0x00, 0x01, 0xA5, 0xe0, 0x00, 0x10, 0x00}	/* 32K, 480p@108MHz/576p@108MHz */
	 },
	{{0x00, 0x00, 0x75, 0x30, 0x00, 0x18, 0x80},	/* 44K, 480i/576i/480p@27MHz/576p@27MHz */
	 {0x00, 0x00, 0xea, 0x60, 0x00, 0x18, 0x80},	/* 44K, 480p@54MHz/576p@54MHz */
	 {0x00, 0x03, 0x93, 0x87, 0x00, 0x45, 0xac},	/* 44K, 720p@60/1080i@60 */
	 {0x00, 0x01, 0x42, 0x44, 0x00, 0x18, 0x80},	/* 44K, 720p@50/1080i@50 */
	 {0x00, 0x03, 0x93, 0x87, 0x00, 0x22, 0xd6},	/* 44K, 1080p@60 */
	 {0x00, 0x02, 0x84, 0x88, 0x00, 0x18, 0x80},	/* 44K, 1080p@50 */
	 {0x00, 0x01, 0xd4, 0xc0, 0x00, 0x18, 0x80}	/* 44K, 480p@108MHz/576p@108MHz */
	 },
	{{0x00, 0x00, 0x69, 0x78, 0x00, 0x18, 0x00},	/* 48K, 480i/576i/480p@27MHz/576p@27MHz */
	 {0x00, 0x00, 0xd2, 0xf0, 0x00, 0x18, 0x00},	/* 48K, 480p@54MHz/576p@54MHz */
	 {0x00, 0x02, 0x25, 0x51, 0x00, 0x2d, 0x80},	/* 48K, 720p@60/1080i@60 */
	 {0x00, 0x01, 0x22, 0x0a, 0x00, 0x18, 0x00},	/* 48K, 720p@50/1080i@50 */
	 {0x00, 0x02, 0x25, 0x51, 0x00, 0x16, 0xc0},	/* 48K, 1080p@60 */
	 {0x00, 0x02, 0x44, 0x14, 0x00, 0x18, 0x00},	/* 48K, 1080p@50 */
	 {0x00, 0x01, 0xA5, 0xe0, 0x00, 0x18, 0x00}	/* 48K, 108p@54MHz/576p@108MHz */
	 },
	{{0x00, 0x00, 0x75, 0x30, 0x00, 0x31, 0x00},	/* 88K 480i/576i/480p@27MHz/576p@27MHz */
	 {0x00, 0x00, 0xea, 0x60, 0x00, 0x31, 0x00},	/* 88K 480p@54MHz/576p@54MHz */
	 {0x00, 0x03, 0x93, 0x87, 0x00, 0x8b, 0x58},	/* 88K, 720p@60/1080i@60 */
	 {0x00, 0x01, 0x42, 0x44, 0x00, 0x31, 0x00},	/* 88K, 720p@50/1080i@50 */
	 {0x00, 0x03, 0x93, 0x87, 0x00, 0x45, 0xac},	/* 88K, 1080p@60 */
	 {0x00, 0x02, 0x84, 0x88, 0x00, 0x31, 0x00},	/* 88K, 1080p@50 */
	 {0x00, 0x01, 0xd4, 0xc0, 0x00, 0x31, 0x00}	/* 88K 480p@108MHz/576p@108MHz */
	 },
	{{0x00, 0x00, 0x69, 0x78, 0x00, 0x30, 0x00},	/* 96K, 480i/576i/480p@27MHz/576p@27MHz */
	 {0x00, 0x00, 0xd2, 0xf0, 0x00, 0x30, 0x00},	/* 96K, 480p@54MHz/576p@54MHz */
	 {0x00, 0x02, 0x25, 0x51, 0x00, 0x5b, 0x00},	/* 96K, 720p@60/1080i@60 */
	 {0x00, 0x01, 0x22, 0x0a, 0x00, 0x30, 0x00},	/* 96K, 720p@50/1080i@50 */
	 {0x00, 0x02, 0x25, 0x51, 0x00, 0x2d, 0x80},	/* 96K, 1080p@60 */
	 {0x00, 0x02, 0x44, 0x14, 0x00, 0x30, 0x00},	/* 96K, 1080p@50 */
	 {0x00, 0x01, 0xA5, 0xe0, 0x00, 0x30, 0x00}	/* 96K, 480p@108MHz/576p@108MHz */
	 },
	{{0x00, 0x00, 0x75, 0x30, 0x00, 0x62, 0x00},	/* 176K, 480i/576i/480p@27MHz/576p@27MHz */
	 {0x00, 0x00, 0xea, 0x60, 0x00, 0x62, 0x00},	/* 176K, 480p@54MHz/576p@54MHz */
	 {0x00, 0x03, 0x93, 0x87, 0x01, 0x16, 0xb0},	/* 176K, 720p@60/1080i@60 */
	 {0x00, 0x01, 0x42, 0x44, 0x00, 0x62, 0x00},	/* 176K, 720p@50/1080i@50 */
	 {0x00, 0x03, 0x93, 0x87, 0x00, 0x8b, 0x58},	/* 176K, 1080p@60 */
	 {0x00, 0x02, 0x84, 0x88, 0x00, 0x62, 0x00},	/* 176K, 1080p@50 */
	 {0x00, 0x01, 0xd4, 0xc0, 0x00, 0x62, 0x00}	/* 176K, 480p@54MHz/576p@54MHz */
	 },
	{{0x00, 0x00, 0x69, 0x78, 0x00, 0x60, 0x00},	/* 192K, 480i/576i/480p@27MHz/576p@27MHz */
	 {0x00, 0x00, 0xd2, 0xf0, 0x00, 0x60, 0x00},	/* 192K, 480p@54MHz/576p@54MHz */
	 {0x00, 0x02, 0x25, 0x51, 0x00, 0xb6, 0x00},	/* 192K, 720p@60/1080i@60 */
	 {0x00, 0x01, 0x22, 0x0a, 0x00, 0x60, 0x00},	/* 192K, 720p@50/1080i@50 */
	 {0x00, 0x02, 0x25, 0x51, 0x00, 0x5b, 0x00},	/* 192K, 1080p@60 */
	 {0x00, 0x02, 0x44, 0x14, 0x00, 0x60, 0x00},	/* 192K, 1080p@50 */
	 {0x00, 0x01, 0xA5, 0xe0, 0x00, 0x60, 0x00}	/* 192K, 480p@108MHz/576p@108MHz */
	 }
};

#endif
#endif
