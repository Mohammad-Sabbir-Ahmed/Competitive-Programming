#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <cstdio>

#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <sstream>
#include <queue>

#define SIZE 25
#define BOUNDARY(i, j) (( i>=0 && i<r) && (j>=0 && j<c))

char grid[SIZE][SIZE];
bool visited[SIZE][SIZE];
int  counter;
int r, c, x, y;


int X[]= {-1, 0, 1, 0};
int Y[]= {0, -1, 0, 1};


using namespace std;

void dfs(int x, int y){
    for(int i=0; i<4; i++){
        if(BOUNDARY(x+X[i], y+Y[i]) && grid[x+X[i]][y+Y[i]] == '.' && !visited[x+X[i]][y+Y[i]]){
            visited[x+X[i]][y+Y[i]] = true;
            counter++;
            dfs(x+X[i],y+Y[i]);
        }
    }
}

int main() {
    freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int testCase;
    cin >> testCase;

    for(int t=1; t<=testCase; t++) {


        cin >> c >> r;
        memset(visited, 0, sizeof visited);

        getchar();

        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                grid[i][j] = getchar();
                if(grid[i][j] == '@'){
                    x = i;
                    y = j;

                    visited[x][y] = true;

                }
            }
            getchar();
        }
        counter=1;
        dfs(x,y);

        cout << "Case " << t << ": " << counter << endl;

    }


    return 0;
}

