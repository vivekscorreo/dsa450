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

struct minMax{
    int min;
    int max;
    
    minMax(){
        min = INT_MAX;
        max = INT_MIN;
    }
    
    minMax(int minm, int maxm){
        min = minm;
        max = maxm;
    }
};

minMax getKth_minMax(int arr[], int size, int k){
    sort(arr, arr+size, greater<int>());
    minMax ans(arr[size-k], arr[k-1]);
    return ans;
}

int main(){
    
    int arr[] = {1,2,3,18,-1,6};
    int size = 6;
    int k = 4;
    minMax ans = getKth_minMax(arr, size, k);
    cout<<"min = "<<ans.min<<" max = "<<ans.max<<endl;
    
    return 0;
}
