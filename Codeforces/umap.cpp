#include<bits/stdc++.h>
using namespace std;
int main()
{
    // ...set up arr
    int arr[8]={1,1,2,2,2,4,5,4};
int count = 0;
unordered_set<int> salaries;
for (int i = 0; i < 8; i ++) {
    if (salaries.count(arr[i]) > 0) {
        // it's a duplicate
        cout<<i<<" ";
    }
    salaries.insert(arr[i]);
}
// do more stuff
}