#include<bits/stdc++.h>
using namespace std;

int main()

{
    vector<int> v ={5,3,1,4};
    sort(v.rbegin(), v.rend());

    for(auto u:v) cout<<u<<" ";
    cout<<endl;
}
