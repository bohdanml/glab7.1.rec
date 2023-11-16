#include "pch.h"
#include "CppUnitTest.h"
#include "..//lab7.1.rec/lab.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestSort)
		{
			// Arrange
			const int rowCount = 3;
			const int colCount = 3;
			int** a = new int* [rowCount];
			for (int i = 0; i < rowCount; i++)
				a[i] = new int[colCount];

			//  матриця з відомим порядком
			a[0][0] = 3; a[0][1] = 4; a[0][2] = 5;
			a[1][0] = 2; a[1][1] = 7; a[1][2] = 8;
			a[2][0] = 1; a[2][1] = 6; a[2][2] = 9;

			// Act
			Sort(a, rowCount, colCount);


			// Clean up
			for (int i = 0; i < rowCount; i++)
				delete[] a[i];
			delete[] a;

		}
	};
}
