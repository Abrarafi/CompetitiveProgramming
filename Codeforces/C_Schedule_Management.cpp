#include <bits/stdc++.h>
using namespace std;



int main() 
{   
    int k;
    cin>>k;
    while(k--){
     int n,m;
     cin>>n>>m;
     
     vector <int> v(m);
     
     for(int i=0;i<m;i++)
     {
       cin>>v[i];
     }
     
     sort(v.begin(),v.end());
     
     vector <int> count;
     int c=1; int cmin=INT_MAX;
     long long sum=0;
     for(int i=0;i<m-1;i++){
     //  cout<<v[i]<<" "<<v[i+1]<<" ";
       if(v[i]==v[i+1]){
         c++;
       }
       else{
         count.push_back(c);
         sum+=c;
         cmin=min(cmin,c);
         c=1;
       }
     }
     count.push_back(c);
     sum+=c;
    
    //  cmin=min(cmin,c);
      int needhelp=0;
      int vacant=0;
      int notf=0;
     // int vacant
      //cout<<cmin;
      int len=count.size();
      
      for(int i=len;len<n;len++)
      count.push_back(0);
      
      int hr=0;
      vector <int> f(count.size());
      
      while(sum>0){
     for(int i=0;i<len;i++)
     {  
       if(count[i]>0){
         sum--;
         count[i]--;
       }
       else  if(count[i]==0&&f[i]==0){
           f[i]=1;
         }
         else{
           sum--;
           f[i]=0;
         }
         
     }
     
     hr++;
      }
     cout<<hr<<"\n";
    }
   // cout << "Hello, World!";
    return 0;
}
