#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

#include <algorithm>
#include <iostream>
#include <vector>
#include <map>j
#include <set>
#include <string>
#include <sstream>
#include <queue>

using namespace std;

int main() {
 //   freopen("in.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    long long N, B, H, W, P, input, i, j;

    while(scanf("%lld %lld %lld %lld",&N, &B, &H, &W)!=EOF) {
        bool ok = false, seat_available;
        long long cost = 2000000;


        for( i=0; i<H; i++) {

            cin >> P;
            seat_available = false;

            for( j=0; j<W; j++) {

                cin >> input;

                if(input>=N) {
                    seat_available = true;
                    if(seat_available && P*N <=B) {
                        cost = min( cost, P*N);
                        ok = true;
                    }
                }

            }

//            if(seat_available && P*N <=B) {
//                cost = min( cost, P*N);
//                ok = true;
//            }
        }

        if(ok)
            cout << cost << endl;
        else
            cout << "stay home" << endl;
    }

    return 0;
}
