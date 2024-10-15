#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.2.it/Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int test1[] = { 1, 2, 3, 4, 5 };
			int sum = 0;
			for (int i = 0; i < 5; i++) {
				if (test1[i] % 2 != 0) {
					sum += test1[i];
				}
			}
			Assert::AreEqual(sum, 9);
		}
	};
}
