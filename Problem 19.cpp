#include <iostream>
using namespace std;
int main()
{
    int ans=0, temp=1;
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for(int year=1901; year<=2000; year++)
    {
        for(int month=0; month<12; month++)
        {
            if(year%4==0 && month==1)
            {
                for(int day=1; day<=29; day++)
                {
                    temp++;
                    if(temp == 7)
                    {
                        if(day == 1) ans++;
                        temp = 0;
                    }
                }
            }
            else
            {
                for(int day=1; day<=days[month]; day++)
                {
                    temp++;
                    if(temp == 7)
                    {
                        if(day == 1) ans++;
                        temp = 0;
                    }
                }
            }
        }
    }
    cout<<ans;
    return 0;
}