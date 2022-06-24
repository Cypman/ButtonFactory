#include "ButtonFactory.h"
#include "wx\wx.h"

ButtonFactory::ButtonFactory(wxWindow* _facto) {
	factory = _facto;
}
wxButton* ButtonFactory::CreateAddButton() {
	wxButton* _buttonZero;
	_buttonZero = new wxButton(factory, 166, "0", wxPoint(10, 420), wxSize(80, 80));
	return _buttonZero;
}
wxButton* ButtonFactory::CreateOne() {
	wxButton* _factor;
	_factor = new wxButton(factory, 162, "1", wxPoint(10, 330), wxSize(80, 80));
	return _factor;
}
wxButton* ButtonFactory::CreateTwo() {
	wxButton* _factor;
	_factor = new wxButton(factory, 163, "2", wxPoint(100, 330), wxSize(80, 80));
	return _factor;
}
wxButton* ButtonFactory::CreateTree() {
	wxButton* _factor;
	_factor = new wxButton(factory, 164, "3", wxPoint(190, 330), wxSize(80, 80));
	return _factor;
}
wxButton* ButtonFactory::CreateFour() {
	wxButton* _factor;
	_factor = new wxButton(factory, 158, "4", wxPoint(10, 240), wxSize(80, 80));
	return _factor;
}
wxButton* ButtonFactory::CreateFive() {
	wxButton* _factor;
	_factor = new wxButton(factory, 159, "5", wxPoint(100, 240), wxSize(80, 80));
	return _factor;
}
wxButton* ButtonFactory::CreateSix() {
	wxButton* _factor;
	_factor = new wxButton(factory, 160, "6", wxPoint(190, 240), wxSize(80, 80));
	return _factor;
}
wxButton* ButtonFactory::CreateSeven() {
	wxButton* _factor;
	_factor = new wxButton(factory, 154, "7", wxPoint(10, 150), wxSize(80, 80));
	return _factor;
}
wxButton* ButtonFactory::CreateEight() {
	wxButton* _factor;
	_factor = new wxButton(factory, 155, "8", wxPoint(100, 150), wxSize(80, 80));
	return _factor;
}
wxButton* ButtonFactory::CreateNine() {
	wxButton* _factor;
	_factor = new wxButton(factory, 156, "9", wxPoint(190, 150), wxSize(80, 80));
	return _factor;
}
wxButton* ButtonFactory::CreateAddition() {
	wxButton* _factor;
	_factor = new wxButton(factory, 169, "+", wxPoint(280, 420), wxSize(80, 80));
	return _factor;
}
wxButton* ButtonFactory::CreateSubtraction() {
	wxButton* _factor;
	_factor = new wxButton(factory, 165, "-", wxPoint(280, 330), wxSize(80, 80));
	return _factor;
}
wxButton* ButtonFactory::CreateDivision() {
	wxButton* _factor;
	_factor = new wxButton(factory, 157, "/", wxPoint(280, 150), wxSize(80, 80));
	return _factor;
}
wxButton* ButtonFactory::CreateMultiple() {
	wxButton* _factor;
	_factor = new wxButton(factory, 161, "*", wxPoint(280, 240), wxSize(80, 80));
	return _factor;
}
wxButton* ButtonFactory::CreateMod() {
	wxButton* _factor;
	_factor = new wxButton(factory, 153, "mod", wxPoint(280, 60), wxSize(80, 80));
	return _factor;
}
wxButton* ButtonFactory::CreateHexa() {
	wxButton* _factor;
	_factor = new wxButton(factory, 150, "Hex", wxPoint(10, 60), wxSize(80, 80));
	return _factor;
}
wxButton* ButtonFactory::CreateBinary() {
	wxButton* _factor;
	_factor = new wxButton(factory, 152, "Bin", wxPoint(190, 60), wxSize(80, 80));
	return _factor;
}
wxButton* ButtonFactory::CreateDecimal() {
	wxButton* _factor;
	_factor = new wxButton(factory, 151, "Dec", wxPoint(100, 60), wxSize(80, 80));
	return _factor;
}
wxButton* ButtonFactory::CreateClear() {
	wxButton* _factor;
	_factor = new wxButton(factory, 167, "C", wxPoint(100, 420), wxSize(80, 80));
	return _factor;
}
wxButton* ButtonFactory::CreateEqual() {
	wxButton* _factor;
	_factor = new wxButton(factory, 168, "=", wxPoint(190, 420), wxSize(80, 80));
	return _factor;
}wxTextCtrl* ButtonFactory::DisplayBox() {
	wxTextCtrl* _diplay;
	_diplay = new wxTextCtrl(factory, 170, "", wxPoint(5, 5), wxSize(355, 40));
	return _diplay;
}


