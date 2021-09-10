/*
  Find the Union and Intersection of the two sorted arrays.
  1. Naive
  2. Set
  3. Map and Unordered Map
  4. Sorting + Searching
  5. Merge (in case of sorted arrays)
*/

     int doUnion(int arraya[], int m, int arrayb[], int n)  {
        int arrayc[m + n]; int counter = 0;
        
        if(m <= n){
            sort(arraya, arraya + m);
            
            for(int i=0; i<m; i++)
                arrayc[counter++] = arraya[i];
                
            for(int i=0; i<n; i++){
                bool present = binary_search(arraya, arraya + m, arrayb[i]);
                if(!present)
                    arrayc[counter++] = arrayb[i];
            }
        }
        else{
            sort(arrayb, arrayb + n);
            
            for(int i=0; i<n; i++)
                arrayc[counter++] = arrayb[i];
                
            for(int i=0; i<m; i++){
                bool present = binary_search(arrayb, arrayb + n, arraya[i]);
                if(!present)
                    arrayc[counter++] = arraya[i];
            }
        }
        return counter;
    }
    
    int doIntersection(int arraya[], int m, int arrayb[], int n){
        int arrayc[m + n]; int counter = 0;
        
        if(m <= n){
            sort(arraya, arraya + m);
            
            for(int i=0; i<m; i++)
                arrayc[counter++] = arraya[i];
                
            for(int i=0; i<n; i++){
                bool present = binary_search(arraya, arraya + m, arrayb[i]);
                if(present)
                    arrayc[counter++] = arrayb[i];
            }
        }
        else{
            sort(arrayb, arrayb + n);
            
            for(int i=0; i<n; i++)
                arrayc[counter++] = arrayb[i];
                
            for(int i=0; i<m; i++){
                bool present = binary_search(arrayb, arrayb + n, arraya[i]);
                if(present)
                    arrayc[counter++] = arraya[i];
            }
        }
        return counter;
    }
