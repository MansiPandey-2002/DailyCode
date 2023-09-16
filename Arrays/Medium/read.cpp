//Brute Force
string read(int n, vector<int> book, int target)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(book[i]+book[j]==target)
                return "YES";
        }
    }
    return "NO";
}


//optimal solution
string read(int n, vector<int> book, int target)
{
   sort(book.begin(),book.end());
   int l=0;
   int r=n-1;
   for(int i=0;i<n;i++)
   {
        if(book[l]+book[r]==target)
            return "YES";
        else if(book[l]+book[r]>target)
            r--;
        else
            l++;
   }
   return "NO";
}
