/*
  Write a program to cyclically rotate an array by one.
  1. Linear loop.
  2. Two pointers swap.
*/

void rotate(int arr[], int n)
{
    int temp = arr[n-1];
    for(int i=n-1; i>0; i--)
        arr[i] = arr[i-1];
    arr[0] = temp;
}
