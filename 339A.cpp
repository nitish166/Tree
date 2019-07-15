#include<stdio.h>
#include<string.h>
int main()
{
	char str[100]; 
    int i,j,key;
	scanf("%[^\n]%*c",str);
	int len = strlen(str);
	for(i=2;i<len;i=i+2)
	{
		key=str[i];
		j=i-2;
 
		while(j>=0 && str[j]>key)
		{
			str[j+2]=str[j];
			j=j-2;
		}
		str[j+2]=key;
		
	}
 
	printf("%s\n", str);
	return 0;
}
