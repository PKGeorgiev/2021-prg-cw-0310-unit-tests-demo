#include "pch.h"
#include "CppUnitTest.h"
#include "../number-tools/numberTools.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestskddinev18
{
	TEST_CLASS(UnitTestskddinev18)
	{
	public:
		// 14 => true
		// 8  => false
		// 10 => false
		// 20 => true
		// 21 => false
		
		TEST_METHOD(ShouldReturnTrueIfArgumentIsInRange)
		{
			// Arrange
			bool result;
			int argument = 14;

			// Act
			result = isNumberInRange(argument);

			// Assert
			Assert::AreEqual(true, result);
		}

		TEST_METHOD(ShouldReturnFalseIfArgumentIsOurOfRange)
		{
			// Arrange
			bool result;
			int argument = 8;

			// Act
			result = isNumberInRange(argument);

			// Assert
			Assert::AreEqual(false, result);
		}

		TEST_METHOD(ShouldNotReturnFalseIfArgumentIsOnTheBorder)
		{
			// Arrange
			bool result;
			int argument = 20;

			// Act
			result = isNumberInRange(argument);

			// Assert
			Assert::AreNotEqual(false, result);
		}

		TEST_METHOD(ShouldReturnSumOfNumbers)
		{
			// Arrange
			int result;
			int argumentOne = 15;
			int argumentTwo = 3;

			// Act
			result = isNumberInRange(argumentOne + argumentTwo);

			// Assert
			Assert::AreEqual(18, result);
		}

		TEST_METHOD(ShouldReturnSumOfNumbers)
		{
			// Arrange
			int result;
			int argumentOne = 15;
			int argumentTwo = 3;

			// Act
			result = isNumberInRange(argumentOne + argumentTwo);

			// Assert
			Assert::AreEqual(18, result);
		}
	};
}
