#include<bits/stdc++.h>
using namespace std;

/* int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);   
} */

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int &i:v)cin>>i;
        int m=v[0];
        for(int j=1;j<n;j++)
        {
            m=gcd(m,v[j]);
        }
        cout<<m*n<<endl;
    }
	// your code goes here
	return 0;
}
