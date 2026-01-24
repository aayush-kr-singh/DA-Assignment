#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>&arr,int low,int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if (arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
}
swap(arr[i+1],arr[high]);
return i+1;
}

    void quicksort(vector<int>& arr, int low, int high){           
    if(low<high){
        int pivot=partition(arr,low,high);
        quicksort(arr,low,pivot-1);
        quicksort(arr,pivot+1,high);
    }
    }

int main(){
    vector<int>arr={4,2,6,9,2};
    quicksort(arr,0,arr.size()-1);
    for(int x:arr)
    cout<<x<<" ";
        return 0;
}
