#include "pch.h"
#include "CppUnitTest.h"
#include "../number-tools/numberTools.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestsZAIvanov18
{
	TEST_CLASS(UnitTestsZAIvanov18)
	{
	public:
		
		TEST_METHOD(ShouldReturnIfArgumentIsInRange)
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
	};
}
