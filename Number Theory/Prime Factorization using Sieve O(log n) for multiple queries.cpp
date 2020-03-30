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


#define MAXN 100001


int spf[MAXN];

void sieve(){

    spf[1] = 1;                             // initialize 1 as a prime

    for(int i=2; i<=MAXN; i++)              // initialize every number from 2 to MAXN as prime
        spf[i] = i;

    for (int i=4; i<=MAXN; i+=2)            // assign 2 as least prime factor for every even number up to MAXN except 2
        spf[i] = 2;

    int limit = sqrt(MAXN);

    for(int i=3; i<=limit; i++){

        if(spf[i] == i){                    // is i is prime then

            for(int j=2*i; j<=MAXN; j+=i){  // find all numbers divided by j ans assign j as there least prime factor
                if (spf[j]==j)              // if j is not marked yet then
                    spf[j] = i;
            }
        }
    }

}


vector <int> findPrimeFactorsOf(int n){  // find prime factors of n

    vector <int> result;

    while(n!=1){                    // divide n by it's smallest prime factor until it turn to 1
        result.push_back(spf[n]);   // store its least prime factor to result vector
        n = n  / spf[n];
    }
    return result;
}

int main(){
//    freopen("in.txt","r",stdin);
//    freopen("output.txt","w",stdout);


    sieve();  // find smallest prime factor for every number from 1 to MAXN

    int n = 12246;

    cout << "Prime factors of " << n << " are: ";

    vector <int> answer = findPrimeFactorsOf(n); // find prime factors of n


    for(int i=0; i<answer.size(); i++)  // print prime factors of n
        cout << answer[i] << " ";
    cout << endl;


    return 0;
}
