#include "Header.h"

std::vector < std::complex < double>> Bsvertka(std::vector < std::complex < double>> signal1,
	std::vector < std::complex < double>> signal2)
{
	int N;

	int M = signal1.size();
	int L = signal2.size();

	if (signal1.size() > signal2.size())
	{
		N = 2 * signal1.size();
	}
	else
	{
		N = 2 * signal2.size();
	}


	signal1.resize(N);
	signal2.resize(N);

	signal1 = BPF(signal1);
	signal2 = BPF(signal2);

	std::vector < std::complex < double>> u(N);

	for (size_t i = 0; i < N; i++)
	{
		u[i] = sqrt(2 * N) * signal1[i] * signal2[i] ;
	}

	u = OBPF(u);
	//u.resize(M + L - 1);
	return u;
}