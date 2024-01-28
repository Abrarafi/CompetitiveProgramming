#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
    long long n, k;
    cin>>n>>k;
    long long arr[n+2];
    arr[0]=0;
    for(long long i=1; i<n+1; i++) {
        cin>>arr[i];
    }
    arr[n+1]=k;
    sort(arr, arr+n+2);
    // for(long long i=0; i<n+2; i++) {
    //     cout << arr[i] << " "; 
    // }
    // cout << "\n";
    double lmax = arr[1]-arr[0];
    double rmax = arr[n+1]-arr[n];
    
    double max =0;
    for(long long i=0; i<n+1; i++) {
        if(arr[i+1]-arr[i]>max) {
            max = arr[i+1]-arr[i];
        } 
    }
    cout << fixed;
    if(max/2>lmax && max/2>rmax) {
        cout << max/2;
    }
    else {
        
        rmax > lmax ? cout << rmax : cout <<lmax;
    }
}
