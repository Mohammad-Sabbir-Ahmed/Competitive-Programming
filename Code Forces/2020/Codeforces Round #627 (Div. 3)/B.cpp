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


int n;
int arr[5000];

void solve() {

    for(int i=0; i<n-2; i++) {
        for(int j = i+2; j<n; j++) {
            if( arr[i] == arr[j] ) {
                printf("YES\n");
                return;
            }
        }
    }
    printf("NO\n");
}

int main() {
//    freopen("in.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    int tc;
    cin >> tc;

    while(tc--) {
        cin >> n;
        for(int i=0; i<n; i++)
            cin >> arr[i];
        solve();
    }

    return 0;
}
