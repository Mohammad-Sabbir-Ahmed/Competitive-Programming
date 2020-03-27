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
        int X1, X2, Y1, Y2;

        cin >> X1 >> Y1 >> X2 >> Y2;

        int n;
        cin >> n;

        cout << "Case " << t << ":" << endl;

        while(n--){
            int x, y;
            cin >> x >> y;

            if((x>=X1 && x<=X2) && (y>=Y1 && y<=Y2)){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }
    }





    return 0;
}
