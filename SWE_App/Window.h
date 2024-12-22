#pragma once
#include "wx/wx.h"
#include <wx\tokenzr.h>
#include "Button_Factory.h"
#include "Processes.h"

class Button_Factory;
class Processes;
class Window;

class Window : public wxFrame
{

public:
	Window();
	
	Button_Factory* factory;
	std::unique_ptr<Processes> pro;

	wxTextCtrl* textCtrl;

	wxButton* Zero;
	wxButton* One;
	wxButton* Two;
	wxButton* Three;
	wxButton* Four;
	wxButton* Five;
	wxButton* Six;
	wxButton* Seven;
	wxButton* Eight;
	wxButton* Nine;
	
	wxButton* pos_neg;
	wxButton* Point;
	
	wxButton* Subtract;
	wxButton* Add;
	wxButton* Multiple;
	wxButton* Divide;
	wxButton* Equal;
	wxButton* cos;
	wxButton* Delete;
	wxButton* sin;
	wxButton* Clear;
	wxButton* clearEntry;
	wxButton* Modulo;
	wxButton* tan;

	int x = 80;
	int y = 60;

	void buttonPress1(wxCommandEvent& evt);
	void buttonPress2(wxCommandEvent& evt);
	void buttonPress3(wxCommandEvent& evt);
	void buttonPress4(wxCommandEvent& evt);
	void buttonPress5(wxCommandEvent& evt);
	void buttonPress6(wxCommandEvent& evt);
	void buttonPress7(wxCommandEvent& evt);
	void buttonPress8(wxCommandEvent& evt);
	void buttonPress9(wxCommandEvent& evt);
	void buttonPress0(wxCommandEvent& evt);
	void buttonPressADD(wxCommandEvent& evt);
	void buttonPressMUL(wxCommandEvent& evt);
	void buttonPressSUB(wxCommandEvent& evt);
	void buttonPressDIV(wxCommandEvent& evt);
	void buttonPressMOD(wxCommandEvent& evt);
	void buttonPressCos(wxCommandEvent& evt);
	void buttonPressSin(wxCommandEvent& evt);
	void buttonPressTan(wxCommandEvent& evt);
	void buttonPressEqual(wxCommandEvent& evt);
	void buttonPressClear(wxCommandEvent& evt);
	void buttonPressDelete(wxCommandEvent& evt);

	
	wxDECLARE_EVENT_TABLE();

};

