#include<stdio.h>
#include<string.h>
int main()
{
	char str[100]; int i=0; 
	scanf("%[^\n]%*c",str);
	int length = strlen(str);
	for( i=0;i<length;i++)
	{
		char l = str[i];
       if(l>='A'&&l<='Z')
       {
       	   l += 32;
       }
       if(l !='a' && l !='e'&& l !='i'&& l !='o'&& l !='u'&& l !='y')
       {
       	printf(".%c",l );
       }
      
	}
	return;
}
