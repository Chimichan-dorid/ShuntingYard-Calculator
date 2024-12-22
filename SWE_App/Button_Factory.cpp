#include "Button_Factory.h"

enum IDs {
	BUTTON_ID1 = 2,
	BUTTON_ID2,
	BUTTON_ID3,
	BUTTON_ID4,
	BUTTON_ID5,
	BUTTON_ID6,
	BUTTON_ID7,
	BUTTON_ID8,
	BUTTON_ID9,
	BUTTON_ID0,
	BUTTON_IDADD,
	BUTTON_IDSUB,
	BUTTON_IDMUL,
	BUTTON_IDDIV,
	BUTTON_IDEQUAL,
	BUTTON_IDCLEAR,
	BUTTON_IDCOS,
	BUTTON_IDSIN,
	BUTTON_IDTAN,
	BUTTON_IDMOD,
};

Button_Factory::Button_Factory() {}

wxSize Button_Factory::DefaultSize()
{
	return wxSize(80, 60);
}

wxButton* Button_Factory::CreateButton(wxWindow* parent, wxWindowID id, wxString lable, wxPoint pos, wxSize size)
{
	return new wxButton(parent, id, lable, pos, size);
	
}

wxButton* Button_Factory::CreateZeroButton(wxWindow* parent) 
{
	return new wxButton(parent, BUTTON_ID0, "0", wxPoint(82, 430), Button_Factory::DefaultSize());
}
wxButton* Button_Factory::CreateOneButton(wxWindow* parent)
{
	return new wxButton(parent, BUTTON_ID1, "1", wxPoint(2, 370), Button_Factory::DefaultSize());
}
wxButton* Button_Factory::CreateTwoButton(wxWindow* parent)
{
	return new wxButton(parent, BUTTON_ID2, "2", wxPoint(82, 370), Button_Factory::DefaultSize());
}
wxButton* Button_Factory::CreateThreeButton(wxWindow* parent)
{
	return new wxButton(parent, BUTTON_ID3, "3", wxPoint(162, 370), Button_Factory::DefaultSize());
}
wxButton* Button_Factory::CreateFourButton(wxWindow* parent)
{
	return new wxButton(parent, BUTTON_ID4, "4", wxPoint(2, 310), Button_Factory::DefaultSize());
}
wxButton* Button_Factory::CreateFiveButton(wxWindow* parent)
{
	return new wxButton(parent, BUTTON_ID5, "5", wxPoint(82, 310), Button_Factory::DefaultSize());
}
wxButton* Button_Factory::CreateSixButton(wxWindow* parent)
{
	return new wxButton(parent, BUTTON_ID6, "6", wxPoint(162, 310), Button_Factory::DefaultSize());
}
wxButton* Button_Factory::CreateSevenButton(wxWindow* parent)
{
	return new wxButton(parent, BUTTON_ID7, "7", wxPoint(2, 250), Button_Factory::DefaultSize());
}
wxButton* Button_Factory::CreateEightButton(wxWindow* parent)
{
	return new wxButton(parent, BUTTON_ID8, "8", wxPoint(82, 250), Button_Factory::DefaultSize());
}
wxButton* Button_Factory::CreateNineButton(wxWindow* parent)
{
	return new wxButton(parent, BUTTON_ID9, "9", wxPoint(162, 250), Button_Factory::DefaultSize());
}

wxButton* Button_Factory::CreateAddButton(wxWindow* parent)
{
	return new wxButton(parent, BUTTON_IDADD, "+", wxPoint(242, 370), wxSize(80, 60));
}
wxButton* Button_Factory::CreateSubButton(wxWindow* parent)
{
	return new wxButton(parent, BUTTON_IDSUB, "-", wxPoint(242, 310), wxSize(80, 60));;
}
wxButton* Button_Factory::CreateMulButton(wxWindow* parent)
{
	return new wxButton(parent, BUTTON_IDMUL, "x", wxPoint(242, 250), wxSize(80, 60));
}
wxButton* Button_Factory::CreateDivButton(wxWindow* parent)
{
	return new wxButton(parent, BUTTON_IDDIV, "/", wxPoint(242, 190), wxSize(80, 60));
}
wxButton* Button_Factory::CreateModButton(wxWindow* parent)
{
	return new wxButton(parent, BUTTON_IDMOD, "%", wxPoint(2, 130), wxSize(80, 60));
}
wxButton* Button_Factory::CreateCosButton(wxWindow* parent)
{
	return new wxButton(parent, BUTTON_IDCOS, "COS", wxPoint(2, 190), wxSize(80, 60));
}
wxButton* Button_Factory::CreateSinButton(wxWindow* parent)
{
	return new wxButton(parent, BUTTON_IDSIN, "SIN", wxPoint(82, 190), wxSize(80, 60));
}
wxButton* Button_Factory::CreateTanButton(wxWindow* parent)
{
	return new wxButton(parent, BUTTON_IDTAN, "TAN", wxPoint(162, 190), wxSize(80, 60));
}
wxButton* Button_Factory::CreateEqualButton(wxWindow* parent)
{
	return new wxButton(parent, BUTTON_IDEQUAL, "=", wxPoint(242, 430), wxSize(80, 60));
}
