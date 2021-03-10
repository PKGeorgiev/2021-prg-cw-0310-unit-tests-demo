#include "pch.h"
#include "CppUnitTest.h"
#include "../number-tools/numberTools.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTeststfsmolev18
{
	TEST_CLASS(UnitTeststfsmolev18)
	{
	public:

		TEST_METHOD(ShouldReturnTrueIfArgumentIsInRange)
		{
			// 14 => true
			// 9 => false
			// 10 => false
			// 20 => true
			// 21 => false

			bool result;
			int argument = 14;

			result = isNumberInRange(argument);

			Assert::AreEqual(true, result);
		}
		TEST_METHOD(ShouldReturnFalseIsArgumentIsOutOfRange)
		{
			bool result;
			int arg = 8;
			result = isNumberInRange(arg);
			Assert::AreEqual(false, result);
		}
		TEST_METHOD(ShouldNotReturnFalseIfArgumentIsOnTheBorder)
		{
			bool result;
			int arg = 20;
			result = isNumberInRange(arg);
			Assert::AreNotEqual(false,result);
		}
	};
}
