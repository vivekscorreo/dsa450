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
       int *left = arr, *right = arr+(n-1);
       while(left < right){
            if(*left < 0)
                left++;
            else if(*right < 0){
                swap(*left, *right);
                left++;
            }
            else
                right--;
       }
    }
