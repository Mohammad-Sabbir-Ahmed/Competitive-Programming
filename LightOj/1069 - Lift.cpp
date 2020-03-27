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

int main(){
//    freopen("in.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    int testCase;

    cin >> testCase;

    for(int t=1; t<=testCase; t++){
        int me, liftPosition;
        cin >> me >> liftPosition;
        cout << "Case " << t << ": " ;

        int ans = 0;
        ans += (abs(me-liftPosition)*4) + 19 + (me*4);

        cout << ans << endl;
    }


    return 0;
}
