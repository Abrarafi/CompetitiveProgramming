#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pi pair<int,int>
#define f first
#define sc second
#define ll long long
#define TestCase int testcase, cs=1; cin>>testcase;while(testcase--)
void sortr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
    for(int j=i+1;j<n;j++)
    {
        int temp;
        if(arr[i]>arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;

        }
     //cout<<arr[i];
    }   
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[9]={9,9,6,7,4,5,1,2,4};
     for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    /* for(int i=0;i<9;i++)
{
    for(int j=i+1;j<9;j++)
    {
        int temp;
        if(arr[i]>arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;

        }
    }   
    }
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //sortr(arr,9); */
    sort(arr+3,arr+9);
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}