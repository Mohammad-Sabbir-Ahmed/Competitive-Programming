/***

        ACCEPTED

***/

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

bool ifMirrorChar(char c)
{

    if(c=='A' || c=='H' || c=='I' ||c=='M' || c=='O' || c=='T' || c=='U' || c=='V' || c=='X' || c=='Y' || c=='W')
        return true;
    else
        return false;
}

void solve()
{
    char str[1100];
    cin >> str;

    int len = strlen(str);
    bool mirror = true;

    for(int i=0; i<=len/2; i++){
        if( ( str[i] != str[len - i-1] ) || (!ifMirrorChar(str[i]) )){
            mirror = false;
            break;
        }
    }

    if(mirror)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}


int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }

    return 0;
}
