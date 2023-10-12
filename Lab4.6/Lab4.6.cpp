#include <iostream>
#include <cmath>

using namespace std;
int main() {
	double P, S;
	int k, i;

	S = 0;
	i = 1;
	while (i <= 3)
	{
		P = 1;
		k = 1;
		while (k <= pow(i, 2))
		{
			P *= k;
			k++;
		}
		S += sqrt(pow(i, 2) + P) / i;
		i++;
	}
	cout << S << endl;

	S = 0;
	i = 1;
	do
	{
		P = 1;
		k = 1;
		do
		{
			P *= k;
			k++;
		} while (k <= pow(i, 2));
		S += sqrt(pow(i, 2) + P) / i;
		i++;
	} while (i<=3);
	cout << S << endl;


	S = 0;
	for (i = 1; i <= 3; i++)
	{
		P = 1;
		for (k = 1; k <= pow(i, 2); k++)
		{
			P *= k;
		}
		S += sqrt(pow(i, 2) + P) / i;
	}
	cout << S << endl;

	S = 0;
	for (i = 3; i >= 1; i--)
	{
		P = 1;
		for (k = pow(i, 2); k >= 1; k--)
		{
			P *= k;
		}
		S += sqrt(pow(i, 2) + P) / i;
	}
	cout << S << endl;

	return 0;
}