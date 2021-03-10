#include "pch.h"
#include "CppUnitTest.h"
#include "../number-tools/numberTools.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestsrslilova18
{
	TEST_CLASS(UnitTestsrslilova18)
	{
	public:
		
		TEST_METHOD(ShouldReturnTrueIfArgumentIsInRange)
		{
			bool result;
			int arg = 14;
			result = isNumberInRange(arg);
			Assert::AreEqual(true, result);
		}

		TEST_METHOD(ShouldReturnFalseIfArgumentIsOutOfRange)
		{
			bool result;
			int arg = 8;
			result = isNumberInRange(arg);
			Assert::AreEqual(false, result);
		}
	};
}
