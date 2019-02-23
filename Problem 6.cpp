#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n = 100;
    int sum_of_squares = n*(n + 1)*(2*n + 1)/6;
    int squared_sum = (n*(n+1)/2)*(n*(n+1)/2);
    cout<<squared_sum - sum_of_squares;
    return 0;
}