/*
* Copyright (C) 2011-2014 MediaTek Inc.
* 
* This program is free software: you can redistribute it and/or modify it under the terms of the 
* GNU General Public License version 2 as published by the Free Software Foundation.
* 
* This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; 
* without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
* See the GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License along with this program.
* If not, see <http://www.gnu.org/licenses/>.
*/

typedef enum
{
     DEVCAP_OFFSET_DEV_STATE 		= 0x00
    ,DEVCAP_OFFSET_MHL_VERSION		= 0x01
    ,DEVCAP_OFFSET_DEV_CAT          = 0x02
    ,DEVCAP_OFFSET_ADOPTER_ID_H     = 0x03
    ,DEVCAP_OFFSET_ADOPTER_ID_L     = 0x04
    ,DEVCAP_OFFSET_VID_LINK_MODE    = 0x05
    ,DEVCAP_OFFSET_AUD_LINK_MODE    = 0x06
    ,DEVCAP_OFFSET_VIDEO_TYPE       = 0x07
    ,DEVCAP_OFFSET_LOG_DEV_MAP      = 0x08
    ,DEVCAP_OFFSET_BANDWIDTH        = 0x09
    ,DEVCAP_OFFSET_FEATURE_FLAG     = 0x0A
    ,DEVCAP_OFFSET_DEVICE_ID_H      = 0x0B
    ,DEVCAP_OFFSET_DEVICE_ID_L      = 0x0C
    ,DEVCAP_OFFSET_SCRATCHPAD_SIZE  = 0x0D
    ,DEVCAP_OFFSET_INT_STAT_SIZE    = 0x0E
    ,DEVCAP_OFFSET_RESERVED         = 0x0F
    ,DEVCAP_SIZE
}DevCapOffset_e;
#define MHL_DEV_UNPOWERED		0x00
#define MHL_DEV_INACTIVE		0x01
#define MHL_DEV_QUIET			0x03
#define MHL_DEV_ACTIVE			0x04
#define	MHL_VER_MAJOR		(0x01 << 4)	
#define	MHL_VER_MINOR		0x02		
#define MHL_VERSION						(MHL_VER_MAJOR | MHL_VER_MINOR)
#define	MHL_DEV_CATEGORY_OFFSET				DEVCAP_OFFSET_DEV_CAT
#define	MHL_DEV_CATEGORY_POW_BIT			(BIT4)
#define	MHL_DEV_CAT_SINK		            0x01
#define	MHL_DEV_CAT_SOURCE		            0x02
#define	MHL_DEV_CAT_DONGLE		            0x03
#define	MHL_DEV_CAT_SELF_POWERED_DONGLE		0x13
#define	MHL_DEV_VID_LINK_SUPPRGB444			0x01
#define	MHL_DEV_VID_LINK_SUPPYCBCR444		0x02
#define	MHL_DEV_VID_LINK_SUPPYCBCR422		0x04
#define	MHL_DEV_VID_LINK_SUPP_PPIXEL		0x08
#define	MHL_DEV_VID_LINK_SUPP_ISLANDS		0x10
#define	MHL_DEV_VID_LINK_SUPP_VGA		    0x20
#define	MHL_DEV_AUD_LINK_2CH				0x01
#define	MHL_DEV_AUD_LINK_8CH				0x02
#define	MHL_DEV_FEATURE_FLAG_OFFSET			DEVCAP_OFFSET_FEATURE_FLAG
#define	MHL_FEATURE_RCP_SUPPORT				BIT0	
#define	MHL_FEATURE_RAP_SUPPORT				BIT1	
#define	MHL_FEATURE_SP_SUPPORT				BIT2	
#define		MHL_VT_GRAPHICS					0x00
#define		MHL_VT_PHOTO					0x02
#define		MHL_VT_CINEMA					0x04
#define		MHL_VT_GAMES					0x08
#define		MHL_SUPP_VT						0x80
#define	MHL_DEV_LD_DISPLAY					(0x01 << 0)
#define	MHL_DEV_LD_VIDEO					(0x01 << 1)
#define	MHL_DEV_LD_AUDIO					(0x01 << 2)
#define	MHL_DEV_LD_MEDIA					(0x01 << 3)
#define	MHL_DEV_LD_TUNER					(0x01 << 4)
#define	MHL_DEV_LD_RECORD					(0x01 << 5)
#define	MHL_DEV_LD_SPEAKER					(0x01 << 6)
#define	MHL_DEV_LD_GUI						(0x01 << 7)
#define	MHL_BANDWIDTH_LIMIT					22		
#define MHL_STATUS_REG_CONNECTED_RDY        0x30
#define MHL_STATUS_REG_LINK_MODE            0x31
#define	MHL_STATUS_DCAP_RDY					BIT0
#define MHL_STATUS_CLK_MODE_MASK            0x07
#define MHL_STATUS_CLK_MODE_PACKED_PIXEL    0x02
#define MHL_STATUS_CLK_MODE_NORMAL          0x03
#define MHL_STATUS_PATH_EN_MASK             0x08
#define MHL_STATUS_PATH_ENABLED             0x08
#define MHL_STATUS_PATH_DISABLED            0x00
#define MHL_STATUS_MUTED_MASK               0x10
#define MHL_RCHANGE_INT                     0x20
#define MHL_DCHANGE_INT                     0x21
#define	MHL_INT_DCAP_CHG					BIT0
#define MHL_INT_DSCR_CHG                    BIT1
#define MHL_INT_REQ_WRT                     BIT2
#define MHL_INT_GRT_WRT                     BIT3
#define	MHL_INT_EDID_CHG					BIT1
#define		MHL_INT_AND_STATUS_SIZE			0x33		
#define		MHL_SCRATCHPAD_SIZE				16
#define		MHL_MAX_BUFFER_SIZE				MHL_SCRATCHPAD_SIZE	
enum
{
    MHL_MSC_MSG_RCP             = 0x10,     
    MHL_MSC_MSG_RCPK            = 0x11,     
    MHL_MSC_MSG_RCPE            = 0x12,     
    MHL_MSC_MSG_RAP             = 0x20,     
    MHL_MSC_MSG_RAPK            = 0x21,     
};
#define	RCPE_NO_ERROR				0x00
#define	RCPE_INEEFECTIVE_KEY_CODE	0x01
#define	RCPE_BUSY					0x02
enum
{
    MHL_MSC_MSG_RAP_NO_ERROR        		= 0x00,     
    MHL_MSC_MSG_RAP_UNRECOGNIZED_ACT_CODE  	= 0x01,     
    MHL_MSC_MSG_RAP_UNSUPPORTED_ACT_CODE  	= 0x02,      			
    MHL_MSC_MSG_RAP_RESPONDER_BUSY   		= 0x03,     
};
enum
{
	MHL_ACK						= 0x33,	
	MHL_NACK					= 0x34,	
	MHL_ABORT					= 0x35,	
	MHL_WRITE_STAT				= 0x60 | 0x80,	
	MHL_SET_INT					= 0x60,	
	MHL_READ_DEVCAP				= 0x61,	
	MHL_GET_STATE				= 0x62,	
	MHL_GET_VENDOR_ID			= 0x63,	
	MHL_SET_HPD					= 0x64,	
	MHL_CLR_HPD					= 0x65,	
	MHL_SET_CAP_ID				= 0x66,	
	MHL_GET_CAP_ID				= 0x67,	
	MHL_MSC_MSG					= 0x68,	
	MHL_GET_SC1_ERRORCODE		= 0x69,	
	MHL_GET_DDC_ERRORCODE		= 0x6A,	
	MHL_GET_MSC_ERRORCODE		= 0x6B,	
	MHL_WRITE_BURST				= 0x6C,	
	MHL_GET_SC3_ERRORCODE		= 0x6D,	
};
#define MHL_RAP_CMD_POLL        0x00    
#define MHL_RAP_CONTENT_ON      0x10	
#define MHL_RAP_CONTENT_OFF     0x11	
#define	T_SRC_VBUS_CBUS_TO_STABLE	(200)	
#define	T_SRC_WAKE_PULSE_WIDTH_1	(20)	
#define	T_SRC_WAKE_PULSE_WIDTH_2	(60)	
#define	T_SRC_WAKE_TO_DISCOVER		(500)	
#define T_SRC_VBUS_CBUS_T0_STABLE 	(500)
#define	T_SRC_RSEN_DEGLITCH			(100)	
#define	T_SRC_RXSENSE_CHK			(400)