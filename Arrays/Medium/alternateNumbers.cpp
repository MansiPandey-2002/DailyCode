//BRUTE FORCE
vector<int> alternateNumbers(vector<int>&a) {
    vector<int> pos;
    vector<int> neg;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>=0)
            pos.push_back(a[i]);
        else
            neg.push_back(a[i]);
    }
    for(int i=0;i<a.size()/2;i++)
    {
        a[2*i]=pos[i];
        a[2*i+1]=neg[i];
    }
    return a;
}

//OPTIMAL
vector<int> alternateNumbers(vector<int>&a) {
    int pos=0,neg=1;
    int n=a.size();
    vector<int> ans(n,0);
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            ans[pos]=a[i];
            pos+=2;
        }
        else
        {
            ans[neg]=a[i];
            neg+=2;
        }
    }
    return ans;
}
