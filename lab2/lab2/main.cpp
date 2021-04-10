#include "Header.h"

int main(int argc, char *argv[])
{
	std::vector < std::complex < double>> signal = ReadSignal();
	std::vector < std::complex < double>> signaly = DPF(signal);
	for (size_t j = 0; j < size(signaly); j++)
	{
		std::cout << "signaly = "<<signaly[j] << std::endl;
	}
	std::vector < std::complex < double>> signalx = ODPF(signaly);
	for (size_t j = 0; j < size(signalx); j++)
	{
		std::cout << "signalx = " << signalx[j] << std::endl;
	}
	//readfromfile(argv[1]);
	return 0;
}