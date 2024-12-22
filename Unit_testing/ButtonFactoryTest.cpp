#include "pch.h"
#include "..\SWE_App\Button_Factory.h"
#include "CppUnitTest.h"
#include "wx/wx.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ButtonFactoryTest
{
	TEST_CLASS(ButtonFactoryTest)
	{
	public:

		TEST_METHOD(CreateButton)
		{
			wxFrame* frame = new wxFrame(nullptr, wxID_ANY, "Test");
			wxButton* button = Button_Factory::CreateButton(frame, wxID_ANY, "Test", wxDefaultPosition, wxDefaultSize);
			Assert::IsNotNull(button);
		}
		TEST_METHOD(CreateAddButton)
		{
			wxFrame* frame = new wxFrame(nullptr, wxID_ANY, "Test");
			wxButton* button = Button_Factory::CreateAddButton(frame);
			Assert::IsNotNull(button);
		}
		TEST_METHOD(CreateSubButton)
		{
			wxFrame* frame = new wxFrame(nullptr, wxID_ANY, "Test");
			wxButton* button = Button_Factory::CreateSubButton(frame);
			Assert::IsNotNull(button);
		}
		TEST_METHOD(CreateMulButton)
		{
			wxFrame* frame = new wxFrame(nullptr, wxID_ANY, "Test");
			wxButton* button = Button_Factory::CreateMulButton(frame);
			Assert::IsNotNull(button);
		}
		TEST_METHOD(CreateDivButton)
		{
			wxFrame* frame = new wxFrame(nullptr, wxID_ANY, "Test");
			wxButton* button = Button_Factory::CreateDivButton(frame);
			Assert::IsNotNull(button);
		}
		TEST_METHOD(CreateModButton)
		{
			wxFrame* frame = new wxFrame(nullptr, wxID_ANY, "Test");
			wxButton* button = Button_Factory::CreateModButton(frame);
			Assert::IsNotNull(button);
		}
		TEST_METHOD(CreateCosButton)
		{
			wxFrame* frame = new wxFrame(nullptr, wxID_ANY, "Test");
			wxButton* button = Button_Factory::CreateCosButton(frame);
			Assert::IsNotNull(button);
		}
		TEST_METHOD(CreateSinButton) 
		{
			wxFrame* frame = new wxFrame(nullptr, wxID_ANY, "Test");
			wxButton* button = Button_Factory::CreateSinButton(frame);
			Assert::IsNotNull(button);
		}
		TEST_METHOD(CreateTanButton)
		{
			wxFrame* frame = new wxFrame(nullptr, wxID_ANY, "Test");
			wxButton* button = Button_Factory::CreateTanButton(frame);
			Assert::IsNotNull(button);
		}
		TEST_METHOD(CreateEqualButton)
		{
			wxFrame* frame = new wxFrame(nullptr, wxID_ANY, "Test");
			wxButton* button = Button_Factory::CreateEqualButton(frame);
			Assert::IsNotNull(button);
		}
	};
};
