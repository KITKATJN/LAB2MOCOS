#include "Header.h"


std::vector < std::complex < double>> OBPF(std::vector < std::complex < double>> X)
{
	for (size_t k = 0; k < size(X); k++)
	{
		X[k] = std::conj(X[k]);
	}
	int n = log2(size(X));
	std::complex<double> _i(0, 1);
	std::vector < std::complex < double>>Y(size(X));
	std::complex < double> w;
	std::complex < double> w1;
	for (size_t k = 1; k <= n; k++)
	{
		w1 = exp(-2 * M_PI * _i / pow(2, k));
		for (size_t j = 0; j < pow(2, k - 1); j++)
		{
			w = pow(w1, j);
			for (size_t l = 0; l < pow(2, n - k); l++)
			{
				Y[j * pow(2, n - k) + l] = (X[j * pow(2, n - k + 1) + l] +
					w * X[j * pow(2, n - k + 1) + l + pow(2, n - k)]);
				Y[pow(2, n - 1) + j * pow(2, n - k) + l] =
					(X[j * pow(2, n - k + 1) + l] - w *
						X[j * pow(2, n - k + 1) + l + pow(2, n - k)]);
			}

		}
		X = Y;
	}
	for (size_t k = 0; k < size(X); k++)
	{
		Y[k] /= sqrt(size(X));
		Y[k] = std::conj(Y[k]);
	}

	return Y;
}