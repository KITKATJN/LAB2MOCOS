#include "Header.h"

int main(int argc, char *argv[])
{
	//std::vector < std::complex < double>> signal = ReadSignal("C:/Users/lvuti/Desktop/t.txt");
	//srand(time(0));
	//std::vector < std::complex < double>> signaly = DPF(signal);
	//unsigned int DPF_time = clock();
	//for (size_t j = 0; j < size(signaly); j++)
	//{
	//	std::cout << "signalyDPF = "<<signaly[j] << std::endl;
	//}
	//std::vector < std::complex < double>> signalx = ODPF(signaly);
	//for (size_t j = 0; j < size(signalx); j++)
	//{
	//	std::cout << "signalxODPF = " << signalx[j] << std::endl;
	//}
	//unsigned int BPF_time_start = clock();
	//std::vector < std::complex < double>> signalxBPF = BPF(signal);
	//unsigned int BPF_time_end = clock();
	//for (size_t j = 0; j < size(signalxBPF); j++)
	//{
	//	std::cout << "signalyBPF = " << signalxBPF[j] << std::endl;
	//}
	//// double start_time = clock();

	//std::vector < std::complex < double>> signalyOBPF = OBPF(signalxBPF);
	//for (size_t j = 0; j < size(signalyOBPF); j++)
	//{
	//	std::cout << "signalyOBPF = " << signalyOBPF[j] << std::endl;
	//}
	////double end_time = clock(); // конечное время
	////double search_time = end_time - start_time; // искомое время
	////std::cout << "TIME = " << search_time << std::endl;
	//std::cout << "runtime DPF = " << DPF_time / 1000.0 << std::endl; // время работы программы  
	//std::cout << "runtime BPF = " << (BPF_time_end - BPF_time_start) / 1000.0 << std::endl; // время работы программы  

	//std::vector < std::complex < double>> signal2 = ReadSignal("C:/Users/lvuti/Desktop/t.txt");
	//std::vector < std::complex < double>> signal3 = ReadSignal("C:/Users/lvuti/Desktop/t.txt");

	
	std::vector < std::complex < double>> signal = ReadSignal("C:/Users/lvuti/Desktop/t.txt");
	std::vector < std::complex < double>> signal2 = ReadSignal("C:/Users/lvuti/Desktop/t2.txt");
	srand(time(0));
	unsigned int end1_time1 = clock();
	std::vector < std::complex < double>> svertkaS = svertka(signal, signal2);
	unsigned int end2_time2 = clock();
	std::cout << "runtime svertkaS = " << (end2_time2 -end1_time1)/ 10000.0 << std::endl;
	/*for (size_t j = 0; j < size(svertkaS); j++)
	{
		std::cout << "svertkaS = " << svertkaS[j] << std::endl;
	}*/

//	std::vector < std::complex < double>> sig = ReadSignal("C:/Users/lvuti/Desktop/t.txt");
	//std::vector < std::complex < double>> sig2 = ReadSignal("C:/Users/lvuti/Desktop/t.txt");
	unsigned int end1_time = clock();
	std::vector < std::complex < double>> trouble = Bsvertka(signal, signal2);
	unsigned int end2_time = clock();
	std::cout << "runtime svertka quick = " << (end2_time - end1_time) / 1000.0 << std::endl;
	/*for (size_t j = 0; j < size(trouble); j++)
	{
		std::cout << "svertkaB = " << trouble[j] << std::endl;
	}*/

	

	//readfromfile(argv[1]);
	return 0;
}