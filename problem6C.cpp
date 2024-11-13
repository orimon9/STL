#include<iostream>
#include<vector>
using namespace std;


pair<int,int>abChocolate(int n, vector<int>&times)
{
    int l=0; //pointer for alice
    int r=n-1; //pointer for bob

    int a_t=0; // time spend by alice

    int b_t=0; //time spend by bob
    int a_c=0; //bar consumed by alice
    int b_c=0;

    while(l<=r){

        if(a_t<= b_t){

            a_t +=times[l];
            a_c++;
            l++;
        }
        else{

            b_t +=times[r];
            b_c++;
            r--;
        }
    }
    return {a_c,b_c};


}

int main(){
int n;
cin>>n;
vector<int>times(n);
for(int i=0;i<n;i++){

    cin>>times[i];
}

pair<int,int>r=abChocolate(n,times);
cout<<r.first<<" "<<r.second<<endl;
return 0;

}
