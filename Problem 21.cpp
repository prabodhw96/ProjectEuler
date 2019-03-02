#include <iostream>
using namespace std;

int d(int n)
{
    int res = 0;
    for(int i=1; i<n; i++)
        if(n%i == 0)
            res += i;
    return res;
}
int main()
{
    int sum = 0, b;
    for(int a=1; a<=10000; a++)
    {
        b = d(a);
        if(b>a && d(b)==a)
            sum += a + b;
    }
    cout<<sum;
    return 0;
}