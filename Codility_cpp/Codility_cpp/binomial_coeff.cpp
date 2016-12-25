#include "binomial_coeff.h"
#define LIMIT 1000000000

int solution(int n, int k)
{
	int result = 1;
	if (n < k)
		result = -1;
	else if (n == k || k == 0)
		result = 1;
	else
	{
		for (int i = 1; i <= k; i++)
		{
			if (result > LIMIT / ((n + 1 - i) / i))
			{
				result = -1;
				break;
			}

			result *= (n + 1 - i) / i;
		}
	}
	return result;
}
