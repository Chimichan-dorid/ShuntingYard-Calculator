#pragma once
#include "wx/wx.h"

class Button_Factory
{
public:

	Button_Factory();
	static wxSize DefaultSize();
	
	static wxButton* CreateButton(wxWindow* parent, wxWindowID id, wxString lable, wxPoint pos, wxSize size);
	
	wxButton* CreateZeroButton(wxWindow* parent);
	wxButton* CreateOneButton(wxWindow* parent);
	wxButton* CreateTwoButton(wxWindow* parent);
	wxButton* CreateThreeButton(wxWindow* parent);
	wxButton* CreateFourButton(wxWindow* parent);
	wxButton* CreateFiveButton(wxWindow* parent);
	wxButton* CreateSixButton(wxWindow* parent);
	wxButton* CreateSevenButton(wxWindow* parent);
	wxButton* CreateEightButton(wxWindow* parent);
	wxButton* CreateNineButton(wxWindow* parent);
	
	static wxButton* CreateAddButton(wxWindow* parent);
	static wxButton* CreateSubButton(wxWindow* parent);
	static wxButton* CreateMulButton(wxWindow* parent);
	static wxButton* CreateDivButton(wxWindow* parent);
	static wxButton* CreateModButton(wxWindow* parent);
	static wxButton* CreateCosButton(wxWindow* parent);
	static wxButton* CreateSinButton(wxWindow* parent);
	static wxButton* CreateTanButton(wxWindow* parent);
	static wxButton* CreateEqualButton(wxWindow* parent);

};

