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


long long solve(){
    long long a, b, ans;

    cin>> a >> b;

    ans = a%b;

    if(a%b==0)
        return 0;
    return b - ans;

}

int main(){
//    freopen("in.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    long long t, ans;
    cin >> t;

    while(t--){

        ans = solve();

        cout << ans << endl;
    }

    return 0;
}
