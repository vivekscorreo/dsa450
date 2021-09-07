/*
  Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo.
  1.  Counting 0s, 1s, 2s.
  2.  Dutch National Flag Problem.
*/

 void sort012(int arr[], int n)
    {
        int low = 0, mid = 0, high = n-1;
        
        while(mid <= high){
            if(arr[mid] == 0)
                swap(arr[low++], arr[mid++]);
            else if(arr[mid] == 1){ mid++; }
            else
                swap(arr[high--], arr[mid]);
        }
        
    }
