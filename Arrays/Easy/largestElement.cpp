#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    int max=arr[0];
    for(auto i:arr)
    {
        if(i>max)
            max=i;
    }
    return max;
}
