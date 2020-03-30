/***



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

int arr[100];

void printAnswer(int n)
{

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main()
{
    int n = 1000, j;


    // Complexity of these code is O(sqrt(n))
    j = 0;

    // divide n by 2 until n becomes even
    while(n%2==0)
    {
        arr[j++] = 2;
        n = n/2;
    }
    int limit = sqrt(n);
    for(int i= 3; i<= limit; i = i+2)
    {
        // divide n by i until n is divisible by i
        while(n%i==0)
        {
            arr[j++] = i;
            n = n/i;
        }
    }

    printAnswer(j);



    return 0;
}
