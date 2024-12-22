#include "pch.h"
#include "..\SWE_App\Processes.h"
#include "CppUnitTest.h"
#include "wx/wx.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PreocessesTest
{
	TEST_CLASS(ProcessesTest)
	{
	public:

		TEST_METHOD(getPrecedences1)
		{
			Processes pro;
			std::string temp = "+";
			Assert::AreEqual(1, pro.getPrecedences(temp));

		}
		TEST_METHOD(getPrecedences2)
		{
			Processes pro;
			std::string temp = "x";
			Assert::AreEqual(2, pro.getPrecedences(temp));
		}
		TEST_METHOD(getPrecedences3)
		{
			Processes pro;
			std::string temp = "Cos";
			Assert::AreEqual(3, pro.getPrecedences(temp));
		}
		TEST_METHOD(CalculateAdd)
		{
			Processes pro;
			std::string temp = "5 + 3";
			Assert::AreEqual(8, std::stoi(pro.Calculate(temp)));
		}
		TEST_METHOD(CalculateSub)
		{
			Processes pro;
			std::string temp = "10 - 3";
			Assert::AreEqual(7, std::stoi(pro.Calculate(temp)));
		}
		TEST_METHOD(CalculateMul)
		{
			Processes pro;
			std::string temp = "5 x 10";
			Assert::AreEqual(50, std::stoi(pro.Calculate(temp)));
		}
		TEST_METHOD(CalculateDiv)
		{
			Processes pro;
			std::string temp = "8 / 2";
			Assert::AreEqual(4, std::stoi(pro.Calculate(temp)));
		}
		TEST_METHOD(CalculateMod)
		{
			Processes pro;
			std::string temp = "5 % 9";
			Assert::AreEqual(5, std::stoi(pro.Calculate(temp)));
		}
		TEST_METHOD(CalculateCos)
		{
			Processes pro;
			std::string temp = "Cos 90";
			Assert::AreEqual(-0, std::stoi(pro.Calculate(temp)));
		}
		TEST_METHOD(CalculateSin)
		{
			Processes pro;
			std::string temp = "Sin 180";
			Assert::AreEqual(-0, std::stoi(pro.Calculate(temp)));
		}
		TEST_METHOD(CalculateTan)
		{
			Processes pro;
			std::string temp = "Tan 360";
			Assert::AreEqual(-3, std::stoi(pro.Calculate(temp)));
		}

		
	};
}
