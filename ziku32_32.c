/*
**********************************************************************
*酿酒排水进行中冲洗设置加
**********************************************************************
*/

#include "GUI.H"


/* char: 冲   code:0xB3E5 */
unsigned char acFontHZ_B3E5_3232[128] = {
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,________,XXX_____,________,
  ________,________,_XX_____,________,
  ________,________,_XX_____,________,
  ________,________,_XX_____,________,
  ________,________,_XX_____,________,
  ____XX__,________,_XX_____,________,
  _____XXX,________,_XX____X,X_______,
  ______XX,X__XX___,XXXXXXXX,X_______,
  _______X,X__XXXXX,XXX____X,X_______,
  _______X,X__XX___,_XX___XX,X_______,
  ________,___XX___,_XX___XX,________,
  ________,_XXXX___,_XX___XX,________,
  ________,_XXXX___,_XX___XX,________,
  ________,XX_XX___,_XX___XX,________,
  ________,XX_XX___,_XXXXXXX,X_______,
  _______X,X__XXXXX,XXX_____,________,
  _______X,X__XXX__,_XX_____,________,
  ___XX_XX,____XX__,_XX_____,________,
  ____XXXX,________,_XX_____,________,
  _____XX_,________,_XX_____,________,
  _____XX_,________,_XX_____,________,
  ________,________,_XX_____,________,
  ________,________,_XX_____,________,
  ________,________,_XX_____,________,
  ________,________,_XX_____,________,
  ________,________,XXX_____,________,
  ________,________,_XX_____,________,
  ________,________,________,________,
  ________,________,________,________
};

/* char: 加   code:0xBCD3 */
unsigned char acFontHZ_BCD3_3232[128] = {
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,_XX_____,________,________,
  ________,_XXX____,________,________,
  ________,__XX____,________,________,
  ________,__XX____,________,________,
  ________,__XX____,________,________,
  ________,__XX____,________,________,
  ________,_XXX____,________,________,
  ________,_XXX__XX,________,_XX_____,
  ________,_XXXXXXX,X_XX___X,XXXX____,
  ___XXXXX,XXX___XX,__XXXXXX,XXX_____,
  ________,_XX___XX,__XX____,_XX_____,
  ________,_XX___XX,__XX____,_XX_____,
  ________,XXX___XX,__XX____,_XX_____,
  ________,XX____XX,__XX____,_XX_____,
  ________,XX____XX,__XX____,_XX_____,
  ________,XX___XXX,__XX____,XX______,
  _______X,X____XX_,__XX____,XX______,
  _______X,X____XX_,__XX____,XX______,
  _______X,X____XX_,__XX___X,XXX_____,
  ______XX,_____XX_,__XXXXXX,XX______,
  ______XX,_____XX_,__XX____,________,
  _____XX_,_XX_XXX_,__XX____,________,
  _____XX_,__XXXX__,__XX____,________,
  ____XX__,__XXXX__,________,________,
  ___XX___,___XXX__,________,________,
  __XX____,________,________,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________
};

/* char: 进   code:0xBDF8 */
unsigned char acFontHZ_BDF8_3232[128] = {
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,_____XX_,__XX____,________,
  ________,______XX,___XXX__,________,
  ________,______XX,___XX___,________,
  _____XX_,______XX,___XX___,________,
  ______XX,______XX,___XX___,________,
  ______XX,X_____XX,___XX___,________,
  _______X,XX____XX,___XX_XX,X_______,
  ________,______XX,XXXXXXXX,________,
  ________,__XXXXXX,___XX___,________,
  ________,______XX,___XX___,________,
  ________,______XX,___XX___,________,
  ________,______XX,___XX___,________,
  _____XXX,XXX___XX,___XXXXX,XXX_____,
  ___XXX__,XXXXXXXX,XXXXX___,________,
  ________,XXXX_XX_,___XX___,________,
  _______X,X____XX_,___XX___,________,
  _______X,X____XX_,___XX___,________,
  _______X,X____XX_,___XX___,________,
  ________,XX__XX__,___XX___,________,
  ________,XX__XX__,___XX___,________,
  ________,XX_XX___,___XX___,________,
  _______X,X_XX____,___XX___,________,
  ___XXXXX,XX______,___XX___,________,
  ________,_XXXXXX_,________,________,
  ________,______XX,XXX_____,________,
  ________,________,__XXXXXX,XXXX____,
  ________,________,_____XXX,X_______,
  ________,________,________,________,
  ________,________,________,________
};

/* char: 酒   code:0xBEC6 */
unsigned char acFontHZ_BEC6_3232[128] = {
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,________,_____XXX,XX______,
  _____XX_,____XXXX,XXXXXXX_,________,
  ______XX,X__XXX_X,X_XX____,________,
  _______X,XX_____X,X_XX____,________,
  ________,_______X,X_XX___X,X_______,
  ________,_______X,X_XX__XX,XX______,
  ________,___XX_XX,XXXXXXXX,X_______,
  ________,___XXXXX,X_XX___X,X_______,
  ____XX__,___XX__X,X_XX___X,X_______,
  _____XXX,_XXXX__X,X_XX___X,X_______,
  ______XX,_XXXX_XX,__XX___X,X_______,
  ________,XX_XX_XX,__XX___X,X_______,
  ________,XX_XX_XX,__XX___X,X_______,
  ________,XX_XXXX_,__XXXXXX,X_______,
  ________,XX_XXXX_,_______X,X_______,
  _______X,X__XXX__,_______X,X_______,
  _______X,X__XX___,___XXX_X,X_______,
  _______X,X__XX_XX,XXXX___X,X_______,
  ______XX,___XX___,_______X,X_______,
  ______XX,___XX___,_______X,X_______,
  ____XXXX,___XX___,_XXXXXXX,X_______,
  _____XXX,___XXXXX,XXXX__XX,X_______,
  _____XX_,___XX___,_______X,X_______,
  ________,___XX___,________,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________
};

/* char: 酿   code:0xC4F0 */
unsigned char acFontHZ_C4F0_3232[128] = {
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,________,__XX____,________,
  ________,________,__XXX___,________,
  ________,________,___XXX__,________,
  ________,_____XX_,___XX___,________,
  _____XXX,XXXXXX__,XX____XX,X_______,
  ____XX__,XXXX____,XXXXXXXX,X_______,
  ________,XXXX____,XX_____X,X_______,
  ____XX__,XXXX_XX_,XX____XX,________,
  _____XX_,XXXXXXXX,XX__XXXX,________,
  _____XXX,XXXX_XX_,XXXXXXXX,________,
  _____XX_,XXXX_XX_,XX____XX,________,
  _____XX_,XXXX_XX_,XX____XX,________,
  _____XX_,XXXX_XX_,XX____XX,________,
  _____XXX,X_XX_XX_,XXXXXXX_,________,
  _____XXX,X_XX_XX_,XXXX____,________,
  _____XXX,X_XXXXX_,XXXXX__X,XX______,
  _____XXX,_____XX_,XX_XX_XX,X_______,
  _____XX_,_____XX_,XX_XXXX_,________,
  _____XX_,__XX_XX_,XX__XX__,________,
  _____XXX,XXX__XX_,XX__XXX_,________,
  _____XX_,_____XX_,XX___XXX,________,
  _____XX_,_____XX_,XX____XX,________,
  _____XXX,XXXXXXX_,XX_XX_XX,X_______,
  _____XX_,____XXX_,XXXX___X,XXX_____,
  _____XX_,_______X,XXX____X,XXXXX___,
  ________,________,XX______,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________
};

/* char: 排   code:0xC5C5 */
unsigned char acFontHZ_C5C5_3232[128] = {
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________,
  _______X,X_______,________,________,
  ________,XX______,XX__XX__,________,
  ________,XX______,XX__XX__,________,
  ________,XX______,XX__XX__,________,
  ________,XX______,XX__XX__,________,
  ________,XX______,XX__XX__,________,
  ________,XX______,XX__XX__,________,
  ________,XXXXX___,XX__XXXX,XXX_____,
  ___XXXXX,XX___XXX,XX__XX__,________,
  ________,XX__XX__,XX__XX__,________,
  ________,XX______,XX__XX__,________,
  ________,XX_XX___,XX__XXXX,XXX_____,
  ________,XXXX____,XX__XXX_,________,
  _______X,XX_XXXXX,XX__XX__,________,
  ______XX,XX______,XX__XX__,________,
  ____XXX_,XX______,XX__XX__,________,
  __XXXX__,XX______,XX__XX__,XXXX____,
  ________,XX_____X,XX__XXXX,X_______,
  ________,XX_XXXXX,XX__XX__,________,
  ________,XX______,XX__XX__,________,
  ________,XX______,XX__XX__,________,
  ________,XX______,XX__XX__,________,
  ____XX__,XX______,XX__XX__,________,
  _____XXX,XX______,XX__XX__,________,
  _______X,XX______,XX__XX__,________,
  ________,XX______,XX__XX__,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________
};

/* char: 设   code:0xC9E8 */
unsigned char acFontHZ_C9E8_3232[128] = {
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________,
  _____XX_,______XX,___XX___,________,
  ______XX,X_____XX,XXXXXX__,________,
  _______X,XX____XX,X__XX___,________,
  ________,XX____XX,___XX___,________,
  ________,XX____XX,___XX___,________,
  ________,______XX,___XX___,________,
  ________,_____XX_,___XX___,________,
  _______X,X____XX_,___XX___,XX______,
  _____XXX,XX___XX_,____XXXX,XXX_____,
  __XXXX_X,X___XX__,________,________,
  _______X,X__XX___,____XX__,________,
  _______X,X_XX____,XXXXXXX_,________,
  _______X,X____XXX,X__XXX__,________,
  _______X,X_______,___XX___,________,
  _______X,X____XX_,__XXX___,________,
  _______X,X_____XX,__XX____,________,
  _______X,X__XX__X,XXX_____,________,
  _______X,X_XX____,XXX_____,________,
  _______X,XXX____X,XXXX____,________,
  _______X,XX____XX,X_XXX___,________,
  ______XX,X____XXX,___XXX__,________,
  ________,____XXX_,____XXXX,X_______,
  ________,___XX___,_____XXX,XXXX____,
  ________,_XXX____,________,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________
};

/* char: 水   code:0xCBAE */
unsigned char acFontHZ_CBAE_3232[128] = {
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,_____XX_,________,________,
  ________,______XX,________,________,
  ________,______XX,________,________,
  ________,______XX,________,________,
  ________,______XX,________,________,
  ________,______XX,________,________,
  ________,______XX,______XX,________,
  ________,______XX,______XX,________,
  ________,______XX,X____XXX,________,
  ________,____XXXX,X___XXX_,________,
  ________,XXXXXXXX,XX_XX___,________,
  ____XXXX,X__XXXXX,XXXX____,________,
  ________,___XX_XX,_XX_____,________,
  ________,__XXX_XX,_XXX____,________,
  ________,__XX__XX,__XX____,________,
  ________,_XX___XX,__XXX___,________,
  ________,_XX___XX,___XX___,________,
  ________,XX____XX,____XX__,________,
  _______X,X_____XX,____XXX_,________,
  _______X,X_____XX,_____XXX,________,
  ______XX,______XX,_____XXX,XX______,
  _____XX_,______XX,______XX,XXXX____,
  ____XX__,__XX__XX,________,________,
  __XXX___,___XXXXX,________,________,
  ________,____XXXX,________,________,
  ________,_____XXX,________,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________
};

/* char: 洗   code:0xCFB4 */
unsigned char acFontHZ_CFB4_3232[128] = {
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,________,_XX_____,________,
  ________,________,_XXX____,________,
  ________,_____XX_,_XX_____,________,
  ______XX,_____XXX,_XX_____,________,
  _______X,XX___XXX,_XX_____,________,
  ________,XXX__XX_,_XX_____,________,
  ________,_XX__XX_,_XXXXXXX,________,
  ________,____XXXX,XXX_____,________,
  ________,____XX__,_XX_____,________,
  ____XX__,____XX__,_XX_____,________,
  _____XXX,___XX___,_XX_____,________,
  ______XX,_XX_____,_XX____X,XXX_____,
  ________,_XX___XX,XXXXXXXX,________,
  ________,XXXXXXXX,X__XX___,________,
  ________,XX_____X,X__XX___,________,
  ________,XX____XX,X__XX___,________,
  _______X,X_____XX,___XX___,________,
  _______X,X_____XX,___XX___,________,
  _______X,X_____XX,___XX___,________,
  _______X,X____XX_,___XX___,_XX_____,
  ______XX,_____XX_,___XX___,_XX_____,
  ____XXXX,____XX__,___XX___,_XX_____,
  _____XXX,___XX___,___XX___,_XX_____,
  ________,__XX____,___XX___,_XXX____,
  ________,_XX_____,____XXXX,XXXX____,
  ________,XX______,________,________,
  _______X,X_______,________,________,
  ________,________,________,________,
  ________,________,________,________
};

/* char: 行   code:0xD0D0 */
unsigned char acFontHZ_D0D0_3232[128] = {
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,__XX____,________,________,
  ________,__XX____,________,________,
  ________,__XXX___,________,________,
  ________,_XX_____,___XXXXX,X_______,
  ________,XX_____X,XXXX____,________,
  _______X,XX______,________,________,
  ______XX,X_______,________,________,
  _____XX_,________,________,________,
  ____XX__,__XX____,________,________,
  ________,_XXX____,______XX,XXX_____,
  ________,XXX____X,XXXXXXXX,________,
  ________,XX__XXXX,____XX__,________,
  _______X,XX______,____XX__,________,
  ______XX,XX______,____XX__,________,
  _____XX_,XX______,____XX__,________,
  ___XXX__,XX______,____XX__,________,
  __XX____,XX______,____XX__,________,
  ________,XX______,____XX__,________,
  ________,XX______,____XX__,________,
  ________,XX______,____XX__,________,
  ________,XX______,____XX__,________,
  ________,XX______,____XX__,________,
  ________,XX______,XX__XX__,________,
  ________,XX______,_XX_XX__,________,
  _______X,XX______,__XXXX__,________,
  ________,XX______,___XXX__,________,
  ________,XX______,____XX__,________,
  ________,________,________,________,
  ________,________,________,________
};

/* char: 置   code:0xD6C3 */
unsigned char acFontHZ_D6C3_3232[128] = {
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,________,______XX,________,
  ______XX,______XX,XXXXXXXX,X_______,
  ______XX,XXXXXXXX,XXXX__XX,________,
  ______XX,___XX___,XX____XX,________,
  ______XX,___XX___,XX___XXX,________,
  ______XX,___XX___,XXXXXXXX,________,
  ______XX,XXXXXXXX,XXXXXX__,________,
  ______XX,______XX,X_______,________,
  ______XX,______XX,___XXXXX,X_______,
  ________,XXXXXXXX,XXXXX___,________,
  ____XXXX,X_____XX,___XX___,________,
  ________,XX___XXX,XXXXXX__,________,
  ________,XXXXXX__,___XXX__,________,
  ________,XX____XX,XX_XX___,________,
  ________,XXXXXXX_,___XX___,________,
  ________,XX______,___XX___,________,
  ________,XX____XX,XXXXX___,________,
  ________,XXXXXXX_,___XX___,________,
  ________,XX______,___XX___,________,
  ________,XX_____X,XXXXX___,________,
  ________,XXXXXXXX,___XX___,________,
  ________,XX______,___XX___,XXX_____,
  _______X,XX__XXXX,XXXXXXXX,XXX_____,
  ___XXXXX,_XXXX___,________,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________
};

/* char: 中   code:0xD6D0 */
unsigned char acFontHZ_D6D0_3232[128] = {
  ________,________,________,________,
  ________,________,________,________,
  ________,_____XX_,________,________,
  ________,_____XXX,________,________,
  ________,______XX,________,________,
  ________,______XX,________,________,
  ________,______XX,________,________,
  ________,______XX,________,________,
  _____XX_,______XX,______XX,________,
  ______XX,______XX,_XXXXXXX,X_______,
  ______XX,XXXXXXXX,XXX___XX,________,
  ______XX,X_____XX,______XX,________,
  ______XX,______XX,______XX,________,
  ______XX,______XX,______XX,________,
  ______XX,______XX,_____XXX,________,
  ______XX,______XX,_____XX_,________,
  ______XX,______XX,_____XXX,________,
  ______XX,____XXXX,XXXXXXXX,________,
  ______XX,XXXXXXXX,________,________,
  ______XX,______XX,________,________,
  ________,______XX,________,________,
  ________,______XX,________,________,
  ________,______XX,________,________,
  ________,______XX,________,________,
  ________,______XX,________,________,
  ________,______XX,________,________,
  ________,______XX,________,________,
  ________,_____XXX,________,________,
  ________,______XX,________,________,
  ________,______XX,________,________,
  ________,________,________,________,
  ________,________,________,________
};

GUI_CHARINFO GUI_FontHZ_32x32_CharInfo[12] = {
  { 32, 32, 4, (unsigned char *)&acFontHZ_B3E5_3232 }, /*0: 冲*/
  { 32, 32, 4, (unsigned char *)&acFontHZ_BCD3_3232 }, /*1: 加*/
  { 32, 32, 4, (unsigned char *)&acFontHZ_BDF8_3232 }, /*2: 进*/
  { 32, 32, 4, (unsigned char *)&acFontHZ_BEC6_3232 }, /*3: 酒*/
  { 32, 32, 4, (unsigned char *)&acFontHZ_C4F0_3232 }, /*4: 酿*/
  { 32, 32, 4, (unsigned char *)&acFontHZ_C5C5_3232 }, /*5: 排*/
  { 32, 32, 4, (unsigned char *)&acFontHZ_C9E8_3232 }, /*6: 设*/
  { 32, 32, 4, (unsigned char *)&acFontHZ_CBAE_3232 }, /*7: 水*/
  { 32, 32, 4, (unsigned char *)&acFontHZ_CFB4_3232 }, /*8: 洗*/
  { 32, 32, 4, (unsigned char *)&acFontHZ_D0D0_3232 }, /*9: 行*/
  { 32, 32, 4, (unsigned char *)&acFontHZ_D6C3_3232 }, /*10: 置*/
  { 32, 32, 4, (unsigned char *)&acFontHZ_D6D0_3232 }, /*11: 中*/
};

GUI_FONT_PROP GUI_FontHZ_32x32_Prop12 = {
  0xD6D0, /*start :中*/
  0xD6D0, /*end   :中,  len=1*/
  &GUI_FontHZ_32x32_CharInfo[ 11 ],
  (void*)0
};


GUI_FONT_PROP GUI_FontHZ_32x32_Prop11 = {
  0xD6C3, /*start :置*/
  0xD6C3, /*end   :置,  len=1*/
  &GUI_FontHZ_32x32_CharInfo[ 10 ],
  &GUI_FontHZ_32x32_Prop12
};


GUI_FONT_PROP GUI_FontHZ_32x32_Prop10 = {
  0xD0D0, /*start :行*/
  0xD0D0, /*end   :行,  len=1*/
  &GUI_FontHZ_32x32_CharInfo[ 9 ],
  &GUI_FontHZ_32x32_Prop11
};


GUI_FONT_PROP GUI_FontHZ_32x32_Prop9 = {
  0xCFB4, /*start :洗*/
  0xCFB4, /*end   :洗,  len=1*/
  &GUI_FontHZ_32x32_CharInfo[ 8 ],
  &GUI_FontHZ_32x32_Prop10
};


GUI_FONT_PROP GUI_FontHZ_32x32_Prop8 = {
  0xCBAE, /*start :水*/
  0xCBAE, /*end   :水,  len=1*/
  &GUI_FontHZ_32x32_CharInfo[ 7 ],
  &GUI_FontHZ_32x32_Prop9
};


GUI_FONT_PROP GUI_FontHZ_32x32_Prop7 = {
  0xC9E8, /*start :设*/
  0xC9E8, /*end   :设,  len=1*/
  &GUI_FontHZ_32x32_CharInfo[ 6 ],
  &GUI_FontHZ_32x32_Prop8
};


GUI_FONT_PROP GUI_FontHZ_32x32_Prop6 = {
  0xC5C5, /*start :排*/
  0xC5C5, /*end   :排,  len=1*/
  &GUI_FontHZ_32x32_CharInfo[ 5 ],
  &GUI_FontHZ_32x32_Prop7
};


GUI_FONT_PROP GUI_FontHZ_32x32_Prop5 = {
  0xC4F0, /*start :酿*/
  0xC4F0, /*end   :酿,  len=1*/
  &GUI_FontHZ_32x32_CharInfo[ 4 ],
  &GUI_FontHZ_32x32_Prop6
};


GUI_FONT_PROP GUI_FontHZ_32x32_Prop4 = {
  0xBEC6, /*start :酒*/
  0xBEC6, /*end   :酒,  len=1*/
  &GUI_FontHZ_32x32_CharInfo[ 3 ],
  &GUI_FontHZ_32x32_Prop5
};


GUI_FONT_PROP GUI_FontHZ_32x32_Prop3 = {
  0xBDF8, /*start :进*/
  0xBDF8, /*end   :进,  len=1*/
  &GUI_FontHZ_32x32_CharInfo[ 2 ],
  &GUI_FontHZ_32x32_Prop4
};


GUI_FONT_PROP GUI_FontHZ_32x32_Prop2 = {
  0xBCD3, /*start :加*/
  0xBCD3, /*end   :加,  len=1*/
  &GUI_FontHZ_32x32_CharInfo[ 1 ],
  &GUI_FontHZ_32x32_Prop3
};


GUI_FONT_PROP GUI_FontHZ_32x32_Prop1 = {
  0xB3E5, /*start :冲*/
  0xB3E5, /*end   :冲,  len=1*/
  &GUI_FontHZ_32x32_CharInfo[ 0 ],
  &GUI_FontHZ_32x32_Prop2
};


GUI_FONT GUI_FontHZ32x32 = {
  GUI_FONTTYPE_PROP_SJIS,
  32,
  32,
  1,
  1,
  &GUI_FontHZ_32x32_Prop1
};

