#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr;
    int n;
    cout<<"input n";
    cin>>n;
    cout<<"input elements";
   for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    arr.push_back(x);
}

int maxi=arr[0];
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    maxi=max(sum, maxi);
    if(sum<0){
        sum=0;
    }
    }
    cout<<maxi;
    return 0;

}
