/*
  Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo.
  1.  Counting 0s, 1s, 2s.
  2.  Dutch National Flag Problem.
*/

void sort012(int arr[], int n)
    {
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;
        for(int i=0; i<n; i++){
           switch(arr[i]){
               case 0:  count0++; break;
               case 1:  count1++; break;
               case 2:  count2++;
           }
       }
       
       for(int i=0; i<n; i++){
            if(i < count0)
                arr[i] = 0;
            else if(i < count0 + count1)
                arr[i] = 1;
            else
                arr[i] = 2;
       }
    }
