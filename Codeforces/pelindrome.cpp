#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pi pair<int,int>
#define f first
#define sc second
#define ll long long
#define TestCase int testcase, cs=1; cin>>testcase;while(testcase--)
void reverseWord(string str){
    cin>>str;
    int n=str.size();
    int start=0;
    int end=n-1;
    while(start<end)
    {
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}
  //Your code here
void isPalindrome(string S)
	{
	    // Your code goes here
	    int n=S.size();
	    int mid=(n)/2;
	    string s1=S.substr(0,mid);
	    // string s2=S.substr(mid+1,n-1);
        cout<<s1<<endl;
	    /*reverseWord(s2);
	    if(s1==s2)
	    cout<<'1'<<endl;
	    else cout<<'0'<<endl;*/
	}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string S;
    cin>>S;
    isPalindrome(S);
    return 0;
}