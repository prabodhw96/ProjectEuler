#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> fib;
    fib.push_back(0);
    fib.push_back(1);
    int sum = fib[0];
    for(int i=2; ; i++)
    {
        int c = fib[i-1] + fib[i-2];
        if(c > 4000000)
            break;
        fib.push_back(c);
        if(c%2 == 0)
            sum += c;
    }
    cout<<sum;
    return 0;
}