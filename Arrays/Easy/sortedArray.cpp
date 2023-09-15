//OPTIMAL [USing set]
#include<bits/stdc++.h>
vector < int > sortedArray(vector < int > a, vector < int > b) {

    set<int> s;
    for(int i=0;i<b.size();i++)
    {
        s.insert(b[i]);
    }
    for(int i=0;i<a.size();i++)
    {
        s.insert(a[i]);
    }
    vector<int> v;
    for(int i:s)
        v.push_back(i);
    return v;
}
