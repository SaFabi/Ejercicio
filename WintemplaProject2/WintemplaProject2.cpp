#include "stdafx.h"  //________________________________________ WintemplaProject2.cpp
#include "WintemplaProject2.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	WintemplaProject2 app;
	return app.BeginDialog(IDI_WintemplaProject2, hInstance);
}

void WintemplaProject2::Window_Open(Win::Event& e)
{
	//________________________________________________________ toolb1
	TBBUTTON tbButton[9];//<< EDIT HERE THE NUMBER OF BUTTONS

	toolb1.imageList.Create(20, 20, 7);//<< EDIT HERE THE NUMBER OF IMAGES
	toolb1.imageList.AddIcon(this->hInstance, IDI_SAVE);
	toolb1.imageList.AddIcon(this->hInstance, IDI_COPY);
	toolb1.imageList.AddIcon(this->hInstance, IDI_ADD);
	toolb1.imageList.AddIcon(this->hInstance, IDI_EDIT);
	toolb1.imageList.AddIcon(this->hInstance, IDI_DELETE);
	toolb1.imageList.AddIcon(this->hInstance, IDI_PRINT);
	toolb1.imageList.AddIcon(this->hInstance, IDI_MSEXCEL);
	toolb1.SendMessage(TB_BUTTONSTRUCTSIZE, (WPARAM)(int)sizeof(TBBUTTON), 0);
	toolb1.SetImageList(toolb1.imageList);
	//_____________________________________
	tbButton[0].iBitmap = MAKELONG(0, 0); //<< IMAGE INDEX
	tbButton[0].idCommand = IDM_SAVE;
	tbButton[0].fsState = TBSTATE_ENABLED; // | TBSTATE_WRAP
	tbButton[0].fsStyle = BTNS_BUTTON;
	tbButton[0].dwData = 0L;
	tbButton[0].iString = (LONG_PTR)L"Save";
	//________________________ A separator
	tbButton[1].iBitmap = -1;
	tbButton[1].idCommand = 0;
	tbButton[1].fsState = TBSTATE_ENABLED; // | TBSTATE_WRAP
	tbButton[1].fsStyle = BTNS_SEP;
	tbButton[1].dwData = 0L;
	tbButton[1].iString = 0;
	//_____________________________________
	tbButton[2].iBitmap = MAKELONG(1, 0); //<< IMAGE INDEX
	tbButton[2].idCommand = IDM_COPY;
	tbButton[2].fsState = TBSTATE_ENABLED; // | TBSTATE_WRAP
	tbButton[2].fsStyle = BTNS_BUTTON;
	tbButton[2].dwData = 0L;
	tbButton[2].iString = (LONG_PTR)L"Copy";
	//_____________________________________
	tbButton[3].iBitmap = MAKELONG(2, 0); //<< IMAGE INDEX
	tbButton[3].idCommand = IDM_ADD;
	tbButton[3].fsState = TBSTATE_ENABLED; // | TBSTATE_WRAP
	tbButton[3].fsStyle = BTNS_BUTTON;
	tbButton[3].dwData = 0L;
	tbButton[3].iString = (LONG_PTR)L"Add";
	//_____________________________________
	tbButton[4].iBitmap = MAKELONG(3, 0); //<< IMAGE INDEX
	tbButton[4].idCommand = IDM_EDIT;
	tbButton[4].fsState = TBSTATE_ENABLED; // | TBSTATE_WRAP
	tbButton[4].fsStyle = BTNS_BUTTON;
	tbButton[4].dwData = 0L;
	tbButton[4].iString = (LONG_PTR)L"Edit";
	//_____________________________________
	tbButton[5].iBitmap = MAKELONG(4, 0); //<< IMAGE INDEX
	tbButton[5].idCommand = IDM_DELETE;
	tbButton[5].fsState = TBSTATE_ENABLED; // | TBSTATE_WRAP
	tbButton[5].fsStyle = BTNS_BUTTON;
	tbButton[5].dwData = 0L;
	tbButton[5].iString = (LONG_PTR)L"Delete";
	//________________________ A separator
	tbButton[6].iBitmap = -1;
	tbButton[6].idCommand = 0;
	tbButton[6].fsState = TBSTATE_ENABLED; // | TBSTATE_WRAP
	tbButton[6].fsStyle = BTNS_SEP;
	tbButton[6].dwData = 0L;
	tbButton[6].iString = 0;
	//_____________________________________
	tbButton[7].iBitmap = MAKELONG(5, 0); //<< IMAGE INDEX
	tbButton[7].idCommand = IDM_PRINT;
	tbButton[7].fsState = TBSTATE_ENABLED; // | TBSTATE_WRAP
	tbButton[7].fsStyle = BTNS_BUTTON;
	tbButton[7].dwData = 0L;
	tbButton[7].iString = (LONG_PTR)L"Print";
	//_____________________________________
	tbButton[8].iBitmap = MAKELONG(6, 0); //<< IMAGE INDEX
	tbButton[8].idCommand = IDM_MSEXCEL;
	tbButton[8].fsState = TBSTATE_ENABLED; // | TBSTATE_WRAP
	tbButton[8].fsStyle = BTNS_BUTTON;
	tbButton[8].dwData = 0L;
	tbButton[8].iString = (LONG_PTR)L"Export to Microsoft Excel";

	toolb1.SetBitmapSize(20, 20);
	toolb1.SetButtonSize(24, 22);
	toolb1.AddButtons(tbButton, 9);// << EDIT HERE THE NUMBER OF BUTTONS
	toolb1.SendMessage(TB_AUTOSIZE, 0, 0);
	toolb1.SetMaxTextRows(0);// EDIT HERE TO DISPLAY THE BUTTON TEXT
	toolb1.Show(SW_SHOWNORMAL);
}

void WintemplaProject2::Cmd_Save(Win::Event& e)
{
Win::FileDlg dlg;
	dlg.Clear();
	dlg.SetFilter(L"Text files (*.txt)\0*.txt\0\0", 0, L"txt");
	if (dlg.BeginDialog(hWnd, L"Save", true) == TRUE)
	{
		//wstring filename = dlg.GetFileNameFullPath();
	}
}

