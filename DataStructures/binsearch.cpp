#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    int low = 0;
    int up = n-1;
    int mid=(low+up)/2;
    int src;
    cin>>src;
    int found=0;
    while(low<=up){
            mid=(low+up)/2;
        if(a[mid] == src)
           { cout<<mid+1<<endl;found=1;break;}
       else if(a[mid]<src){
            low = mid+1;
      
        }
        else{
            up = mid-1;
        }
        }
        if(!found)cout<<"not found"<<endl;
}