#include "pch.h"
#include "CppUnitTest.h"
#include "../number-tools/numberTools.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestskddinev18
{
	TEST_CLASS(UnitTestskddinev18)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// 14 => true
			// 8  => false
			// 10 => false
			// 20 => true
			// 21 => false
			bool result = isNumberInRange(17);
		}
	};
}
