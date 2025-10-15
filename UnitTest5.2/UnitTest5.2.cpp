#include "pch.h"
#include "CppUnitTest.h"
#include "../5.2/5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:
        
		TEST_METHOD(TestMethod1)
		{
            int x = 1;
            double eps = 0.00001;
            int n = 10; 
            double s = 0.0;

           
            double expected = exp(-x);

            double actual = S(x, eps, n, s);

         
            Assert::AreEqual(expected, actual, eps);
        }
    };
}