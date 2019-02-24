#include <iostream> 
using namespace std;
unsigned long lattice_path(int a, int b)
{
    unsigned long dp[a][b];
    for(int i=0; i<a; i++)
        for(int j=0; j<b; j++)
            dp[i][j] = 0;
    for(int i=0; i<a; i++)
        dp[i][0] = i+2;
    for(int i=0; i<b; i++)
        dp[0][i] = i+2;
    for(int i=1; i<a; i++)
        for(int j=1; j<b; j++)
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
    return dp[a-1][b-1];
 }
int main() 
{ 
	cout<<lattice_path(20, 20);
	return 0; 
} 
