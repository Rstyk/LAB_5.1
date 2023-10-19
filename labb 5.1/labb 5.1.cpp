#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 5.1/lab 5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace labb51
{
	TEST_CLASS(labb51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = p(0);
			Assert::AreEqual(t, 1);

		}
	};
}
