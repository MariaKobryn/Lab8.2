#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab8.2/Lab8.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest82
{
	TEST_CLASS(UnitTest82)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			string s = "a";
			t = Find(s);
			Assert::AreEqual(t, 1);
		}
	};
}
