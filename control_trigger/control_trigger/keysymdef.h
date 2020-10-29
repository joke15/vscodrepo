#pragma once

//  Copyright (C) 1999 AT&T Laboratories Cambridge. All Rights Reserved.
//
//  This file is part of the VNC system.
//
//  The VNC system is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation; either version 2 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307,
//  USA.
//
// If the source code for the VNC system is not available from the place 
// whence you received this file, check http://www.uk.research.att.com/vnc or contact
// the authors on vnc@uk.research.att.com for information on obtaining it.

#define XK_VoidSymbol       0xFFFFFF

#define XK_space            0x020

#define XK_BackSpace		0xFF08	
#define XK_Tab			    0xFF09
#define XK_Linefeed		    0xFF0A
#define XK_Clear		    0xFF0B
#define XK_Return		    0xFF0D
#define XK_Pause		    0xFF13	
#define XK_Scroll_Lock		0xFF14
#define XK_Sys_Req		    0xFF15
#define XK_Escape		    0xFF1B

#define XK_Delete		    0xFFFF

#define XK_Print            0xFF61
#define XK_dead_grave       0xFE50
#define XK_dead_acute       0xFE51
#define XK_dead_circumflex  0xFE52
#define XK_dead_tilde       0xFE53
#define	XK_dead_diaeresis				0xFE57

#define XK_Home			0xFF50
#define XK_Left			0xFF51	
#define XK_Up			0xFF52	
#define XK_Right		0xFF53
#define XK_Down			0xFF54
#define XK_Page_Up		0xFF55
#define XK_Page_Down	0xFF56
#define XK_End			0xFF57	
#define XK_Begin		0xFF58	

#define XK_Select		0xFF60	
#define XK_Print		0xFF61
#define XK_Execute		0xFF62	
#define XK_Insert		0xFF63	

#define XK_Cancel		0xFF69	
#define XK_Help			0xFF6A
#define XK_Break		0xFF6B
#define XK_Num_Lock		0xFF7F

#define XK_KP_Space		0xFF80
#define XK_KP_Tab		0xFF89
#define XK_KP_Enter		0xFF8D	

#define XK_KP_Home		0xFF95
#define XK_KP_Left		0xFF96
#define XK_KP_Up		0xFF97
#define XK_KP_Right		0xFF98
#define XK_KP_Down		0xFF99
#define XK_KP_Prior		0xFF9A
#define XK_KP_Page_Up	0xFF9A
#define XK_KP_Next		0xFF9B
#define XK_KP_Page_Down	0xFF9B
#define XK_KP_End		0xFF9C
#define XK_KP_Begin		0xFF9D
#define XK_KP_Insert	0xFF9E
#define XK_KP_Delete	0xFF9F
#define XK_KP_Equal		0xFFBD
#define XK_KP_Multiply	0xFFAA
#define XK_KP_Add		0xFFAB
#define XK_KP_Separator	0xFFAC	
#define XK_KP_Subtract	0xFFAD
#define XK_KP_Decimal	0xFFAE
#define XK_KP_Divide	0xFFAF

#define XK_KP_0			0xFFB0
#define XK_KP_1			0xFFB1
#define XK_KP_2			0xFFB2
#define XK_KP_3			0xFFB3
#define XK_KP_4			0xFFB4
#define XK_KP_5			0xFFB5
#define XK_KP_6			0xFFB6
#define XK_KP_7			0xFFB7
#define XK_KP_8			0xFFB8
#define XK_KP_9			0xFFB9

#define XK_F1			0xFFBE
#define XK_F2			0xFFBF
#define XK_F3			0xFFC0
#define XK_F4			0xFFC1
#define XK_F5			0xFFC2
#define XK_F6			0xFFC3
#define XK_F7			0xFFC4
#define XK_F8			0xFFC5
#define XK_F9			0xFFC6
#define XK_F10			0xFFC7
#define XK_F11			0xFFC8
#define XK_F12			0xFFC9
#define XK_F13			0xFFCA
#define XK_F14			0xFFCB
#define XK_F15			0xFFCC
#define XK_F16			0xFFCD
#define XK_F17			0xFFCE
#define XK_F18			0xFFCF
#define XK_F19			0xFFD0
#define XK_F20			0xFFD1
#define XK_F21			0xFFD2
#define XK_F22			0xFFD3
#define XK_F23			0xFFD4
#define XK_F24			0xFFD5


#define XK_Shift_L		0xFFE1	
#define XK_Shift_R		0xFFE2	
#define XK_Control_L	0xFFE3	
#define XK_Control_R	0xFFE4	
#define XK_Caps_Lock	0xFFE5	
#define XK_Shift_Lock	0xFFE6	
#define XK_Meta_L		0xFFE7	
#define XK_Meta_R		0xFFE8
#define XK_Alt_L		0xFFE9
#define XK_Alt_R		0xFFEA

#define XK_Super_L		0xFFEB	/* Left super */
#define XK_Super_R		0xFFEC	/* Right super */
#define XK_Menu			0xFF67


#define XK_KP_F1		0xFF91	/* PF1, KP_A, ... */
#define XK_KP_F2		0xFF92
#define XK_KP_F3		0xFF93
#define XK_KP_F4		0xFF94

#define XK_Kanji		0xFF21	/* Kanji, Kanji convert */
#define XK_Kana_Shift		0xFF2E  /* Kana Shift */


#define XK_space               0x020
#define XK_exclam              0x021
#define XK_quotedbl            0x022
#define XK_numbersign          0x023
#define XK_dollar              0x024
#define XK_percent             0x025
#define XK_ampersand           0x026
#define XK_apostrophe          0x027
#define XK_quoteright          0x027	/* deprecated */
#define XK_parenleft           0x028
#define XK_parenright          0x029
#define XK_asterisk            0x02a
#define XK_plus                0x02b
#define XK_comma               0x02c
#define XK_minus               0x02d
#define XK_period              0x02e
#define XK_slash               0x02f
#define XK_0                   0x030
#define XK_1                   0x031
#define XK_2                   0x032
#define XK_3                   0x033
#define XK_4                   0x034
#define XK_5                   0x035
#define XK_6                   0x036
#define XK_7                   0x037
#define XK_8                   0x038
#define XK_9                   0x039
#define XK_colon               0x03a
#define XK_semicolon           0x03b
#define XK_less                0x03c
#define XK_equal               0x03d
#define XK_greater             0x03e
#define XK_question            0x03f
#define XK_at                  0x040
#define XK_A                   0x041
#define XK_B                   0x042
#define XK_C                   0x043
#define XK_D                   0x044
#define XK_E                   0x045
#define XK_F                   0x046
#define XK_G                   0x047
#define XK_H                   0x048
#define XK_I                   0x049
#define XK_J                   0x04a
#define XK_K                   0x04b
#define XK_L                   0x04c
#define XK_M                   0x04d
#define XK_N                   0x04e
#define XK_O                   0x04f
#define XK_P                   0x050
#define XK_Q                   0x051
#define XK_R                   0x052
#define XK_S                   0x053
#define XK_T                   0x054
#define XK_U                   0x055
#define XK_V                   0x056
#define XK_W                   0x057
#define XK_X                   0x058
#define XK_Y                   0x059
#define XK_Z                   0x05a
#define XK_bracketleft         0x05b
#define XK_backslash           0x05c
#define XK_bracketright        0x05d
#define XK_asciicircum         0x05e
#define XK_underscore          0x05f
#define XK_grave               0x060
#define XK_quoteleft           0x060	/* deprecated */
#define XK_a                   0x061
#define XK_b                   0x062
#define XK_c                   0x063
#define XK_d                   0x064
#define XK_e                   0x065
#define XK_f                   0x066
#define XK_g                   0x067
#define XK_h                   0x068
#define XK_i                   0x069
#define XK_j                   0x06a
#define XK_k                   0x06b
#define XK_l                   0x06c
#define XK_m                   0x06d
#define XK_n                   0x06e
#define XK_o                   0x06f
#define XK_p                   0x070
#define XK_q                   0x071
#define XK_r                   0x072
#define XK_s                   0x073
#define XK_t                   0x074
#define XK_u                   0x075
#define XK_v                   0x076
#define XK_w                   0x077
#define XK_x                   0x078
#define XK_y                   0x079
#define XK_z                   0x07a
#define XK_braceleft           0x07b
#define XK_bar                 0x07c
#define XK_braceright          0x07d
#define XK_asciitilde          0x07e

#define XK_nobreakspace        0x0a0
#define XK_exclamdown          0x0a1
#define XK_cent        	       0x0a2
#define XK_sterling            0x0a3
#define XK_currency            0x0a4
#define XK_yen                 0x0a5
#define XK_brokenbar           0x0a6
#define XK_section             0x0a7
#define XK_diaeresis           0x0a8
#define XK_copyright           0x0a9
#define XK_ordfeminine         0x0aa
#define XK_guillemotleft       0x0ab	/* left angle quotation mark */
#define XK_notsign             0x0ac
#define XK_hyphen              0x0ad
#define XK_registered          0x0ae
#define XK_macron              0x0af
#define XK_degree              0x0b0
#define XK_plusminus           0x0b1
#define XK_twosuperior         0x0b2
#define XK_threesuperior       0x0b3
#define XK_acute               0x0b4
#define XK_mu                  0x0b5
#define XK_paragraph           0x0b6
#define XK_periodcentered      0x0b7
#define XK_cedilla             0x0b8
#define XK_onesuperior         0x0b9
#define XK_masculine           0x0ba
#define XK_guillemotright      0x0bb	/* right angle quotation mark */
#define XK_onequarter          0x0bc
#define XK_onehalf             0x0bd
#define XK_threequarters       0x0be
#define XK_questiondown        0x0bf
#define XK_Agrave              0x0c0
#define XK_Aacute              0x0c1
#define XK_Acircumflex         0x0c2
#define XK_Atilde              0x0c3
#define XK_Adiaeresis          0x0c4
#define XK_Aring               0x0c5
#define XK_AE                  0x0c6
#define XK_Ccedilla            0x0c7
#define XK_Egrave              0x0c8
#define XK_Eacute              0x0c9
#define XK_Ecircumflex         0x0ca
#define XK_Ediaeresis          0x0cb
#define XK_Igrave              0x0cc
#define XK_Iacute              0x0cd
#define XK_Icircumflex         0x0ce
#define XK_Idiaeresis          0x0cf
#define XK_ETH                 0x0d0
#define XK_Eth                 0x0d0	/* deprecated */
#define XK_Ntilde              0x0d1
#define XK_Ograve              0x0d2
#define XK_Oacute              0x0d3
#define XK_Ocircumflex         0x0d4
#define XK_Otilde              0x0d5
#define XK_Odiaeresis          0x0d6
#define XK_multiply            0x0d7
#define XK_Ooblique            0x0d8
#define XK_Ugrave              0x0d9
#define XK_Uacute              0x0da
#define XK_Ucircumflex         0x0db
#define XK_Udiaeresis          0x0dc
#define XK_Yacute              0x0dd
#define XK_THORN               0x0de
#define XK_Thorn               0x0de	/* deprecated */
#define XK_ssharp              0x0df
#define XK_agrave              0x0e0
#define XK_aacute              0x0e1
#define XK_acircumflex         0x0e2
#define XK_atilde              0x0e3
#define XK_adiaeresis          0x0e4
#define XK_aring               0x0e5
#define XK_ae                  0x0e6
#define XK_ccedilla            0x0e7
#define XK_egrave              0x0e8
#define XK_eacute              0x0e9
#define XK_ecircumflex         0x0ea
#define XK_ediaeresis          0x0eb
#define XK_igrave              0x0ec
#define XK_iacute              0x0ed
#define XK_icircumflex         0x0ee
#define XK_idiaeresis          0x0ef
#define XK_eth                 0x0f0
#define XK_ntilde              0x0f1
#define XK_ograve              0x0f2
#define XK_oacute              0x0f3
#define XK_ocircumflex         0x0f4
#define XK_otilde              0x0f5
#define XK_odiaeresis          0x0f6
#define XK_division            0x0f7
#define XK_oslash              0x0f8
#define XK_ugrave              0x0f9
#define XK_uacute              0x0fa
#define XK_ucircumflex         0x0fb
#define XK_udiaeresis          0x0fc
#define XK_yacute              0x0fd
#define XK_thorn               0x0fe
#define XK_ydiaeresis          0x0ff



#define	XK_ISO_Lock					0xFE01
#define	XK_ISO_Level2_Latch				0xFE02
#define	XK_ISO_Level3_Shift				0xFE03
#define	XK_ISO_Level3_Latch				0xFE04
#define	XK_ISO_Level3_Lock				0xFE05
#define	XK_ISO_Group_Shift		0xFF7E	/* Alias for mode_switch */
#define	XK_ISO_Group_Latch				0xFE06
#define	XK_ISO_Group_Lock				0xFE07
#define	XK_ISO_Next_Group				0xFE08
#define	XK_ISO_Next_Group_Lock				0xFE09
#define	XK_ISO_Prev_Group				0xFE0A
#define	XK_ISO_Prev_Group_Lock				0xFE0B
#define	XK_ISO_First_Group				0xFE0C
#define	XK_ISO_First_Group_Lock				0xFE0D
#define	XK_ISO_Last_Group				0xFE0E
#define	XK_ISO_Last_Group_Lock				0xFE0F

#define	XK_ISO_Left_Tab					0xFE20
#define	XK_ISO_Move_Line_Up				0xFE21
#define	XK_ISO_Move_Line_Down				0xFE22
#define	XK_ISO_Partial_Line_Up				0xFE23
#define	XK_ISO_Partial_Line_Down			0xFE24
#define	XK_ISO_Partial_Space_Left			0xFE25
#define	XK_ISO_Partial_Space_Right			0xFE26
#define	XK_ISO_Set_Margin_Left				0xFE27
#define	XK_ISO_Set_Margin_Right				0xFE28
#define	XK_ISO_Release_Margin_Left			0xFE29
#define	XK_ISO_Release_Margin_Right			0xFE2A
#define	XK_ISO_Release_Both_Margins			0xFE2B
#define	XK_ISO_Fast_Cursor_Left				0xFE2C
#define	XK_ISO_Fast_Cursor_Right			0xFE2D
#define	XK_ISO_Fast_Cursor_Up				0xFE2E
#define	XK_ISO_Fast_Cursor_Down				0xFE2F
#define	XK_ISO_Continuous_Underline			0xFE30
#define	XK_ISO_Discontinuous_Underline			0xFE31
#define	XK_ISO_Emphasize				0xFE32
#define	XK_ISO_Center_Object				0xFE33
#define	XK_ISO_Enter					0xFE34

#define	XK_dead_grave					0xFE50
#define	XK_dead_acute					0xFE51
#define	XK_dead_circumflex				0xFE52
#define	XK_dead_tilde					0xFE53
#define	XK_dead_macron					0xFE54
#define	XK_dead_breve					0xFE55
#define	XK_dead_abovedot				0xFE56
#define	XK_dead_diaeresis				0xFE57
#define	XK_dead_abovering				0xFE58
#define	XK_dead_doubleacute				0xFE59
#define	XK_dead_caron					0xFE5A
#define	XK_dead_cedilla					0xFE5B
#define	XK_dead_ogonek					0xFE5C
#define	XK_dead_iota					0xFE5D
#define	XK_dead_voiced_sound				0xFE5E
#define	XK_dead_semivoiced_sound			0xFE5F
#define	XK_dead_belowdot				0xFE60

#define	XK_First_Virtual_Screen				0xFED0
#define	XK_Prev_Virtual_Screen				0xFED1
#define	XK_Next_Virtual_Screen				0xFED2
#define	XK_Last_Virtual_Screen				0xFED4
#define	XK_Terminate_Server				0xFED5

#define	XK_AccessX_Enable				0xFE70
#define	XK_AccessX_Feedback_Enable			0xFE71
#define	XK_RepeatKeys_Enable				0xFE72
#define	XK_SlowKeys_Enable				0xFE73
#define	XK_BounceKeys_Enable				0xFE74
#define	XK_StickyKeys_Enable				0xFE75
#define	XK_MouseKeys_Enable				0xFE76
#define	XK_MouseKeys_Accel_Enable			0xFE77
#define	XK_Overlay1_Enable				0xFE78
#define	XK_Overlay2_Enable				0xFE79
#define	XK_AudibleBell_Enable				0xFE7A

#define	XK_Pointer_Left					0xFEE0
#define	XK_Pointer_Right				0xFEE1
#define	XK_Pointer_Up					0xFEE2
#define	XK_Pointer_Down					0xFEE3
#define	XK_Pointer_UpLeft				0xFEE4
#define	XK_Pointer_UpRight				0xFEE5
#define	XK_Pointer_DownLeft				0xFEE6
#define	XK_Pointer_DownRight				0xFEE7
#define	XK_Pointer_Button_Dflt				0xFEE8
#define	XK_Pointer_Button1				0xFEE9
#define	XK_Pointer_Button2				0xFEEA
#define	XK_Pointer_Button3				0xFEEB
#define	XK_Pointer_Button4				0xFEEC
#define	XK_Pointer_Button5				0xFEED
#define	XK_Pointer_DblClick_Dflt			0xFEEE
#define	XK_Pointer_DblClick1				0xFEEF
#define	XK_Pointer_DblClick2				0xFEF0
#define	XK_Pointer_DblClick3				0xFEF1
#define	XK_Pointer_DblClick4				0xFEF2
#define	XK_Pointer_DblClick5				0xFEF3
#define	XK_Pointer_Drag_Dflt				0xFEF4
#define	XK_Pointer_Drag1				0xFEF5
#define	XK_Pointer_Drag2				0xFEF6
#define	XK_Pointer_Drag3				0xFEF7
#define	XK_Pointer_Drag4				0xFEF8
#define	XK_Pointer_Drag5				0xFEFD

#define	XK_Pointer_EnableKeys				0xFEF9
#define	XK_Pointer_Accelerate				0xFEFA
#define	XK_Pointer_DfltBtnNext				0xFEFB
#define	XK_Pointer_DfltBtnPrev				0xFEFC



#define XK_Greek_ALPHAaccent                           0x7a1
#define XK_Greek_EPSILONaccent                         0x7a2
#define XK_Greek_ETAaccent                             0x7a3
#define XK_Greek_IOTAaccent                            0x7a4
#define XK_Greek_IOTAdiaeresis                         0x7a5
#define XK_Greek_OMICRONaccent                         0x7a7
#define XK_Greek_UPSILONaccent                         0x7a8
#define XK_Greek_UPSILONdieresis                       0x7a9
#define XK_Greek_OMEGAaccent                           0x7ab
#define XK_Greek_accentdieresis                        0x7ae
#define XK_Greek_horizbar                              0x7af
#define XK_Greek_alphaaccent                           0x7b1
#define XK_Greek_epsilonaccent                         0x7b2
#define XK_Greek_etaaccent                             0x7b3
#define XK_Greek_iotaaccent                            0x7b4
#define XK_Greek_iotadieresis                          0x7b5
#define XK_Greek_iotaaccentdieresis                    0x7b6
#define XK_Greek_omicronaccent                         0x7b7
#define XK_Greek_upsilonaccent                         0x7b8
#define XK_Greek_upsilondieresis                       0x7b9
#define XK_Greek_upsilonaccentdieresis                 0x7ba
#define XK_Greek_omegaaccent                           0x7bb
#define XK_Greek_ALPHA                                 0x7c1
#define XK_Greek_BETA                                  0x7c2
#define XK_Greek_GAMMA                                 0x7c3
#define XK_Greek_DELTA                                 0x7c4
#define XK_Greek_EPSILON                               0x7c5
#define XK_Greek_ZETA                                  0x7c6
#define XK_Greek_ETA                                   0x7c7
#define XK_Greek_THETA                                 0x7c8
#define XK_Greek_IOTA                                  0x7c9
#define XK_Greek_KAPPA                                 0x7ca
#define XK_Greek_LAMDA                                 0x7cb
#define XK_Greek_LAMBDA                                0x7cb
#define XK_Greek_MU                                    0x7cc
#define XK_Greek_NU                                    0x7cd
#define XK_Greek_XI                                    0x7ce
#define XK_Greek_OMICRON                               0x7cf
#define XK_Greek_PI                                    0x7d0
#define XK_Greek_RHO                                   0x7d1
#define XK_Greek_SIGMA                                 0x7d2
#define XK_Greek_TAU                                   0x7d4
#define XK_Greek_UPSILON                               0x7d5
#define XK_Greek_PHI                                   0x7d6
#define XK_Greek_CHI                                   0x7d7
#define XK_Greek_PSI                                   0x7d8
#define XK_Greek_OMEGA                                 0x7d9
#define XK_Greek_alpha                                 0x7e1
#define XK_Greek_beta                                  0x7e2
#define XK_Greek_gamma                                 0x7e3
#define XK_Greek_delta                                 0x7e4
#define XK_Greek_epsilon                               0x7e5
#define XK_Greek_zeta                                  0x7e6
#define XK_Greek_eta                                   0x7e7
#define XK_Greek_theta                                 0x7e8
#define XK_Greek_iota                                  0x7e9
#define XK_Greek_kappa                                 0x7ea
#define XK_Greek_lamda                                 0x7eb
#define XK_Greek_lambda                                0x7eb
#define XK_Greek_mu                                    0x7ec
#define XK_Greek_nu                                    0x7ed
#define XK_Greek_xi                                    0x7ee
#define XK_Greek_omicron                               0x7ef
#define XK_Greek_pi                                    0x7f0
#define XK_Greek_rho                                   0x7f1
#define XK_Greek_sigma                                 0x7f2
#define XK_Greek_finalsmallsigma                       0x7f3
#define XK_Greek_tau                                   0x7f4
#define XK_Greek_upsilon                               0x7f5
#define XK_Greek_phi                                   0x7f6
#define XK_Greek_chi                                   0x7f7
#define XK_Greek_psi                                   0x7f8
#define XK_Greek_omega                                 0x7f9
#define XK_Greek_switch         0xFF7E  /* Alias for mode_switch */


#define XK_leftradical                                 0x8a1
#define XK_topleftradical                              0x8a2
#define XK_horizconnector                              0x8a3
#define XK_topintegral                                 0x8a4
#define XK_botintegral                                 0x8a5
#define XK_vertconnector                               0x8a6
#define XK_topleftsqbracket                            0x8a7
#define XK_botleftsqbracket                            0x8a8
#define XK_toprightsqbracket                           0x8a9
#define XK_botrightsqbracket                           0x8aa
#define XK_topleftparens                               0x8ab
#define XK_botleftparens                               0x8ac
#define XK_toprightparens                              0x8ad
#define XK_botrightparens                              0x8ae
#define XK_leftmiddlecurlybrace                        0x8af
#define XK_rightmiddlecurlybrace                       0x8b0
#define XK_topleftsummation                            0x8b1
#define XK_botleftsummation                            0x8b2
#define XK_topvertsummationconnector                   0x8b3
#define XK_botvertsummationconnector                   0x8b4
#define XK_toprightsummation                           0x8b5
#define XK_botrightsummation                           0x8b6
#define XK_rightmiddlesummation                        0x8b7
#define XK_lessthanequal                               0x8bc
#define XK_notequal                                    0x8bd
#define XK_greaterthanequal                            0x8be
#define XK_integral                                    0x8bf
#define XK_therefore                                   0x8c0
#define XK_variation                                   0x8c1
#define XK_infinity                                    0x8c2
#define XK_nabla                                       0x8c5
#define XK_approximate                                 0x8c8
#define XK_similarequal                                0x8c9
#define XK_ifonlyif                                    0x8cd
#define XK_implies                                     0x8ce
#define XK_identical                                   0x8cf
#define XK_radical                                     0x8d6
#define XK_includedin                                  0x8da
#define XK_includes                                    0x8db
#define XK_intersection                                0x8dc
#define XK_union                                       0x8dd
#define XK_logicaland                                  0x8de
#define XK_logicalor                                   0x8df
#define XK_partialderivative                           0x8ef
#define XK_function                                    0x8f6
#define XK_leftarrow                                   0x8fb
#define XK_uparrow                                     0x8fc
#define XK_rightarrow                                  0x8fd
#define XK_downarrow                                   0x8fe
