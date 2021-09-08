/*
  Find the "Kth" max and min element of an array.
  1.  Sort.
  2.  Set.
  3.  MinHeap.
  4.  MaxHeap.
  5.  QuickSelect.
  6.  Map
*/

    int partition(int arr[], int l, int r){
        int pivot = arr[r];
        int i = l - 1;
        
        for(int j = l; j < r; j++){
            if(arr[j] < pivot)
                swap(arr[++i], arr[j]);
        }
        
        swap(arr[++i], arr[r]);
        return i;
    }
    
    int kthSmallest(int arr[], int l, int r, int k) {
        int ansk = k - 1;
        if(ansk >= l && ansk <= r){
            int pos = partition(arr, l, r);

            if(ansk == pos)
                return arr[pos];
            if(ansk < pos)
                return kthSmallest(arr, l, pos-1, k);
            return kthSmallest(arr, pos + 1, r, k);   
        }
        return INT_MAX;
    }
