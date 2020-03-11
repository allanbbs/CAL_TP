/*
 * Factorial.cpp
 */

#include "Factorial.h"
#include <vector>
using namespace std;
int factorialRecurs(int n)
{
	if(n==0)
	    return 1;
	return n*factorialRecurs(n-1);

}

int factorialDinam(int n)
{
    vector<int> f(n+1);
    f[0] = 1;
    for(int i =1;i<=n;i++){
        f[i] = i*f[i-1];
    }
    return f[n];
    /*int res= 1;
    for(int i = 2;i<=n;i++){
        res*=i;
    }
    return res;*/
}
