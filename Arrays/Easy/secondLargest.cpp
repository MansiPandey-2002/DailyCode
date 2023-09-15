//OPTIMAL 
#include<iostream>
using namespace std;
int secondLargest(int n,vector<int> a)
{
    int max=a[0],smax=-1;
    for(auto i:a)
    {
        if(i>max)
        {
            smax=max;
            max=i;
        }
        else if(i!=max && i>smax)
            smax=i;
    }
    return smax;
}

int secondSmallest(int n,vector<int> a)
{
    int min=a[0],smin=INT_MAX;
    for(auto i:a)
    {
        if(i<min)
        {
            smin=min;
            min=i;
        }
        else if(i!=min && i<smin)
            smin=i;
    }
    return smin;
}
vector<int> getSecondOrderElements(int n, vector<int> a) {
    int slargest=secondLargest(n,a);
    int ssmallest=secondSmallest(n,a);
    return {slargest,ssmallest};
}
