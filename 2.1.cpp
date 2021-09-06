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

minMax getminMax(int arr[], int size){
    minMax ans(arr[0], arr[0]);
    if(size == 1)
        return ans;
        
    if(arr[0] < arr[1])
        ans.max = arr[1];
    else
        ans.min = arr[1];
    
    for(int i=2; i<size; i++){
        if(ans.min > arr[i])
            ans.min = arr[i];
        else if(ans.max < arr[i])
            ans.max = arr[i];
    }
    
    return ans;
}

int main(){
    
    int arr[] = {1,2,3,18,-1,6};
    int size = 6;
    
    minMax minmax = getminMax(arr, size);
    cout<<"Min = "<<minmax.min<<" Max = "<<minmax.max<<endl;
    
    return 0;
}
