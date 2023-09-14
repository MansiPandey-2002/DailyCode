#include <bits/stdc++.h> 
using namespace std;
//brute force
vector<int> rotateArray(vector<int>& arr, int n) {
    int first=arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=first;
    return arr;
}
