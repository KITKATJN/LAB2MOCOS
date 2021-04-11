#pragma once
#ifndef HEADER_H
#define HEADER_H

#include <fstream> 
#include <iostream>
#include <cstring> 
#include <stdio.h>
#include <fstream>
#include <complex>
#include <vector>
#include <cmath>
#include <ctime>
#include <string>
#define M_PI 3.14159265358979323846
std::vector < std::complex < double>> ReadSignal(std::string path);
std::vector < std::complex < double>> DPF(std::vector < std::complex < double>> X);
std::vector < std::complex < double>> ODPF(std::vector < std::complex < double>> Y);
std::vector < std::complex < double>> BPF(std::vector < std::complex < double>> X);
std::vector < std::complex < double>> OBPF(std::vector < std::complex < double>> Y);
std::vector < std::complex < double>> svertka(const std::vector < std::complex < double>> x_x, const std::vector < std::complex < double>> y_y);
std::vector < std::complex < double>> Bsvertka(std::vector < std::complex < double>> signal1, std::vector < std::complex < double>> signal2);
//double* readfromfile(char* path);

#endif // !HEADER_H
