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

long long  gcd(long long  a, long long  b){
    if(a==0)
        return b;
    return gcd(b%a, a);
}


int main(){
//    freopen("in.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    // if  a and b are two integer number then a*b = LCM(a,b) * GCD(a,b)
    long long a = 15, b = 25;
    long long result = gcd(a, b);

    cout << "GCD of " << a << " and " << b << " is: " << result << endl;
    result = (a*b) / result;
    cout << "LCM of " << a << " and " << b << " is: " << result << endl;

    return 0;
}
