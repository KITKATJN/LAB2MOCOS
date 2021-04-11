#include "Header.h"


std::vector < std::complex < double>> svertka(std::vector < std::complex < double>>x, std::vector < std::complex < double>>y)
{
	int a = size(x);
	int b = size(y);
	std::vector < std::complex < double>> result(a + b - 1);

	x.resize(a + b - 1);
	y.resize(a + b - 1);


	for (size_t i = 0; i < result.size(); i++)
	{
		int i1 = i;
		std::complex<double> tmp = 0.0;

		for (size_t j = 0; j < b; j++)
		{
			if (i1 >= 0 && i1 <= a)
			{
				tmp = tmp + x[i1] * y[j];
			}
			i1 = i1 - 1;
			result[i] = tmp;
		}
	}
	return result;
}