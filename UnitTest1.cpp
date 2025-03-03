#include "pch.h"
#include "CppUnitTest.h"
#include "../lab71/lab7__1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            int a[3][2] = { {1, 2}, {3, 4}, {7, -2} };

            int** dynamicArray = new int* [3];
            for (int i = 0; i < 3; ++i) {
                dynamicArray[i] = new int[2];
                for (int j = 0; j < 2; ++j) {
                    dynamicArray[i][j] = a[i][j];
                }
            }

            int count = FindCountOfEllementsWhichAreCorrect(dynamicArray, 3, 2);

            int expectation = 5;

            Assert::AreEqual(expectation, count);
		}
	};
}
