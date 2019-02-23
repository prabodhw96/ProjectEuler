#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a, b, c;
    for(int i=0; i<1000; i++)
    {
        for(int j=i+1; j<1000; j++)
        {
            for(int k=j+1; k<1000; k++)
            {
                if(((i*i + j*j) == k*k) && i+j+k == 1000)
                {
                    a = i;
                    b = j;
                    c = k;
                    goto x;
                }
            }
        }
    }
    x:cout<<a*b*c;
    return 0;
}