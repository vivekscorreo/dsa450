/*
  Find the "Kth" max and min element of an array.
  1.  Sort.
  2.  Set.
  3.  MinHeap.
  4.  MaxHeap.
  5.  QuickSelect.
*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int getKth_min(priority_queue<int, vector<int>, greater<int>> minHeap, int k){
    while(--k){
        minHeap.pop();
    }
    return minHeap.top();
}

int main(){
    
    int arr[] = {1,2,3,18,-1,6};
    int size = 6;
    int k = 6;
    
    priority_queue<int, vector<int>, greater<int>> minHeap(arr, arr+size);
    
    int ans = getKth_min(minHeap, k);
    cout<<"min = "<<ans<<endl;
    
    return 0;
}
