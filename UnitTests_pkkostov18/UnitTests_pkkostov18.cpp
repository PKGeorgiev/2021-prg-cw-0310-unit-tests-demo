#include "pch.h"
#include "CppUnitTest.h"
#include "../number-tools/numberTools.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestspkkostov18
{
	TEST_CLASS(UnitTestspkkostov18)
	{
	public:
		
		TEST_METHOD(ShouldReturnTrueIfNumberInIsRange)
		{
			//AAA

			//Arrange
			bool result;
			int argument = 14;

			//Act
			result = isNumberInRange(argument);

			//Assert
			Assert::AreEqual(true, result);
		}
	};
}
