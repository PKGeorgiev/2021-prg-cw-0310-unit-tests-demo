#include "pch.h"
#include "CppUnitTest.h"
#include "../number-tools/numberTools.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestbbkanev18
{
	TEST_CLASS(UnitTestbbkanev18)
	{
	public:
		
		TEST_METHOD(ShouldReturnTrueIfArgumentIsInRange)
		{
			// (10; 20]
			// 14 => true
			// 8  => false
			// 10 => false
			// 20 => true
			// 21 => false
			
			// AAA

			// Arrange
			bool result;
			int argument = 17;


			// Act
			result = isNumberInRange(17);


			// Assert
			Assert::AreEqual(true, result);
			

		}
	};
}
