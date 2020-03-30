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

#define MAX_SIZE 1001
bool prime[MAX_SIZE]; // initially all members of prime array are false


void printPrime()
{
    for(int i=2; i<=MAX_SIZE; i++)
    {
        if(prime[i])
        {
            cout << i << " ";
        }
    }
    cout << endl;
}


int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    // assign true to all index of prime array
    memset(prime, true, sizeof(prime));
    // assign false to the first and second index of prime array
    prime[0] = false;
    prime[1] = false;

    int limit = sqrt(MAX_SIZE); // check until i*i = MAX_SIZE

    // complexity of this method is  O(log(log(n)))
    // index i started from 2 because we 0, 1 is not prime we know
    for(int i=2; i<=limit; i++)
    {
        if(prime[i])  // if prime[i] == true ;
        {
            for(int j= i*i; j<=MAX_SIZE; j=j+i)
                prime[j] = false; // assign false value at index j of prime array
        }

    }
    // print prime numbers
    printPrime();

    return 0;
}
