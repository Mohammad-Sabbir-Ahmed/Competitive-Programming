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

int main() {
//    freopen("in.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    int testCase;

    cin >> testCase;

    for(int t=1; t<=testCase; t++) {


        long long n, ans=0, i, input;
        cin >> n;

        for(i=0; i<n; i++) {
            cin >> input;
            if(input>0) {
                ans+=input;
            }
        }
         cout << "Case " << t << ": "<< ans << endl;
    }



return 0;
}
