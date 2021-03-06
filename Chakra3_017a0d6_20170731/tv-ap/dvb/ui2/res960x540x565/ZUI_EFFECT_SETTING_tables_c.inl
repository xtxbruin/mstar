////////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2006-2010 MStar Semiconductor, Inc.
// All rights reserved.
//
// Unless otherwise stipulated in writing, any and all information contained
// herein regardless in any format shall remain the sole proprietary of
// MStar Semiconductor Inc. and be kept in strict confidence
// (''MStar Confidential Information'') by the recipient.
// Any unauthorized act including without limitation unauthorized disclosure,
// copying, use, reproduction, sale, distribution, modification, disassembling,
// reverse engineering and compiling of the contents of MStar Confidential
// Information is unlawful and strictly prohibited. MStar hereby reserves the
// rights to any and all damages, losses, costs and expenses resulting therefrom.
//
////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////
// This file is automatically generated by SkinTool [Version:0.2.3][Build:Dec 18 2014 17:25:00]
/////////////////////////////////////////////////////////////////////////////


/// @Keymap_Table_Begin

static KEYEVENT _ZUI_TBLSEG _EFFECT_MAIN_PAGE_KEY[] =
{
{ VK_LEFT, EN_EXE_DEC_MAIN_PAGE},
{ VK_RIGHT, EN_EXE_INC_MAIN_PAGE},
{ VK_NULL, 0 },
};

static KEYEVENT _ZUI_TBLSEG _EFFECT_MAIN_MENU_OPEN_KEY[] =
{
{ VK_LEFT, EN_EXE_DEC_MAIN_MENU_OPEN},
{ VK_RIGHT, EN_EXE_INC_MAIN_MENU_OPEN},
{ VK_NULL, 0 },
};

static KEYEVENT _ZUI_TBLSEG _EFFECT_MAIN_MENU_CLOSE_KEY[] =
{
{ VK_LEFT, EN_EXE_DEC_MAIN_MENU_CLOSE},
{ VK_RIGHT, EN_EXE_INC_MAIN_MENU_CLOSE},
{ VK_NULL, 0 },
};

static KEYEVENT _ZUI_TBLSEG _EFFECT_MAIN_MENU_ITEM_KEY[] =
{
{ VK_LEFT, EN_EXE_DEC_MAIN_MENU_ITEM},
{ VK_RIGHT, EN_EXE_INC_MAIN_MENU_ITEM},
{ VK_NULL, 0 },
};

static KEYEVENT _ZUI_TBLSEG _EFFECT_POPUP_DIALOG_KEY[] =
{
{ VK_LEFT, EN_EXE_DEC_POPUP_DIALOG},
{ VK_RIGHT, EN_EXE_INC_POPUP_DIALOG},
{ VK_NULL, 0 },
};

static KEYEVENT _ZUI_TBLSEG _EFFECT_ASSISTANT_MENU_KEY[] =
{
{ VK_LEFT, EN_EXE_DEC_ASSISTANT_MENU},
{ VK_RIGHT, EN_EXE_INC_ASSISTANT_MENU},
{ VK_NULL, 0 },
};



/// @Keymap_Table_End

/////////////////////////////////////////////////////

// Navigation Table

/////////////////////////////////////////////////////

static HWND _MP_TBLSEG _EFFECT_SETTING_MAIN_Navigation[] = {HWND_EFFECT_MAIN_PAGE, HWND_EFFECT_MAIN_PAGE, HWND_EFFECT_MAIN_PAGE, HWND_EFFECT_MAIN_PAGE};

static HWND _MP_TBLSEG _EFFECT_MAIN_PAGE_Navigation[] = {HWND_EFFECT_INPUT_SOURCE, HWND_EFFECT_MAIN_MENU_OPEN, HWND_EFFECT_SETTING_MAIN, HWND_EFFECT_SETTING_MAIN};

static HWND _MP_TBLSEG _EFFECT_MAIN_MENU_OPEN_Navigation[] = {HWND_EFFECT_SETTING_MAIN, HWND_EFFECT_MAIN_MENU_CLOSE, HWND_EFFECT_MAIN_MENU_OPEN, HWND_EFFECT_MAIN_MENU_OPEN};

static HWND _MP_TBLSEG _EFFECT_MAIN_MENU_CLOSE_Navigation[] = {HWND_EFFECT_MAIN_MENU_OPEN, HWND_EFFECT_MAIN_MENU_ITEM, HWND_EFFECT_MAIN_MENU_CLOSE, HWND_EFFECT_MAIN_MENU_CLOSE};

static HWND _MP_TBLSEG _EFFECT_MAIN_MENU_ITEM_Navigation[] = {HWND_EFFECT_MAIN_MENU_CLOSE, HWND_EFFECT_POPUP_DIALOG, HWND_EFFECT_MAIN_MENU_ITEM, HWND_EFFECT_MAIN_MENU_ITEM};

static HWND _MP_TBLSEG _EFFECT_POPUP_DIALOG_Navigation[] = {HWND_EFFECT_MAIN_MENU_ITEM, HWND_EFFECT_INPUT_SOURCE, HWND_EFFECT_POPUP_DIALOG, HWND_EFFECT_POPUP_DIALOG};

static HWND _MP_TBLSEG _EFFECT_INPUT_SOURCE_Navigation[] = {HWND_EFFECT_POPUP_DIALOG, HWND_EFFECT_MAIN_PAGE, HWND_EFFECT_INPUT_SOURCE, HWND_EFFECT_INPUT_SOURCE};

//////////////////////////////////////////////////////
// Window List

WINDOWDATA _MP_TBLSEG _GUI_WindowList_Zui_Effect_Setting[] =
{
    // HWND_MAINFRAME
    {
        EN_ZUI_MAINFRAMEWINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_EFFECT_BACKGROUND
    {
        EN_ZUI_AUTOCLOSE_WINPROC, (void*)EFFECT_SETTING_TIME_OUT_MS, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_EFFECT_BG_L
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_EFFECT_BG_C
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_EFFECT_BG_R
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_EFFECT_BOTTOM_HALF_BAR
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_EFFECT_BOTTOM_HALF_EXIT_BG
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_EFFECT_BOTTOM_HALF_EXIT_TXT
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_EFFECT_BOTTOM_HALF_OK_BG
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_EFFECT_BOTTOM_HALF_OK_TXT
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_EFFECT_BOTTOM_HALF_UP_ARROW
    {
        EN_ZUI_BUTTONANICLICK_WINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_EFFECT_BOTTOM_HALF_LEFT_ARROW
    {
        EN_ZUI_BUTTONANICLICK_WINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_EFFECT_BOTTOM_HALF_RIGHT_ARROW
    {
        EN_ZUI_BUTTONANICLICK_WINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_EFFECT_BOTTOM_HALF_DOWN_ARROW
    {
        EN_ZUI_BUTTONANICLICK_WINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_EFFECT_TOP_HALF_BG
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE,
        NULL,
        NULL,
    },

    // HWND_EFFECT_TOP_ICON_OPTION
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_EFFECT_RIGHT_TOP_ICON
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_EFFECT_SETTING_MAIN
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE,
        _EFFECT_SETTING_MAIN_Navigation,
        NULL,
    },

    // HWND_EFFECT_MAIN_TITLE
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE,
        NULL,
        NULL,
    },

    // HWND_EFFECT_MAIN_PAGE_LIST
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE|WS_SRCALPHAREPLACEDSTALPHA,
        NULL,
        NULL,
    },

    // HWND_EFFECT_MAIN_PAGE
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE,
        _EFFECT_MAIN_PAGE_Navigation,
        _EFFECT_MAIN_PAGE_KEY,
    },

    // HWND_EFFECT_MAIN_PAGE_BG
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE,
        NULL,
        NULL,
    },

    // HWND_EFFECT_MAIN_PAGE_TEXT
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE,
        NULL,
        NULL,
    },

    // HWND_EFFECT_MAIN_PAGE_OPTION
    {
        EN_ZUI_DYNAMICTEXT_WINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE,
        NULL,
        NULL,
    },

    // HWND_EFFECT_MAIN_MENU_OPEN
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE,
        _EFFECT_MAIN_MENU_OPEN_Navigation,
        _EFFECT_MAIN_MENU_OPEN_KEY,
    },

    // HWND_EFFECT_MAIN_MENU_OPEN_BG
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE,
        NULL,
        NULL,
    },

    // HWND_EFFECT_MAIN_MENU_OPEN_TEXT
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE,
        NULL,
        NULL,
    },

    // HWND_EFFECT_MAIN_MENU_OPEN_OPTION
    {
        EN_ZUI_DYNAMICTEXT_WINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE,
        NULL,
        NULL,
    },

    // HWND_EFFECT_MAIN_MENU_CLOSE
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE,
        _EFFECT_MAIN_MENU_CLOSE_Navigation,
        _EFFECT_MAIN_MENU_CLOSE_KEY,
    },

    // HWND_EFFECT_MAIN_MENU_CLOSE_BG
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE,
        NULL,
        NULL,
    },

    // HWND_EFFECT_MAIN_MENU_CLOSE_TEXT
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE,
        NULL,
        NULL,
    },

    // HWND_EFFECT_MAIN_MENU_CLOSE_OPTION
    {
        EN_ZUI_DYNAMICTEXT_WINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE,
        NULL,
        NULL,
    },

    // HWND_EFFECT_MAIN_MENU_ITEM
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE,
        _EFFECT_MAIN_MENU_ITEM_Navigation,
        _EFFECT_MAIN_MENU_ITEM_KEY,
    },

    // HWND_EFFECT_MAIN_MENU_ITEM_BG
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE,
        NULL,
        NULL,
    },

    // HWND_EFFECT_MAIN_MENU_ITEM_TEXT
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE,
        NULL,
        NULL,
    },

    // HWND_EFFECT_MAIN_MENU_ITEM_OPTION
    {
        EN_ZUI_DYNAMICTEXT_WINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE,
        NULL,
        NULL,
    },

    // HWND_EFFECT_POPUP_DIALOG
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE,
        _EFFECT_POPUP_DIALOG_Navigation,
        _EFFECT_POPUP_DIALOG_KEY,
    },

    // HWND_EFFECT_POPUP_DIALOG_BG
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE,
        NULL,
        NULL,
    },

    // HWND_EFFECT_POPUP_DIALOG_TEXT
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE,
        NULL,
        NULL,
    },

    // HWND_EFFECT_POPUP_DIALOG_OPTION
    {
        EN_ZUI_DYNAMICTEXT_WINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE,
        NULL,
        NULL,
    },

    // HWND_EFFECT_INPUT_SOURCE
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE,
        _EFFECT_INPUT_SOURCE_Navigation,
        _EFFECT_ASSISTANT_MENU_KEY,
    },

    // HWND_EFFECT_INPUT_SOURCE_BG
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE,
        NULL,
        NULL,
    },

    // HWND_EFFECT_INPUT_SOURCE_TXT
    {
        EN_ZUI_DEFAULTWINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE,
        NULL,
        NULL,
    },

    // HWND_EFFECT_INPUT_SOURCE_OPTION
    {
        EN_ZUI_DYNAMICTEXT_WINPROC, NULL, WS_VISIBLE|WS_FOCUSABLE,
        NULL,
        NULL,
    },

};
