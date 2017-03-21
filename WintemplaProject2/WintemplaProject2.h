#pragma once  //______________________________________ WintemplaProject2.h  
#include "Resource.h"
class WintemplaProject2 : public Win::Dialog
{
public:
	WintemplaProject2()
	{
	}
	~WintemplaProject2()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Toolbar toolb1;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::CentimetersToDlgUnitX(22.48958);
		dlgTemplate.cy = Sys::Convert::CentimetersToDlgUnitY(2.43417);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"WintemplaProject2";
		toolb1.CreateX(NULL, NULL, WS_CHILD | WS_VISIBLE | CCS_NORESIZE | CCS_NOPARENTALIGN | CCS_ADJUSTABLE | CCS_NODIVIDER | TBSTYLE_FLAT | TBSTYLE_TOOLTIPS, 0.42333, 0.37042, 17.40958, 1.42875, hWnd, 1000);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
	}
	//_________________________________________________
	void Window_Open(Win::Event& e);
	void Cmd_Save(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (this->IsEvent(e, IDM_SAVE)) { Cmd_Save(e); return true; }
		return false;
	}
};
