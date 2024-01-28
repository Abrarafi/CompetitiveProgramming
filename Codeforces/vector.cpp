#include<bits/stdc++.h>
using namespace std;
/*int main()
{
    vector<int> var;
    //initially var=[]
    var.push_back(10);
    //var=[10]
    var.push_back(20);
    //var=[10,20]
    var.push_back(30);
    //var=[10,20,30]
    for(int i=0;i<3;i++)cout<<var[i]<<endl;
    return 0;
}
*/
//resizable array
/*int main()
{
    vector <int> var;
    var.resize(10);
    var[0]=10;
    var[1]=20;
    var[2]=30;
    cout<<var[0]<<" "<<var[1]<<" "<< var[2]<<endl;
    var.resize(20); 
    cout<<var[0]<<" "<<var[1]<<" "<< var[2]<<endl;
    //same as before.
    return 0;

}*/
/*int main()
{
    vector <pair<int,int>> var;
    //var.emplace_back() is same as var.push_back();
    var.emplace_back(2,3);
}*/
/*int main()
{
    //initialization like array;
    vector<int> var ({10,20,30,40});
    for(int i=0;i<4;i++)cout<<var[i]<<endl;
    // another way
    vector<int> variable= {100,200,300,400};
    for(int i=0;i<4;i++)cout<<variable[i]<<endl;
    return 0;
    
}*/
/*int main()
{
    vector<int> var={10,20,30,40};
    //for first element
    cout<<var.front()<<endl;
    //for last element
    cout<<var.back()<<endl;
    return 0;
}*/
/*int main()
{
    //pointer of vector
    vector<int> var={10,20,30,40};
    //cout<<*var.begin()<<endl;
    //cout<<*(var.begin()+1)<<endl;
    //cout<<var[1]<<endl;//both gives the same output
cout<<*(var.end()-1)<<endl;

}*/
/*int main()
{
    //range based loop
    vector<int> var={10,20,30,40};
    //erase function 
    var.erase(var.begin()+1);
    //insert function
    var.insert(var.begin()+1,1000);
    for(unsigned or size_t i=0;i<var.size();i++)
    {
        cout<<var[i]<<endl;
    }
    
}*/
int main()
{
    //another method of output
    vector<int> var={10,20,30,40};
    for(int i:var){
        i+=1;
        cout<<i<<endl;
        
    }
    for(auto i:var)cout<<i<<endl;
    //for permanent change
    for(int &i:var){
        i+=1;
        cout<<i<<endl;
    }
    for(auto i:var)cout<<i<<endl;
    return 0;
}
