#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    long long n = 600851475143;
    vector<int> pf;
    int count = 0;
    while(n%2 == 0)
    {
        n = n/2;
        count++;
    }
    if(count)
        pf.push_back(2);
    for(long long i=3; i<=sqrt(n); i++)
    {
        count = 0;
        while(n%i == 0)
        {
            count++;
            n = n/i;
        }
        if(count)
            pf.push_back(i);
    }
    if(n > 2)
        pf.push_back(n);
    sort(pf.begin(), pf.end());
    cout<<pf[pf.size()-1];
    return 0;
}