/*
  Write a program to cyclically rotate an array by one.
  1. Linear loop.
  2. Two pointers swap.
*/

void rotate(int arr[], int n)
{
    int *left = arr, *right = arr + (n - 1);
    while(left < right){
        swap(*left, *right);
        left++;
    }
}
