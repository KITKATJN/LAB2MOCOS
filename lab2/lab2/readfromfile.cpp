#include "Header.h"


std::vector < std::complex < double>> ReadSignal()
{
	std::ifstream file;
	file.open("C:/Users/lvuti/Desktop/t.txt");

	std::size_t count = 0;
	double x;
	while (file >> x) count++;
	std::cout << "count = " << count << std::endl;
	std::vector < std::complex < double>> signal(count / 2);
	double tmp;
	file.close();
	file.open("C:/Users/lvuti/Desktop/t.txt");
	for (size_t i = 0; i < count; i++)
	{
		file >> tmp;

		if (i % 2 == 0)
		{
			signal[i / 2].real(tmp);
		}
		else
		{
			signal[i / 2].imag(tmp);
		}
		std::cout << "signal = " << signal[i / 2] << " i = " << i << std::endl;
	}

	file.close();
	return signal;
}