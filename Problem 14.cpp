#include <iostream>
using namespace std;
unsigned int collatz(int n)
{
    unsigned int result = n;
    if (result <= 1) return 1;
    if (result % 2 == 0) return 1+collatz(result/2);
    return 1+collatz(3*result+1);
}
int main()
{
  unsigned int ans = 0, val;
  for(unsigned int i=13; i<1000000; i++)
  {
    if(collatz(i) > ans)
    {
      ans = collatz(i);
      val = i;
    }
  }
  cout<<val;
  return 0;
}