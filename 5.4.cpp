/*
  Move all the negative elements to one side of the array.
  1. QuickSort partition.
  2. Two pointers.
  3. Order mantained - QuickSort partition.
  4. Order mantained - InsertionSort.
  5. Order mantained - Optimized MergeSort
*/

  void segregateElements(int arr[],int n)
    {
       for(int i=1; i<n; i++){
            int key = arr[i];
            
            if(arr[i] < 0)
                continue;
           
            int j = i-1;
            while(j >= 0 && arr[j] < 0){
               arr[j+1] = arr[j];
               j = j - 1;
            }
            arr[j+1] = key;
       }
    }
