/*
  Reverse a string.
  1. using stack.
  2. iterative
  3. iterative using two pointers.
  4. recursive
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverse_string(string &input){
    int length = input.length();
    for(int i=0, j = length - 1; i<j; i++, j--)
        swap(input[i], input[j]);
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
