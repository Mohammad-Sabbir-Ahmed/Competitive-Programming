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




//void print() {
//    for(i=0; i<A; i++) {
//        cout << "|";
//        for(j=0; j<C; j++) {
//            cout <<arr[i][j] <<"|";
//        }
//        cout << endl;
//    }
//}


int main() {
   freopen("in.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    long long  A, C, i, j, input;
    while(scanf("%lld", &A)) {
        if(!A)
            return 0;

        else {
            scanf("%lld", &C);
//         cin >> A>> C;
            bool arr[A][C];
            long long counter=0;

            for(i=0; i<A; i++) {
                for(j=0; j<C; j++) {
                    arr[i][j] = true;
                }
            }
//    cout << "Before: " << endl;
//    print();

            for(i=0; i<C; i++) {
                cin >> input;
                for(j=0; j<A-input; j++) {
                    arr[j][i] = false;
                }
            }

//    cout << endl << endl << endl << "After: " << endl;
//    print();

            for(i=0; i<A; i++) {
//        cout << "I am in" << endl;
                for(j=0; j<C;) {
                    if(arr[i][j] ==  false) {
//                cout << "\tI am ininn" << endl;
                        counter++;
                        while(arr[i][j]==false) {
                            j++;
                        }
                    } else
                        j++;

                }
            }
//    cout << "\n\n\n\n";
            cout << counter << endl;
        }
    }


    return 0;
}
