/*
  Find the maximum and minimum element in an array.
  2.1 Linear Search.
  2.2 Tournament method.
  2.3 Compare in pairs.
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

minMax getminMax(int arr[], int start, int end){
    minMax ans(arr[start], arr[start]);
    if(start >= end)
        return ans;
        
    int mid = (start + end)/2;
    minMax ans1 = getminMax(arr, start, mid);
    minMax ans2 = getminMax(arr, mid+1, end);
    ans.min = min(ans1.min, ans2.min);
    ans.max = max(ans1.max, ans2.max);
    
    return ans;
}

int main(){
    
    int arr[] = {1,4,3,18,-1,6};
    int size = 6;
    
    minMax minmax = getminMax(arr, 0, size-1);
    cout<<"Min = "<<minmax.min<<" Max = "<<minmax.max<<endl;
    
    return 0;
}
