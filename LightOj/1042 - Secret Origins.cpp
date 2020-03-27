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

vector <int> binary;

void converttoBinary(long long n) {
    long long ans=0;

    while(n) {
        binary.push_back(n%2);
        n /= 2;
    }

    /** pushing extra 0 at the end of the vector so that the binary value
     can hold larger number while permuted
     */

    binary.push_back(0);
}

long long converttodecimal() {
    long long ans = 0;

    long long exp = binary.size() -1;

    for(int i=0; i<binary.size(); i++) {
        if(binary[i] == 1) {
            ans += (long long) powl(2, exp);
        }
        exp--;
    }

    return ans;
}


int main() {
//    freopen("in.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    int testCase;
    cin >> testCase;

    for(int t=1; t<=testCase; t++) {
        long long n, ans1, ans2;
        cin >> n;

        binary.clear();


        converttoBinary(n);
        reverse(binary.begin(), binary.end());

        next_permutation(binary.begin(), binary.end());

        cout << "Case " << t << ": " << converttodecimal() << endl;


    }



    return 0;
}
