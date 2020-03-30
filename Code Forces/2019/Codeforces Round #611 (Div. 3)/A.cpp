#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <sstream>
#include <queue>
#include <iterator>

#include <iostream>


using namespace std;



int main()
{
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
    long long t;
    long long h, m;

    scanf("%lld", &t);
    while(t--){
        scanf("%lld %lld", &h, &m);

        long long ans = 1440 - ((h*60) + m);
        printf("%d\n", ans);
    }




    return 0;
}
