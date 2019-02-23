#include <iostream>
using namespace std;
bool isPrime(int n)
{
    int div = 2;
    while(div < n)
    {
        if(n%div == 0)
            return false;
        ++div;
    }
    return div == n;
}
int main()
{
    int primeCount = 0, n = 1;
    while(primeCount < 10001)
    {
        if(isPrime(n++))
            ++primeCount;
    }
    --n;
    cout<<n;
    return 0;
}
