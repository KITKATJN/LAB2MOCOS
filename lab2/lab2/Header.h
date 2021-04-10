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
#define M_PI 3.14159265358979323846
std::vector < std::complex < double>> ReadSignal();
std::vector < std::complex < double>> DPF(std::vector < std::complex < double>> X);
std::vector < std::complex < double>> ODPF(std::vector < std::complex < double>> Y);
//double* readfromfile(char* path);

#endif // !HEADER_H
