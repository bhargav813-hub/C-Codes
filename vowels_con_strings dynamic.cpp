#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	int i=0,count=0,consonants;
	printf("Enter the string");
	gets(s);
	while(s[i]!=0)
	{
		if(s[i]=='a'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='e'||s[i]=='A'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='E')
		{
			count++;
		}
		else
		consonants++;
		i++;
	}
	printf("The numbers of vowels %d",count);
	printf("\nThe numbers of consonants %d",consonants);
}
