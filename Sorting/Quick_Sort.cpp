#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int start, int end){
    
    int pivot = arr[end];
    int i = start-1;
    
    for(int j = start; j<end; j++){
        if(arr[j] <= pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[end]);
    return i+1;
    
}

void quickSort(vector<int> &arr, int start, int end){
    if(start >= end) return;
    
    int pi = partition(arr,start,end);
    
    quickSort(arr,start,pi-1);
    quickSort(arr,pi+1,end);
    
}

int main(){
    
    //Implementing Quick Sort 
    
    vector<int> arr = {22,34,34,1,78,12,44};
    
    int n = arr.size();
    
    quickSort(arr,0,n-1);
    
    for(int i : arr){
        cout << i << " ";
    }
    
    return 0;
}