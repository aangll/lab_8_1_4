#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_8_1_4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t = main();
			Assert::AreEqual(t, 0);
		}
	};
}