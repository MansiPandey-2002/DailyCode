//BRUTE FORCE

int majorityElement(vector<int> v) 
{
	int c,maj=0,element,i;
	for(i=0;i<v.size();i++)
	{
		c=0;
		for(int j=0;j<v.size();j++)
		{
			if(v[j]==v[i])
				c++;
		}
		if(c>maj)
		{
			maj=c;
			element=v[i];
		}
	}
	if(maj>(v.size()/2))
		return element;
	else
		return -1;
}
