/*
  Find the "Kth" max and min element of an array.
  1.  Sort.
  2.  Set.
  3.  MinHeap.
  4.  MaxHeap.
  5.  QuickSelect.
  6.  Map
*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int getKth_min(int arr[], int size, int k){
    map<int, int> mapping;
    
    for(int i=0; i<size; i++)
        mapping[arr[i]]+= 1;
        
    int freqSum = 0;
    map<int, int> :: iterator itr = mapping.begin();
    while(itr++ != mapping.end()){
        freqSum+= itr->second;
        if(freqSum >= k)
            return itr->first;
    }
    
    return INT_MAX;
}

int main(){
    
    int arr[] = {1,2,3,18,-1,6};
    int size = 6;
    int k = 6;
    
    int ans = getKth_min(arr, size, k-1);
    cout<<"min = "<<ans<<endl;
    
    return 0;
}
