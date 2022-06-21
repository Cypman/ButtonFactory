#pragma once
#include "Calculator.h"
#include "wx\wx.h"
#include "cMain.h"

class ButtonFactory: public wxFrame
{
private:
	ButtonFactory* xbtn;
	ButtonFactory* xbtn1;
	ButtonFactory* xbtn2;
	ButtonFactory* xbtn3;
	ButtonFactory* xbtn4;
	ButtonFactory* xbtn5;
	ButtonFactory* xbtn6;
	ButtonFactory* xbtn7;
	ButtonFactory* xbtn8;
	ButtonFactory* xbtn9;
	ButtonFactory* xbtn10;
	ButtonFactory* xbtn11;
	ButtonFactory* xbtn12;
	ButtonFactory* xbtn13;
	ButtonFactory* xbtn14;
	ButtonFactory* xbtn15;
	ButtonFactory* xbtn16;
	ButtonFactory* xbtn17;
	ButtonFactory* xbtn18;
	ButtonFactory* xbtn19;
	wxTextCtrl* wtext;	
private:
	wxWindow* factory;
public:	
	ButtonFactory();
	ButtonFactory(wxWindow* _facto);
	wxButton* CreateAddButton();
	//ButtonFactory* xbtn = nullptr;
	
	//wxDECLARE_EVENT_TABLE();
	void OnButtonClick(wxCommandEvent& evt);
	wxDECLARE_EVENT_TABLE();
	//void CreateAddButton(wxCommandEvent& evt);
	
};

