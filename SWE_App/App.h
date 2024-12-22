#pragma once
#include "wx/wx.h"

//Giving the porject place to start

class Window;

class App : public wxApp
{
	Window* window = nullptr;

public:

	virtual bool OnInit();
};

