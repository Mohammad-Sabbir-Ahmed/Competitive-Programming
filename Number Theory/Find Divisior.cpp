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


int arr[100];

void printAnswer(int n){

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){

    int n = 630, j=0;

    // We will omit complexity of printAnser function to understand following 2 technique

    //finding divisors of n, complexity  O(n)
    for(int i=1; i<=n; i++){
        if(n%i==0){
            arr[j++] = i;
        }
    }
    printAnswer(j);

    int limit = sqrt(n);
    j=0;

    //finding divisors of n, complexity  O(sqrt(n))
    for(int i=1; i<=limit; i++){
        if(n%i==0){
            arr[j++] = i;
            arr[j++] = n/i;
        }
    }
    sort(arr, arr+j);
    printAnswer(j);



return 0;
}
