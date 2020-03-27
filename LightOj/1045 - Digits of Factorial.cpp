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

double logg[1000005];


int main(){
//    freopen("in.txt","r",stdin);
//    freopen("output.txt","w",stdout);

/// solution: https://shahidul-brur.blogspot.com/2017/05/lightoj-1045-digits-of-factorial.html

for(int i=1; i<=1000000; i++){
        /// finding number of digits for n! (n factorial)
        /// number of digit in n! = ceil(log10(n));
    logg[i] = logg[i-1] + log(i);
}

    int testCase;
    cin >> testCase;

    for(int t=1; t<=testCase; t++){
        long long n, base;

        cin >> n >> base;

       long long ans;
       ans = logg[n]/log(base)+1 ;
        cout << "Case " << t << ": " << ans << endl;
    }




    return 0;
}
