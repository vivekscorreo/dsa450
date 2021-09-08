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
        int i = -1;
        for(int j=0; j<n; j++){
            if(arr[j] < 0)
                swap(arr[++i], arr[j]);
        }
    }
