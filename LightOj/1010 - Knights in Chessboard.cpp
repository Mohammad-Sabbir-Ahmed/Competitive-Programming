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
        int m, n, ans;

        cin >> m >> n;

        if(m==1 || n==1){
            ans = max(m, n);
        }else if(m==2){
            ans = ((n/4)*4);

            if(n%4 == 1)
                ans+=2;
            if(n%4>1)
                ans+=4;
        }else if(n==2){
            ans = ((m/4)*4);

            if(m%4 == 1)
                ans+=2;
            if(m%4>1)
                ans+=4;
        }else{
            ans = ((m*n)+1)/2;
        }

        cout << "Case " << t << ": " << ans << endl;

    }





    return 0;
}
