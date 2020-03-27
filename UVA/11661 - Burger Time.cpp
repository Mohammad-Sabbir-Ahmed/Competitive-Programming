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

int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    int L;

    while(cin>>L, L!=0){

        string str;

        cin >> str;

        int minDistance = L;
        int lastD = -L;
        int lastR = -L;

        // linearly scan the highway
        for(int i=0; i<L; i++){
            if(str[i]=='Z'){
                minDistance = 0;
                break;
            }
            else if(str[i]=='R'){
                minDistance = min(minDistance, i-lastD);
                lastR = i;
            }
            else if(str[i]=='D'){
                minDistance = min(minDistance, i-lastR);
                lastD = i;
            }
        }

        cout << minDistance << endl;
    }

    return 0;
}
