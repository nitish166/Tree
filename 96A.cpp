#include<stdio.h>
#include<string.h>
int main()
{
	char str[100]; int i=0;
	int cnt=1;
	scanf("%[^\n]%*c",str);
	int length= strlen(str);
	for(i=0;i<length;i++)
	{
         if(str[i]==str[i+1])
         {
 
         	cnt++;
         	
         }
         else{
         	cnt=1;
         }
 
         if(cnt>=7)
         {
         	printf("YES");
         	return 0;
         }
		
 
    }
		printf("NO");
    
     return 0;	
	
}
    
