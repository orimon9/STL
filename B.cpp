#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n;

    std::cin>>n; //input size of array

    std::vector<int>arr(n); //init vector of the size  n

    for(int i=0;i<=n;i++){
        std::cin>>arr[i]; //input element array
    }

    std::reverse(arr.begin(), arr.end()); // reverse of the array using std::reverse

    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;

}
