//<MStar Software>
//******************************************************************************
// MStar Software
// Copyright (c) 2010 - 2012 MStar Semiconductor, Inc. All rights reserved.
// All software, firmware and related documentation herein ("MStar Software") are
// intellectual property of MStar Semiconductor, Inc. ("MStar") and protected by
// law, including, but not limited to, copyright law and international treaties.
// Any use, modification, reproduction, retransmission, or republication of all
// or part of MStar Software is expressly prohibited, unless prior written
// permission has been granted by MStar.
//
// By accessing, browsing and/or using MStar Software, you acknowledge that you
// have read, understood, and agree, to be bound by below terms ("Terms") and to
// comply with all applicable laws and regulations:
//
// 1. MStar shall retain any and all right, ownership and interest to MStar
//    Software and any modification/derivatives thereof.
//    No right, ownership, or interest to MStar Software and any
//    modification/derivatives thereof is transferred to you under Terms.
//
// 2. You understand that MStar Software might include, incorporate or be
//    supplied together with third party`s software and the use of MStar
//    Software may require additional licenses from third parties.
//    Therefore, you hereby agree it is your sole responsibility to separately
//    obtain any and all third party right and license necessary for your use of
//    such third party`s software.
//
// 3. MStar Software and any modification/derivatives thereof shall be deemed as
//    MStar`s confidential information and you agree to keep MStar`s
//    confidential information in strictest confidence and not disclose to any
//    third party.
//
// 4. MStar Software is provided on an "AS IS" basis without warranties of any
//    kind. Any warranties are hereby expressly disclaimed by MStar, including
//    without limitation, any warranties of merchantability, non-infringement of
//    intellectual property rights, fitness for a particular purpose, error free
//    and in conformity with any international standard.  You agree to waive any
//    claim against MStar for any loss, damage, cost or expense that you may
//    incur related to your use of MStar Software.
//    In no event shall MStar be liable for any direct, indirect, incidental or
//    consequential damages, including without limitation, lost of profit or
//    revenues, lost or damage of data, and unauthorized system use.
//    You agree that this Section 4 shall still apply without being affected
//    even if MStar Software has been modified by MStar in accordance with your
//    request or instruction for your use, except otherwise agreed by both
//    parties in writing.
//
// 5. If requested, MStar may from time to time provide technical supports or
//    services in relation with MStar Software to you for your use of
//    MStar Software in conjunction with your or your customer`s product
//    ("Services").
//    You understand and agree that, except otherwise agreed by both parties in
//    writing, Services are provided on an "AS IS" basis and the warranty
//    disclaimer set forth in Section 4 above shall apply.
//
// 6. Nothing contained herein shall be construed as by implication, estoppels
//    or otherwise:
//    (a) conferring any license or right to use MStar name, trademark, service
//        mark, symbol or any other identification;
//    (b) obligating MStar or any of its affiliates to furnish any person,
//        including without limitation, you and your customers, any assistance
//        of any kind whatsoever, or any information; or
//    (c) conferring any license or right under any intellectual property right.
//
// 7. These terms shall be governed by and construed in accordance with the laws
//    of Taiwan, R.O.C., excluding its conflict of law rules.
//    Any and all dispute arising out hereof or related hereto shall be finally
//    settled by arbitration referred to the Chinese Arbitration Association,
//    Taipei in accordance with the ROC Arbitration Law and the Arbitration
//    Rules of the Association by three (3) arbitrators appointed in accordance
//    with the said Rules.
//    The place of arbitration shall be in Taipei, Taiwan and the language shall
//    be English.
//    The arbitration award shall be final and binding to both parties.
//
//******************************************************************************
//<MStar Software>
////////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2006-2009 MStar Semiconductor, Inc.
// All rights reserved.
//
// Unless otherwise stipulated in writing, any and all information contained
// herein regardless in any format shall remain the sole proprietary of
// MStar Semiconductor Inc. and be kept in strict confidence
// (MStar Confidential Information) by the recipient.
// Any unauthorized act including without limitation unauthorized disclosure,
// copying, use, reproduction, sale, distribution, modification, disassembling,
// reverse engineering and compiling of the contents of MStar Confidential
// Information is unlawful and strictly prohibited. MStar hereby reserves the
// rights to any and all damages, losses, costs and expenses resulting therefrom.
//
////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
///
/// file   MApp_Hdcpkey14.c
/// @brief  Scaler API layer Interface
/// @author MStar Semiconductor Inc.
///////////////////////////////////////////////////////////////////////////////////////////////////


#if (HDCP_KEY_TYPE==HDCP_KEY_IN_CODE)
//||HDCP_KEY_TYPE==HDCP_KEY_IN_DB)
//gchen @ 20171214 //HDCP KEY
MS_U8 _u8HdcpKey[HDCP_KEY_SIZE]=
{
    0x89,0x38,0xAE,0x0D,0xED,0x00,0xE6,0xD2,0xD0,0xA4,0x0A,0xF9,0xAB,0x2F,0x9A,0x2D,
    0x3A,0xB5,0xFF,0x9D,0x37,0xB3,0x63,0x23,0x6E,0xA3,0x4E,0x58,0xEF,0xD2,0x78,0x6D,
    0x3B,0xDE,0xFD,0x7E,0x4D,0xAA,0xB6,0x0C,0x59,0x4F,0x74,0x3C,0xF8,0xDA,0x65,0x6E,
    0x2F,0xB4,0xAB,0xAD,0x7F,0x89,0xA1,0x92,0x25,0x1A,0xCD,0x50,0x93,0x50,0x00,0x63,
    0x88,0x7B,0xD0,0xD8,0x4D,0x46,0x95,0xA8,0xFC,0x9B,0x0D,0xD1,0x08,0x06,0xB2,0x67,
    0xBE,0xA2,0x90,0xA7,0x84,0x2A,0x4B,0x28,0xC8,0xDD,0x8F,0xC9,0x48,0xA3,0x0A,0x7D,
    0xCA,0xDA,0xBC,0xCE,0xFA,0x9B,0x9F,0x61,0x90,0x9E,0x46,0x24,0x2B,0xA6,0x7B,0xB1,
    0x6F,0xC4,0x4C,0x63,0xAF,0x44,0xE1,0x3A,0xDD,0x0D,0xED,0xF4,0x45,0x36,0x47,0x0B,
    0x48,0x0A,0xB1,0xE6,0xE9,0xB6,0xED,0x78,0x37,0xDC,0xB0,0x07,0x72,0x83,0xDC,0x73,
    0x26,0x31,0x49,0x03,0x52,0x7C,0xE6,0xC6,0xE8,0x3C,0xD1,0x62,0xFE,0xF0,0x01,0x73,
    0x23,0x90,0x70,0xA9,0x52,0x8C,0x75,0x1C,0xE5,0x63,0x7C,0xA9,0x98,0x5F,0xD9,0x7C,
    0x62,0x25,0x6C,0x61,0x6C,0xB5,0xF9,0xDB,0xD8,0x91,0x2F,0x25,0xF6,0x3E,0x37,0xBE,
    0xE2,0x92,0x08,0x07,0x3C,0xE6,0xC9,0xE3,0xB0,0x4D,0xF6,0xAD,0x54,0x3C,0xED,0x92,
    0x5A,0x97,0x93,0xC0,0x48,0xEA,0x23,0x6C,0xDD,0x9A,0x00,0xBA,0xF1,0xB4,0xE7,0x7E,
    0x84,0x9A,0xB5,0xD5,0xF4,0xB0,0x42,0x49,0x5E,0x15,0x5A,0x43,0x2D,0xA9,0xB0,0x0A,
    0x1C,0x75,0xDE,0x2E,0x08,0xF7,0xDF,0x38,0x03,0xEB,0x6A,0x75,0xEB,0xDA,0x1C,0xA0,
    0xC9,0x2F,0x2A,0x69,0x3F,0x13,0xFB,0xA4,0x23,0x0A,0xE5,0x0A,0xA5,0xEF,0xCC,0x8D,
    0xB6,0x5E,0x6C,0xB6,0xE8,0x84,0xEF,0x03,0xDC,0xC5,0x8A,0xA3,0x4B,0xEF,0x44,0x12,
    0x7F
};
#endif



