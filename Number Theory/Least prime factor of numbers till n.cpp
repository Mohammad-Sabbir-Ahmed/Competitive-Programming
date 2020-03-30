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

void findLeastPrime(int n)
{
    // declare a vector and assign 0 to all entries
    vector <int> leastPrime(n+1, 0);

    // assign 1 to leastPrime[1] because we will omit this
    leastPrime[1] = 1;

    for(int i=2; i<=n; i++)
    {
        if(leastPrime[i]==0) // if there is no prime assigned to LeastPrime[i] then
        {
            leastPrime[i] = i;  // assign as i is the least prime for leastPrime[i]
            for(int j=2*i; j<=n; j=j+i)
            {
                if(leastPrime[j] == 0)  // if there is no prime assigned to leastPrime[j] then
                    leastPrime[j] = i;
            }
        }
    }

    for(int i=1; i<=n; i++)
        cout << "Least prime of " << i << " is: " << leastPrime[i] << endl;

}

int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    int n = 10;
    findLeastPrime(n);

    return 0;
}
