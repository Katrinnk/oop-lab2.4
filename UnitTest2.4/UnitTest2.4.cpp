#include "pch.h"
#include "CppUnitTest.h"
#include "..//Vector.h"
#include "Z:/university/ооп/програми/2.4/Vector.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Vector a(2);
			a[1] = 1;
			a[2] = 5;
			Assert::AreEqual(a[2], 5);
		}
	};
}
