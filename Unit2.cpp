#include <DUnitX.TestFramework.hpp>
#include <stdio.h>
#include <vcl.h>
#include "Unit1.h"

#pragma option --xrtti

class __declspec(delphirtti) TTestUserTab : public TObject
{
	TForm1 *FForm1;
public:
  virtual void __fastcall SetUp();
  virtual void __fastcall TearDown();

__published:
  void __fastcall TestResetClick();
};


void __fastcall TTestUserTab::SetUp()
{
	FForm1 = new TForm1(NULL);
}

void __fastcall TTestUserTab::TearDown()
{
	delete FForm1;
	FForm1 = NULL;
}

void __fastcall TTestUserTab::TestResetClick()
{
  // TODO
  FForm1->ResetClick(NULL);
  //String s("Hello");
  //Dunitx::Testframework::Assert::IsTrue(s == "Hello");
}

/*
void __fastcall TTestUserTab::Test2()
{
  // TODO
  String s("Hello");
  Dunitx::Testframework::Assert::IsTrue(s == "Bonjour"); // This fails for illustrative purposes
}
*/

static void registerTests()
{
  TDUnitX::RegisterTestFixture(__classid(TTestUserTab));
}
#pragma startup registerTests 33