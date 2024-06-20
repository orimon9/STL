#include<bits/stdc++.h>
using namespace std;

int main()

{
    vector<int> v ={5,3,3,4,1,1,2};

    sort(v.begin(), v.end(), greater<int>());

    for(auto u:v) cout<<u<<" ";
    cout<<endl;
}
