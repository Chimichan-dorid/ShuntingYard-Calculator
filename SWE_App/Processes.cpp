#include "Processes.h"
bool Processes::isNumber(std::string s)
{
	std::string::const_iterator it = s.begin();
	while (it != s.end() && std::isdigit(*it)) ++it;
	return !s.empty() && it == s.end();
}

int Processes::getPrecedences(std::string op)
{
	if (op == "+" || op == "-")
	{
		return 1;
	}
	if (op == "x" || op == "/" || op =="%")
	{
		return 2;
	}
	if(op == "Cos" || op == "Sin" || op == "Tan")
	{
		return 3;
	}
	return 0;
}

std::string Processes::Calculate(std::string expression)
{
	output.clear();

	mOperators["+"];
	mOperators["-"];
	mOperators["x"];
	mOperators["/"];
	mOperators["%"];
	mOperators["Cos"];
	mOperators["Sin"];
	mOperators["Tan"];

	wxString del = " ";
	wxStringTokenizer tokenizer(expression,del);

	while(tokenizer.HasMoreTokens())
	{
		wxString token = tokenizer.GetNextToken();
		
		if (isNumber(std::string(token)))
		{
			output.push_back(std::string(token));
		}
		else if (mOperators.find(std::string(token)) != mOperators.end())
		{
			if (!operators.empty())
			{
				if (getPrecedences(operators.top()) >= getPrecedences(std::string(token)))
				{
					output.push_back(operators.top());
					operators.pop();

				}
			}
			
			operators.push(std::string(token));
		}
		
	}
	while(!operators.empty())
	{
		output.push_back(operators.top());
		operators.pop();
	}
	
	double result;
	std::stack<double> stkTemp;
	std::string temp;
	double leftNum;
	double rightNum;
	
	for (size_t i = 0; i < output.size(); i++)
	{
		temp = output[i];
		
		if (isNumber(temp))
		{
			stkTemp.push(std::stod(temp)); 
		}
		else if (temp == "+")
		{
			rightNum = stkTemp.top(); stkTemp.pop();
			leftNum = stkTemp.top(); stkTemp.pop();
			stkTemp.push(result = leftNum + rightNum);
		}
		else if (temp == "-")
		{
			rightNum = stkTemp.top(); stkTemp.pop();
			leftNum = stkTemp.top(); stkTemp.pop();
			stkTemp.push(result = leftNum - rightNum);
		}
		else if (temp == "x")
		{
			rightNum = stkTemp.top(); stkTemp.pop();
			leftNum = stkTemp.top(); stkTemp.pop();
			result = leftNum * rightNum;
			stkTemp.push(result = leftNum * rightNum);
		}
		else if (temp == "/")
		{
			rightNum = stkTemp.top(); stkTemp.pop();
			leftNum = stkTemp.top(); stkTemp.pop();
			stkTemp.push(result = leftNum / rightNum);
		}
		else if (temp == "%")
		{
			rightNum = stkTemp.top(); stkTemp.pop();
			leftNum = stkTemp.top(); stkTemp.pop();
			stkTemp.push(result = (int(leftNum) % int(rightNum)));
		}
		else if (temp == "Cos")
		{
			rightNum = stkTemp.top(); stkTemp.pop();
			stkTemp.push(result = cos(rightNum));
		}
		else if (temp == "Sin")
		{
			rightNum = stkTemp.top(); stkTemp.pop();
			stkTemp.push(result = sin(rightNum));
		}
		else if (temp == "Tan") 
		{
			rightNum = stkTemp.top(); stkTemp.pop();
			stkTemp.push(result = tan(rightNum));
		}
		
	}
	result = stkTemp.top();
	return std::to_string(result);
	
}

