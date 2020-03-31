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

int factorialUsingRecursion(int n){
    // base case
    if(n == 0)
        return 1;

    return n * factorialUsingRecursion(n-1);
}

int factorialUsingIterativeFormula(int n){
    int result = 1, i;

    for(i=n; i>1; i--){
        result = result * i;
    }
    return result;
}



int main(){
//    freopen("in.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    //Time complexity of the above iterative solutions is O(n).
    int n = 5;

    int result = factorialUsingRecursion(n);
    cout << "Factorial using recursive formula: " << result << endl;
    result = factorialUsingIterativeFormula(n);
    cout << "Factorial using iterative formula: " << result << endl;

    return 0;
}
