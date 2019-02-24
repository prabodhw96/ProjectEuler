#include <iostream>
#include <cmath>
using namespace std;
int count_div(int x)
{
    int count = 0;
    for(int i=1; i<=sqrt(x); i++)
    {
        if(x%i == 0)
        {
            if(x/i == i)
                count++;
            else
                count += 2;
        }
    }
    return count;
}
int main()
{
    int tn;
    for(int i=1; ; i++)
    {
        tn = i*(i+1)/2;
        if(count_div(tn) >= 500)
            break;
    }
    cout<<tn;
    return 0;
}