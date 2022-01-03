/*
  Write a program to find whether a given string is palindrome or not.
  >> All solutions for [47] are applicable here.
  here>> iterative using single pointer.
*/

int isPalindrome(string S)
	{
	    int length = S.length();
	    for(int i=0; i<length/2; i++){
	        if(S[i] != S[length - 1 - i])
	            return 0;
	    }
	    return 1;
	}
