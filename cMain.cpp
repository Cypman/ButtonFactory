#include"cMain.h"
#include "wx\wx.h"
#include"ButtonFactory.h"
wxBEGIN_EVENT_TABLE(cMain, wxFrame)
EVT_BUTTON(150, cMain::OnButtonClick)
EVT_BUTTON(151, cMain::OnButtonClick)
EVT_BUTTON(152, cMain::OnButtonClick)
EVT_BUTTON(153, cMain::OnButtonClick)
EVT_BUTTON(154, cMain::OnButtonClick)
EVT_BUTTON(155, cMain::OnButtonClick)
EVT_BUTTON(156, cMain::OnButtonClick)
EVT_BUTTON(157, cMain::OnButtonClick)
EVT_BUTTON(158, cMain::OnButtonClick)
EVT_BUTTON(159, cMain::OnButtonClick)
EVT_BUTTON(160, cMain::OnButtonClick)
EVT_BUTTON(161, cMain::OnButtonClick)
EVT_BUTTON(162, cMain::OnButtonClick)
EVT_BUTTON(163, cMain::OnButtonClick)
EVT_BUTTON(164, cMain::OnButtonClick)
EVT_BUTTON(165, cMain::OnButtonClick)
EVT_BUTTON(166, cMain::OnButtonClick)
EVT_BUTTON(167, cMain::OnButtonClick)
EVT_BUTTON(168, cMain::OnButtonClick)
EVT_BUTTON(169, cMain::OnButtonClick)

wxEND_EVENT_TABLE()
double first, second, result;
char oper;
cMain::cMain(): wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(400, 400), wxSize(600, 600)) {
	ButtonFactory factory(this);
	xbtn = factory.CreateHexa();//new wxButton(this, 150, "Hex", wxPoint(10, 60), wxSize(80, 80));
	xbtn1 = factory.CreateDecimal();//new wxButton(this, 151, "Dec", wxPoint(100, 60), wxSize(80, 80));
	xbtn2 = factory.CreateBinary();//new wxButton(this, 152, "Bin", wxPoint(190, 60), wxSize(80, 80));
	xbtn3 = factory.CreateMod();// new wxButton(this, 153, "mod", wxPoint(280, 60), wxSize(80, 80));
	xbtn4 = factory.CreateSeven();// new wxButton(this, 154, "7", wxPoint(10, 150), wxSize(80, 80));
	xbtn5 = factory.CreateEight();// new wxButton(this, 155, "8", wxPoint(100, 150), wxSize(80, 80));
	xbtn6 = factory.CreateNine();//new wxButton(this, 156, "9", wxPoint(190, 150), wxSize(80, 80));
	xbtn7 = factory.CreateDivision();//new wxButton(this, 157, L"\u03C0", wxPoint(280, 150), wxSize(80, 80));
	xbtn8 = factory.CreateFour();// new wxButton(this, 158, "4", wxPoint(10, 240), wxSize(80, 80));
	xbtn9 = factory.CreateFive();//new wxButton(this, 159, "5", wxPoint(100, 240), wxSize(80, 80));
	xbtn10 = factory.CreateSix();// new wxButton(this, 160, "6", wxPoint(190, 240), wxSize(80, 80));
	xbtn11 = factory.CreateMultiple();// new wxButton(this, 161, "*", wxPoint(280, 240), wxSize(80, 80));
	xbtn12 = factory.CreateOne();//new wxButton(this, 162, "1", wxPoint(10, 330), wxSize(80, 80));
	xbtn13 = factory.CreateTwo();// new wxButton(this, 163, "2", wxPoint(100, 330), wxSize(80, 80));
	xbtn14 = factory.CreateTree();//new wxButton(this, 164, "3", wxPoint(190, 330), wxSize(80, 80));
	xbtn15 = factory.CreateSubtraction();//new wxButton(this, 165, "-", wxPoint(280, 330), wxSize(80, 80));
	xbtn16 = factory.CreateAddButton();// new wxButton(this, 166, "0", wxPoint(10, 420), wxSize(80, 80));
	xbtn17 = factory.CreateClear();//new wxButton(this, 167, "C", wxPoint(100, 420), wxSize(80, 80));
	xbtn18 = factory.CreateEqual();//new wxButton(this, 168, "=", wxPoint(190, 420), wxSize(80, 80));
	xbtn19 = factory.CreateAddition();//new wxButton(this, 169, "+", wxPoint(280, 420), wxSize(80, 80));
	wtext = factory.DisplayBox();//new wxTextCtrl(this, 170, "", wxPoint(5, 5), wxSize(355, 40));

} 
void cMain::OnButtonClick(wxCommandEvent& evt) {
	// new ButtonFactory();
	int wxid = evt.GetId();
	switch (wxid)
	{
	case 150: {
		wtext->AppendText("Hex");
		break;
	}
	case 151: {
		wtext->AppendText(".");
		break;
	}case 152: {
		wtext->AppendText("Bin");
		break;
	}case 153: {
		wtext->AppendText("/");
		break;
	}case 154: {
		wtext->AppendText("7");
		break;
	}case 155: {
		wtext->AppendText("8");
		break;
	}case 156: {
		wtext->AppendText("9");
		break;
	}case 157: {
		wtext->AppendText("/");
		break;
	}case 158: {
		wtext->AppendText("4");
		break;
	}case 159: {
		wtext->AppendText("5");
		break;
	}case 160: {
		wtext->AppendText("6");
		break;
	}case 161: {
		wtext->AppendText("*");
		break;
	}case 162: {
		wtext->AppendText("1");
		break;
	}case 163: {
		wtext->AppendText("2");
		break;
	}case 164: {
		wtext->AppendText("3");
		break;
	}case 165: {
		wtext->AppendText("-");
		break;
	}case 166: {
		wtext->AppendText("0");
		break;
	}case 167: {
		wtext->AppendText("C");
		break;
	}case 168: {
		wtext->AppendText("=");
		break;
	}case 169: {
		wtext->AppendText("+");
		break;
	}case 170: {
		wtext->AppendText("");
		break;
	}
		
	}
	
}
