#pragma once
#include "wx\wx.h"


class ButtonFactory: public wxFrame
{
private:
	wxButton* xbtn;
	wxButton* xbtn1;
	wxButton* xbtn2;
	wxButton* xbtn3;
	wxButton* xbtn4;
	wxButton* xbtn5;
	wxButton* xbtn6;
	wxButton* xbtn7;
	wxButton* xbtn8;
	wxButton* xbtn9;
	wxButton* xbtn10;
	wxButton* xbtn11;
	wxButton* xbtn12;
	wxButton* xbtn13;
	wxButton* xbtn14;
	wxButton* xbtn15;
	wxButton* xbtn16;
	wxButton* xbtn17;
	wxButton* xbtn18;
	wxButton* xbtn19;
	wxTextCtrl* wtext;
private:
	wxWindow* factory;
	
public:	
	
	ButtonFactory(wxWindow* _facto);
	wxButton* CreateAddButton();
	wxButton* CreateOne();
	wxButton* CreateTwo();
	wxButton* CreateTree();
	wxButton* CreateFour();
	wxButton* CreateFive();
	wxButton* CreateSix();
	wxButton* CreateSeven();
	wxButton* CreateEight();
	wxButton* CreateNine();

	wxButton* CreateAddition();
	wxButton* CreateSubtraction();
	wxButton* CreateDivision();
	wxButton* CreateMultiple();
	wxButton* CreateEqual();
	wxButton* CreateClear();

	wxButton* CreateMod();
	wxButton* CreateBinary();
	wxButton* CreateHexa();
	wxButton* CreateDecimal();

	wxTextCtrl* DisplayBox();
	//void OnButtonClick(wxCommandEvent& evt);
	//wxDECLARE_EVENT_TABLE();
	//void CreateAddButton(wxCommandEvent& evt);
	
};

