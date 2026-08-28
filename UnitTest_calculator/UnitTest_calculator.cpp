#include "pch.h"
#include "CppUnitTest.h"
#include "../Calculator/Calculator.h"
#include <stdexcept>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorTests
{
    TEST_CLASS(CalculatorTests)
    {
    public:

        TEST_METHOD(AddsTwoNumbers)
        {
            Assert::AreEqual(5.0, add(2.0, 3.0), 0.0001);
        }

        TEST_METHOD(SubtractsTwoNumbers)
        {
            Assert::AreEqual(2.0, subtract(5.0, 3.0), 0.0001);
        }

        TEST_METHOD(MultipliesTwoNumbers)
        {
            Assert::AreEqual(12.0, multiply(4.0, 3.0), 0.0001);
        }

        TEST_METHOD(DividingByZeroThrowsException)
        {
            Assert::ExpectException<std::invalid_argument>([]
                {
                    divide(10.0, 0.0);
                });
        }
    };
}
