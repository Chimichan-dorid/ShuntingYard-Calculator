#pragma once
#include "Window.h"
#include <stack>
#include <vector>
#include <map>
#include <cmath>

class Window;

class Processes
{
public:

	

	Window* window;
	double leftNum;
	double rightNum;

	std::stack<std::string> operators;
	std::vector<std::string> output;
	
	std::map<std::string, int> mOperators;
	wxString expression;
	
	double result;

	bool isNumber(std::string s);
	int getPrecedences(std::string);
	std::string Calculate(std::string expression);
	

};

