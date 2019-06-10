Char nonReapatingChar(string str)
{
	map<char,int>frequency;
	for(int i=0;i<str.length();i++)
	{
		char currentchar=str[i];
		frequency[currentchar]++;
		
	}
	for(int i=0;i<str.length();i++)
	{
		if(frequency[str[i]]==1)
		{
			return str[i];
		}
	}
	// if there is no reapeating character in string. for example aabb then output is a.
	return str[0];
}
