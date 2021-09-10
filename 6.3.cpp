/*
  Find the Union and Intersection of the two sorted arrays.
  1. Naive
  2. Set
  3. Map and Unordered Map
  4. Sorting + Searching
  5. Merge (in case of sorted arrays)
*/

    int doUnion(int arraya[], int m, int arrayb[], int n)  {
        unordered_map<int, int> unionab;
        
        for(int i=0; i<m; i++)
            unionab[arraya[i]]+= 1;
        for(int i=0; i<n; i++)
            unionab[arrayb[i]]+= 1;
            
        return unionab.size();
    }
    
    int doIntersection(int arraya[], int m, int arrayb[], int n){
        unordered_map<int, int> intersectionab; int count = 0;
        
        for(int i=0; i<m; i++)
            intersectionab[arraya[i]] = 1;
        for(int i=0; i<n; i++){
            if(intersectionab[arrayb[i]] == 1)
                intersectionab[arrayb[i]]+= 1;
        }
            
        unordered_map<int, int> :: iterator itr;
        for(itr = intersectionab.begin(); itr != intersectionab.end(); itr++)
            if(itr->second > 1)
                count++;
                
        return count;
    }
