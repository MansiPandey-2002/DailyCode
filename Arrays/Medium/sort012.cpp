//BRute force
#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int one=0,two=0,zero=0;
   for(int i=0;i<n;i++)
   {
        if(arr[i]==0)
            zero++;
        else if(arr[i]==1)
            one++;
        else
            two++;
   }
   int i;
   for(i=0;i<zero;i++)
        arr[i]=0;
    for(i=zero;i<(one+zero);i++)
        arr[i]=1;
    for(i=zero+one;i<n;i++)
        arr[i]=2;  
}
