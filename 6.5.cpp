/*
  Find the Union and Intersection of the two sorted arrays.
  1. Naive
  2. Set
  3. Map and Unordered Map
  4. Sorting + Searching
  5. Merge (in case of sorted arrays)
*/

    int doUnion(int arraya[], int m, int arrayb[], int n)  {
        sort(arraya, arraya + m);
        sort(arrayb, arrayb + n);
        
        int arrayu[m + n];  int counter = 0;
        int i = 0, j = 0;
        while(i < m || j < n){
            int numa = (i<m)?   arraya[i] : INT_MAX;
            int numb = (j<n)?   arrayb[j] : INT_MAX;
            
            if(numa == numb){
                arrayu[counter++] = arraya[i];
                i++;    j++;
            }
            else if(numa < numb)
                arrayu[counter++] = arraya[i++];
            else
                arrayu[counter++] = arrayb[j++];
        }
        
        return counter;
    }
    
    int doIntersection(int arraya[], int m, int arrayb[], int n){
        sort(arraya, arraya + m);
        sort(arrayb, arrayb + n);
        
        int arrayi[m + n];  int counter = 0;
        int i = 0, j = 0;
        while(i < m || j < n){
            int numa = (i<m)?   arraya[i] : INT_MAX;
            int numb = (j<n)?   arrayb[j] : INT_MAX;
            
            if(numa == numb){
                arrayi[counter++] = arraya[i];
                i++;    j++;
            }
            else if(numa < numb)
                i++;
            else
                j++;
        }
        
        return counter;
    }
