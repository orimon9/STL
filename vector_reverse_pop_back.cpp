#include<bits/stdc++.h>
using namespace std;

int main()

{
    vector<int> v {2,3,4,5};

    reverse(v.begin(), v.end());
    while(!v.empty()){

        cout<<v.back()<<endl;
        v.pop_back();
    }


    cout<<endl;
}

