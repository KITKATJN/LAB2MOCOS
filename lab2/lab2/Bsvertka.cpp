#include "Header.h"

std::vector < std::complex < double>> Bsvertka(std::vector < std::complex < double>> signal1,
	std::vector < std::complex < double>> signal2)
{
	int N;
	int sig1 = size(signal1);
	int sig2 = size(signal2);

	if (size(signal1) > size(signal2))
	{
		N = 2 * size(signal1);
	}
	else
	{
		N = 2 * size(signal2);
	}
	//N *= 2;
	signal1.resize(N);
	signal2.resize(N);

	signal1 = BPF(signal1);
	signal2 = BPF(signal2);


	std::vector < std::complex < double>> u(N);

	for (size_t i = 0; i < N; i++)
	{
		u[i] = sqrt(N) * signal1[i] * signal2[i] ;
	}

	u = OBPF(u);
	u.resize(sig1 + sig2 - 1);
	return u;
}