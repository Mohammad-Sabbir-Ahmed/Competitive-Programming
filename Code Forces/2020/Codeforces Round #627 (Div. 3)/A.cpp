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

void solve(){
          int n;
        cin >> n;
        int arr[n];

        for(int i=0; i<n; i++)
            cin >> arr[i];

        for(int i=0; i<n-1; i++){
            if(arr[i]%2 != arr[i+1]%2)
            {
                cout<< "NO" << endl;
                return;
            }
        }
        cout<< "YES" << endl;
}

int main(){
//    freopen("in.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    int tc;

    cin >> tc;

    while(tc--){
        solve();
    }



    return 0;
}
