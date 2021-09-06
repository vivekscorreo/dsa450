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


void reverseStr(string &str, int start, int end){
    if(start>end)
        return;
        
    char a = str[start];
    str[start] = str[end];
    str[end] = a;
    
    reverseStr(str, start+1, end-1);
}

string reverseWord(string str){
    reverseStr(str, 0, str.size()-1);
    return str;
}
