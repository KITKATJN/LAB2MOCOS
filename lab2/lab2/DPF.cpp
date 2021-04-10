#include "Header.h"

std::vector < std::complex < double>> DPF(std::vector < std::complex < double>> X)
{
	std::vector < std::complex < double>> signalY(size(X));
	std::complex < double> y;
	for (size_t i = 0; i < size(X); i++)
	{
		y = 0;
		for (size_t j = 0; j < size(X); j++)
		{
			y += X[j] * exp(-2 * M_PI * i * j / size(X) * std::complex<double>(0, 1));
		}
		y = y / sqrt(size(X));
		signalY[i] = y;
	}
	return signalY;
}