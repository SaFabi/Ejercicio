#pragma once  //______________________________________ WintemplaProject2.h  
#include "Resource.h"
class WintemplaProject2: public Win::Dialog
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
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(850);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(92);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"WintemplaProject2";
		toolb1.Create(NULL, NULL, WS_CHILD | WS_VISIBLE | CCS_NORESIZE | CCS_NOPARENTALIGN | CCS_ADJUSTABLE | CCS_NODIVIDER | TBSTYLE_FLAT | TBSTYLE_TOOLTIPS, 20, 17, 823, 68, hWnd, 1000);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
	}
	//_________________________________________________
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		return false;
	}
};
