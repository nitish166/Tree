vector<int> RemoveDuplicate(vector<int> input)
{
	set <int> s;
	vector <int> result;
	
	for(int i=0;i<input.size();i++)
	{
		if(s.find(input[i])==s.end())  // if element is not present in set.
		{
			s.insert(input[i]);
			result.push_back(input[i]);
		}
	}
	return result;
}
