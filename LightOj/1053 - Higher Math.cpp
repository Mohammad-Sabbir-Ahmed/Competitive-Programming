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

#define DEGTORAD(D)((D * PI) / 180.0) // Converts Degrees to radians
#define RADTODEG(R)((180.0 * R) / PI)//Converts Radians to Degrees


using namespace std;

int main(){
//    freopen("in.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int testCase;

    cin >> testCase;
    for(int t=1; t<=testCase; t++){
        int temp, a, b, c;

        cin >> a >> b >> c;
//        cout << a  <<" "<< b  <<" "<< c <<" "<< endl;

        if(b==max(a, max(b, c))){
            temp = c;
            c = b;
            b = temp;
        }
        if(a==max(a, max(b, c))){
            temp = c;
            c = a;
            a = temp;
        }

        int C;

        ///c*c = (a*a) +(b*b) - (2*a*b*cos(C));

        C = acos( ( (a*a)+(b*b)-(c*c)) / 2*a*b);
//        cout << "C: " << C << endl;
        if(C==1)
            cout << "Case " << t << ": " << "yes" << endl;
        else
            cout << "Case " << t << ": " << "no" << endl;


    }




    return 0;
}
