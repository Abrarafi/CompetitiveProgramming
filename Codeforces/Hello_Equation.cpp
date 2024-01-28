#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x;
        cin>>x;
        double a;
        for(int i=1;i<sqrt(x);i++)
        {
            a=(((double)x-(2*(double)i))/(2+(double)i));
            if((double)a==abs((int)a) && a>0)
            {
                cout<<"YES"<<endl;
                return;
            }

        }
        cout<<"NO"<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
	// your code goes here
	return 0;
}
