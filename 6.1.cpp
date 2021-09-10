/*
  Find the Union and Intersection of the two sorted arrays.
  1. Naive
  2. Set
  3. Map and Unordered Map
  4. Sorting + Searching
  5. Merge (in case of sorted arrays)
*/

    void printArray(int arr[], int size){
        for(int i=0; i<size; i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    
    int doUnion(int arraya[], int m, int arrayb[], int n)  {
        int arrayunion[m+n];
        int counter = 0;
        
        for(int i=0; i<m; i++)
            arrayunion[counter++] = arraya[i];
            
        for(int i=0; i<n; i++){
            bool flag = false;
            for(int j=0; j<m; j++){
                if(arrayb[i] == arraya[i]){
                    flag = true;
                    break;
                }
            }
            if(flag == false)
                arrayunion[counter++];
        }
        
        //printArray(arrayunion, counter);
        return counter;
    }
    
    int doIntersection(int arraya[], int m, int arrayb[], int n){
        int arrayintersection[min(m,n)];
        int counter = 0;
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(arraya[i] == arrayb[j])
                    arrayintersection[counter++] = arraya[i];
            }
        }
        
        //printArray(arrayintersection, counter);
        return counter;
    }
