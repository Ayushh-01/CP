#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int start, int mid, int end){
    
    vector<int> temp;
    
    int i = start;
    int j = mid+1;
    
    while(i <= mid && j <= end){
        
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i++]);
        }
        else {
            temp.push_back(arr[j++]);
        }
    }    
    
    while(i <= mid){
        temp.push_back(arr[i++]);
    }
    
    while(j <= end){
        temp.push_back(arr[j++]);
    }
    
    for(int i = start ; i <= end; i++){
        arr[i] = temp[i-start];
    }
}
void mergeSort(vector<int> &arr, int start, int end){
    
    if(start >= end) return;
    
    int mid = (start+end)/2;
    
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    
    merge(arr,start,mid,end);
    
}

int main() {
    
	// implementig the Merge Sort 
	
	vector<int> arr = {1,22,34,12,78,44,34};
	
	int n = arr.size();
	
	mergeSort(arr,0,n-1);
	
	for(int i : arr){
	    cout << i << " ";
	}

}
