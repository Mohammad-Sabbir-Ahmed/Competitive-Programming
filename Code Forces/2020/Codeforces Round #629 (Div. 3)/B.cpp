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


void solve()
{
    long long n, k, i;

    cin >> n >> k;

    string resultantString(n, 'a');

    long long last_bb_position = 0;

    for( i=1; i<=n; i++)
    {
        if( (i*(i+1)) /2 >= k )
            break;
        last_bb_position = (i*(i+1)) /2;
    }

    long long x = n - i - 1;
    long long y = n - (k - last_bb_position) ;

    resultantString[x] = resultantString[y] = 'b';

    cout << resultantString << endl;


}

int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    long long t, ans;
    cin >> t;

    while(t--)
    {
        solve();
    }

    return 0;
}
