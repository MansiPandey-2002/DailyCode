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
