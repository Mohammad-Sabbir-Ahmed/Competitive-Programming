#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

#include <algorithm>v
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <sstream>
#include <queue>

using namespace std;

int main() {
    freopen("in.txt","r",stdin);
//    freopen("output.txt","w",stdo cut);

    int B, N;
    int monetary[22];
    int debtor, creditor, amount;

    while(scanf("%d %d", &B, &N)) {
        if(B && N) {

            for(int i=1; i<=B; i++)
                scanf("%d", &monetary[i]);

            for(int i=1; i<= N; i++) {
                scanf("%d %d %d", &debtor, &creditor, &amount);

                monetary[debtor] -= amount;
                monetary[creditor] += amount;
            }

            bool possible = true;

            for(int i=1; i<=B; i++) {
                if(monetary[i]<0) {
                    possible = false;
                    break;
                }
            }

            if(possible)
                cout << "S" << endl;
            else
                cout << "N" << endl;
        }
       else
            break;
    }

    return 0;
}
