#include<bits/stdc++.h>
using namespace std;
void swap(int &i,int &j)
{
    int temp;
    temp=i;
    i=j;
    j=temp;
}
int main()
{
    //pass by reference
    int i=10;
    int j=20;
    swap(i,j);
    cout<<i<<endl<<j<<endl;
    return 0;

}