#include "pch.h"
#include "CppUnitTest.h"
#include "../number-tools/numberTools.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestsSMPonchev18
{
	TEST_CLASS(UnitTestsSMPonchev18)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			bool result;
			result=isNumberInRange(17);
		}
	};
}
