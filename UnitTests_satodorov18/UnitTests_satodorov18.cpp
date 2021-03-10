#include "pch.h"
#include "CppUnitTest.h"
#include "../number-tools/numberTools.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestssatodorov18
{
	TEST_CLASS(UnitTestssatodorov18)
	{
	public:
		
		TEST_METHOD(ShouldReturnTrueIfArgumentIsInRange)
		{
			// AAA
			
			// Arrange
			bool result;
			int argument = 14;

			// Act
			result = isNumberInRange(argument);

			// Assert
			Assert::AreEqual(true, result);
		}
		TEST_METHOD(ShouldReturnFalseIfArgumentIsOutOfRange)
		{
			// AAA

			// Arrange
			bool result;
			int arg = 8;

			// Act
			result = isNumberInRange(arg);

			// Assert
			Assert::AreEqual(false, result);
		}
	};
}
