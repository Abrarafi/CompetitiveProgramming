#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    vector<vector<int>> graph = {
        {0, 0, 0, 1}, 
        {1, 0, 1, 1}, 
        {1, 0, 0, 1},
        {0, 0, 1, 0}
        };
        
    int n = 4;
    vector<vector<int>> dist = graph;

    for(int k=0; k<n; k++) {
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                dist[i][j] = dist[i][j] | (dist[i][k] & dist[k][j]);
            }
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++)
            cout << dist[i][j] << " ";
        cout << endl;
    }
    return 0;
}