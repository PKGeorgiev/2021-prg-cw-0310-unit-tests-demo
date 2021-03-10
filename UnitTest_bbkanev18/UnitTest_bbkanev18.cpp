#include "pch.h"
#include "CppUnitTest.h"
#include "../number-tools/numberTools.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestbbkanev18
{
	TEST_CLASS(UnitTestbbkanev18)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// (10; 20]
			// 14 => true
			// 8  => false
			// 10 => false
			// 20 => true
			// 21 => false
			bool result;

			result = isNumberInRange(17);

		}
	};
}
