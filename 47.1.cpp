/*
  Write a program to reverse a string.
  1. using stack.
  2. iterative.
  3. iterative using pointers.
  4. recursive.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverse_string(string &input){
    stack<char> rev_str;
    for(int i=0; i<input.length(); i++){
        rev_str.push(input[i]);
    }
    
    for(int i=0; i<input.length(); i++){
        input[i] = rev_str.top();
        rev_str.pop();
    }
}

int main() {
	
	int testcases;
	cin>>testcases;
	
	while(testcases--){
	   string input;
	   cin>> input;
	   reverse_string(input);
	   cout<< input<< endl;
	}
	
	return 0;
}
