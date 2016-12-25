#include "CppUnitTest.h"
#include "binomial_coeff.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Codility_cpp
{		
	TEST_CLASS(binomial_coeff)
	{
	public:
		
		TEST_METHOD(binomial_coeff_solution)
		{
			Assert::AreEqual(-1, solution(3, 5));
			Assert::AreEqual(10, solution(5, 3));
			Assert::AreEqual(solution(40, 20), -1);
		}

	};
}