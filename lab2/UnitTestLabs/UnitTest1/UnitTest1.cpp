#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\8181881\source\repos\UnitTestLabs\UnitTestLabs\Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			//Arrange
			string expected = "0\0";
			//Act
			string actual = prg(1, 1, 1, 1, 1, 10);
			//Asset
			Assert::AreEqual(expected,actual);
		}


		TEST_METHOD(TestMethod2)
		{
			//Arrange
			string expected = "1 -1 1\0";
			//Act
			string actual = prg(1, 1, 1, 1, 1, 1);
			//Asset
			Assert::AreEqual(expected,actual);
		}


		TEST_METHOD(TestMethod3)
		{
			//Arrange
			string expected = "2 1 1\0";
			//Act
			string actual = prg(5, -4, 5, 0, 1, 5);
			//Asset
			Assert::AreEqual(expected,actual);
		}

		TEST_METHOD(TestMethod4)
		{
			//Arrange
			string expected = "4 1\0";
			//Act
			string actual = prg(0, 5, 0, 5, 5, 5);
			//Asset
			Assert::AreEqual(expected,actual);
		}

		TEST_METHOD(TestMethod5)
		{
			//Arrange
			string expected = "3 1\0";
			//Act
			string actual = prg(5, 0, 5, 0, 5, 5);
			//Asset
			Assert::AreEqual(expected,actual);
		}

		TEST_METHOD(TestMethod6)
		{
			//Arrange
			string expected = "5\0";
			//Act
			string actual = prg(0, 0, 0, 0, 0, 0);
			//Asset
			Assert::AreEqual(expected,actual);
		}
	};
}
