#include "CppUnitTest.h"
#include "max_30_bit_int_cyc.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Codility_cpp
{
    TEST_CLASS(max_30_bit_int_cyc)
    {
    public:

        TEST_METHOD(max_30_bit_int_cyc_solution)
        {
            Assert::AreEqual(11, solution(9736));
        }

    };
}