/*
  Search an element in a row wise and column wise sorted matrix.
*/

  int matSearch (vector <vector <int>> &mat, int N, int M, int X){
	    int i = 0;
	    int j = M-1;
	    
	    while(!(i > N-1 || j < 0)){
	        if(mat[i][j] == X)
	            return 1;
	        if(X < mat[i][j])
	            j--;
	        else
	            i++;
	    }
	    return 0;
	}
