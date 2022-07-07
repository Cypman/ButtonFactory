#pragma once
# ButtonFactory
#include"wx\wx.h"

class cMain: public wxFrame
{
public:
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
	
public:
	cMain();
	wxDECLARE_EVENT_TABLE();
	void OnButtonClick(wxCommandEvent& evt);
	double AddCalculate(double first, char oper, double second);

};

