#include <iostream>
#include <vector>
using namespace std;

int SumPrimeFactors(int num)
{
	int s = 1;
	for (int i=2; i*i<=num; i++)
	{
		int p = 1;
		while(num%i == 0)
		{
			p *= i;
			p++;
			num /= i;
		}
		s *= p;
	}
	if(num > 1)
		s *= num + 1;
	return s;
}

bool IsAbundant(int a) {
	return SumPrimeFactors(a) > a*2;
}

int Sum(bool nonSum[], int length) {
	int sum = 0;
	for (int i = 0; i < length; i++) {
		if (!nonSum[i]) {
			sum += i + 1;
		}
	}
	return sum;
}

int main()
{
	const int limit = 20161;
	vector<int> abundant;
	for (int i=12; i<=limit; i++)
		if (IsAbundant(i)) abundant.push_back(i);
		
	bool nonSumMask[limit] = {false};
	for(int a=0; a<abundant.size(); a++)
		for(int b=a; b<abundant.size(); b++)
			if (abundant[a]+abundant[b] < limit)
				nonSumMask[abundant[a] + abundant[b] - 1] = true;
	
	int sum = Sum(nonSumMask, limit);
	cout<<sum;
    return 0;
}