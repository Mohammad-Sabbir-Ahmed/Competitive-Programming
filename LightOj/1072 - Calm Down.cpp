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

#define PI acos(-1)

using namespace std;

int main(){
    freopen("in.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int testCase;
    cin >> testCase;

     cout << "PI: " << PI << endl;

    for(int t=1; t<=testCase; t++){
        double n;
        double R, ans;



        cin >> R >> n;
        cout << "R: " << R << " N: " << n << endl;

        ans /= sin(PI/n)* R/sin(PI/n);

//        cout << "Case " << t << ": " << ans << endl;
        cout << "Case " << t << ": " ;
        printf("%llf\n", ans);
    }





    return 0;
}
