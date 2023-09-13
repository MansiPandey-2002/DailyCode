//BRUTE FORCE (Time limit will be exceeded with O(n3) complexity)
long long maxSubarraySum(vector<int> arr, int n)
{
    long sum;
    long maximum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum=0;
            for(int k=i;k<=j;k++)
            {
                sum+=arr[k];
            }
            maximum=max(maximum,sum);
        }
    }
    return maximum;
}
