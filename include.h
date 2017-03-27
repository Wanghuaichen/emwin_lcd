#ifndef __INCLUDE_H__
#define __INCLUDE_H__
extern GUI_CONST_STORAGE GUI_BITMAP bmbeer;
extern GUI_CONST_STORAGE GUI_BITMAP bmpaishui;
extern GUI_CONST_STORAGE GUI_BITMAP bmwater;
extern GUI_CONST_STORAGE GUI_BITMAP bmshower;
extern GUI_CONST_STORAGE GUI_BITMAP bmseting;

extern WM_HWIN window,frame,key_board,icon_view,parameter_window;

extern GUI_FONT GUI_FontHZ16x16;
#define HZ (&GUI_FontHZ16x16)

extern GUI_FONT GUI_FontHZ24x24;
#define HZ24_24 (&GUI_FontHZ24x24)

extern GUI_FONT GUI_FontHZ32x32;
#define HZ32_32 (&GUI_FontHZ32x32)


#define MAX_KEY_LENGTH  10
typedef struct
{
    unsigned char key_value_arry[MAX_KEY_LENGTH];
    unsigned char key_point;
    unsigned char input_length;
    unsigned char max_input_length;
    unsigned char cur_function;
    unsigned char cur_cursor;
    int int_key_value;
    int key_board_value;
}S_Key_Glg_Info,P_S_Key_Glg_Info;
extern S_Key_Glg_Info Dlg_key_value;


void reset_key_value(void);

void show_psw_dlg(void);
void show_key_board(const char* keyboard_name,unsigned char input_length);

void display_value_on_edit(int value,unsigned char edit_cursor);

void show_parameter_window(void);
void show_main_windows(void);
#endif

