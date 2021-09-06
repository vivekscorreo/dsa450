/*
  1.  Reverse the array.
  
  1.1 Iterative.
  1.2 Recursive.
*/

#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
    
  for(int i=0; i<str.size()/2; i++){
      char a = str[i];
      str[i] = str[str.size()-i-1];
      str[str.size()-i-1] = a;
  }
  return str;
}
