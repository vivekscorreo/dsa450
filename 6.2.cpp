/*
  Find the Union and Intersection of the two sorted arrays.
  1. Naive
  2. Set
  3. Map and Unordered Map
  4. Sorting + Searching
  5. Merge (in case of sorted arrays)
*/

    int doUnion(int arraya[], int m, int arrayb[], int n)  {
        set<int> unionab;
        for(int i=0; i<m; i++)
            unionab.insert(arraya[i]);
        
        for(int i=0; i<n; i++)
            unionab.insert(arrayb[i]);
            
        return unionab.size();
    }
    
    int doIntersection(int arraya[], int m, int arrayb[], int n){
        set<int> intersectionab;
        set<int> collision;
        
        for(int i=0; i<m; i++)
            collision.insert(arraya[i]);
        
        set<int> :: iterator pos;
        for(int i=0; i<n; i++){
            pos = collision.find(arrayb[i]);
            if(pos != collision.end())
                intersectionab.insert(arrayb[i]);
        }

        return intersectionab.size();
    }
