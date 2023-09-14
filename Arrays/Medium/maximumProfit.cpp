//BRUTE FORCE
#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int n=prices.size(),maxdiff=0;
    int diff=INT_MIN;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            diff=prices[j]-prices[i];
            if(diff>maxdiff)
                maxdiff=diff;
        }
    }
    return maxdiff;
}

//OPTIMAL  (Linearly, find minimum element and find how maximum can be achieved by subtracting array element with minimum)
#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int n=prices.size(),min=INT_MAX;
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(prices[i]<min)
            min=prices[i];
        if(prices[i]-min>max)
            max=prices[i]-min;
    }
    return max;
}
