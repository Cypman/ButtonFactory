#include "ButtonFactory.h"
#include "cMain.h"

wxButton* ButtonFactory::CreateAddButton() {
	wxButton* _button;
	_button = new wxButton(factory, 100, "0", wxPoint(50, 198), wxSize(40, 40));
	return _button;
}

ButtonFactory::ButtonFactory(wxWindow* _facto) {
	factory = _facto;
}
ButtonFactory::ButtonFactory(){}