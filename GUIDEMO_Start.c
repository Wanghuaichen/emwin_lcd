/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
**********************************************************************
*                                                                    *
*        (c) 1996 - 2015  SEGGER Microcontroller GmbH & Co. KG       *
*                                                                    *
*        Internet: www.segger.com    Support:  support@segger.com    *
*                                                                    *
**********************************************************************

** emWin V5.28 - Graphical user interface for embedded applications **
emWin is protected by international copyright laws.   Knowledge of the
source code may not be used to write a similar product.  This file may
only  be used  in accordance  with  a license  and should  not be  re-
distributed in any way. We appreciate your understanding and fairness.
----------------------------------------------------------------------
File        : GUIDEMO_Start.c
Purpose     : GUIDEMO initialization
----------------------------------------------------------------------
*/

#include "GUIDEMO.h"
#include "include.h"
#include "usart.h"
#include "delay.h"
/*********************************************************************
*
*       MainTask
*/

  WM_HWIN window,frame,key_board,parameter_window,runing_window;

void MainTask(void) {
  #if GUI_WINSUPPORT
    WM_SetCreateFlags(WM_CF_MEMDEV);
  #endif
  GUI_Init();
  #ifdef WIN32
    //GUI_SPY_StarServer();
  #endif
  #if GUI_WINSUPPORT
    WM_MULTIBUF_Enable(1);
  #endif
  //GUIDEMO_Main();
  runing_window = Createruning_windows();
  window = CreateWindow();
  //frame = CreateFramewin();
  parameter_window = Createparameter_Seting();


  key_board = Createkey_board();

  //WM_HideWindow(frame);
  WM_HideWindow(runing_window);
  WM_HideWindow(parameter_window);
  WM_HideWindow(key_board);
	usart_recv_data();
  while(1)
  {
	GUI_Delay(20);
	deal_uasrt_recv_data();
  }

}

/*************************** End of file ****************************/

