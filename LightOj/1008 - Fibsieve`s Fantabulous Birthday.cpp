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
    long long r, c, n, cas, k, root, diff;
    scanf (" %lld", &cas);
    for (k = 1; k <= cas; k++) {


        scanf (" %lld", &n);

        root = sqrt (n);

        cout << "Root: " << root << endl;
        printf("Root: %lld\n", root);
        diff = n - root * root;

        /// number = sqrt(number) * sqrt(number) ;
        if (diff == 0) {
            if (root % 2 == 0) {
                r = 1;
                c = root;
            } else {
                c = 1;
                r = root;
            }
        }

        else if (diff > root) {
            if (root % 2 == 0) {
                r = root + 1;
                c = root + 1 - (diff - root - 1);
            } else {
                r = root + 1 - (diff - root - 1);
                c = root + 1;
            }
        }

        else {
            if (root % 2 == 0) {
                r = n - root * root;
                c = root + 1;
            } else {
                r = root + 1;
                c = n - root * root;
            }
        }


        printf ("Case %lld: %lld %lld\n", k, c, r);


    }




    return 0;
}

