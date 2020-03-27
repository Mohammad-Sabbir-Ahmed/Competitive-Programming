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
    freopen("in.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    int testCase;
    cin >> testCase;

    for(int t=1; t<=testCase; t++){
        double n, circle, square, ans, PI;
        cin >> n;
        PI = 2 * acos(0);
        circle = PI * n * n;
        square = (2*n) * (2*n);
        ans = square - circle;
//        cout << "Case " << t << ": " << ans << endl;
        cout << "Case " << t;
        printf(": %.2lf\n", ans);

    }





    return 0;
}
