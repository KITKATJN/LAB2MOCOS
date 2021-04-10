#include "Header.h"

std::vector < std::complex < double>> ODPF(std::vector < std::complex < double>> Y)
{
	std::vector < std::complex < double>> signalX(size(Y));
	std::complex < double> x;
	for (size_t i = 0; i < size(Y); i++)
	{
		x = 0;
		for (size_t j = 0; j < size(Y); j++)
		{
			x += Y[j] * exp(2 * M_PI * i * j / size(Y) * std::complex<double>(0, 1));
		}
		x = x / sqrt(size(Y));
		signalX[i] = x;
	}
	return signalX;
}