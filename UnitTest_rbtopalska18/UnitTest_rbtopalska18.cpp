#include "pch.h"
#include "CppUnitTest.h"
#include "../number-tools//numberTools.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestrbtopalska18
{
	TEST_CLASS(UnitTestrbtopalska18)
	{
	public:
		
		//14 => true
		//8  => false
		//10 => true
		//20 => true
		//21 => false
		TEST_METHOD(ShouldReturnTrueIfArgumentIsInRange)
		{

			//AAA

			//Arrange
			bool result;
			int argument = 17;

			//Act
			result = isNumberInRange(17);

			//Assert
			Assert::AreEqual(true, result);
		}
		TEST_METHOD(ShouldReturnFalseIsArgumentIsOutRange)
		{
			bool result;
			int arg = 8;
			result = isNumberInRange(arg);
			Assert::AreEqual(false, result);
		}
		TEST_METHOD(ShouldNotReturnTrueIfArgumentIsOnTheBorder)
		{
			bool result;
			int arg = 20;
			result = isNumberInRange(arg);
			Assert::AreNotEqual(false, result);
		}
	};
}
