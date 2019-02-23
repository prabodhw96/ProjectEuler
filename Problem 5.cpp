#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int lcm = 20;
    for(int i=1; i<=20; i++)
    {
        int sum = lcm;
        while(sum%i != 0)
            sum += lcm;
        lcm = sum;
    }
    cout<<lcm;
    return 0;
}