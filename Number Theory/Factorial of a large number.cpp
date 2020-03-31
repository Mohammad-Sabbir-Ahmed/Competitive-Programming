/***



***/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <sstream>
#include <queue>

using namespace std;

#define MAX 10000

int multiply(int x, int res[], int res_size)
{

    int carry =0;

    for(int i = 0; i<res_size; i++)
    {
        int prod = (res[i] * x) +carry;
        res[i] = prod %10;
        carry = prod/10;
    }

    while(carry)
    {
        res[res_size] = carry % 10;
        carry = carry/10;
        res_size++;
    }

    return res_size;

}


void findFactorialOf(int n)
{

    int res[MAX];

    res[0] = 1;
    int res_size = 1;

    for(int i=2; i<=n; i++)
    {
        res_size = multiply(i, res, res_size);
    }

    cout << "Factorial of " << n << " is: " ;
    for(int i=res_size-1; i>=0; i--)
    {
        cout << res[i];
    }
    cout << endl;
}

int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    int n = 100;

    findFactorialOf(n);

    return 0;
}
