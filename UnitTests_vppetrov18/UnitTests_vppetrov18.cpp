#include "pch.h"
#include "CppUnitTest.h"
#include "../number-tools/numberTools.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestsvppetrov18
{
	TEST_CLASS(UnitTestsvppetrov18)
	{
	public:
		
		TEST_METHOD(ShouldReturnTrueIfArgumentsInRange)
		{
			// (10; 20]
			// 14 => true
			// 8  => false
			// 10 => false
			// 20 => true
			// 21 => false
			bool result;
			result=isNumberInRange(17);

			Assert::AreEqual(true, result);
		}
		TEST_METHOD(ShouldReturnTrueIfArgumentsOutOfRange)
		{
			bool result;
			int arg = 8;
			result = isNumberInRange(arg);
			Assert::AreEqual(false, result);
		}
		TEST_METHOD(ShouldReturnTrueIfArgumentsIsOnTheBorder)
		{
			bool result;
			int arg = 20;
			result = isNumberInRange(arg);
			Assert::AreEqual(false, false);
		}
		TEST_METHOD(ShouldReturnSumOfNumbers)
		{
			int a = 15;
			int b = 3;
			int result = sumNumbers(a, b);
			Assert::AreEqual(18, result);
		}
	};
}
