#include "Header.h"

using namespace std;
vector<double> conv(const vector<double>& x, const vector<double>& y) 
{
	vector<double> result(x.size() + y.size() - 1);
	for (size_t i = 0; i < result.size(); i++) 
	{
		for (size_t j = 0; j < y.size(); j++) 
		{
			if (i < j + x.size())
			{
				result[i] += x[i - j] * y[j];
			}
		}
	}
	return result;
}