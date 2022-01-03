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

void reverse_string(string &input, int pointer){
    int length = input.length();
    if(pointer >= length/2)
        return;
    
    swap(input[pointer], input[length - 1 - pointer]);
    reverse_string(input, ++pointer);
}

int main() {
	
	int testcases;
	cin>>testcases;
	
	while(testcases--){
	   string input;
	   cin>> input;
	   reverse_string(input, 0);
	   cout<< input<< endl;
	}
	
	return 0;
}
