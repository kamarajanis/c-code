#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a[10];
	printf("Enter a name \n");
	scanf("%s",a);
	printf("The Entered name is %s \n",a);
	int i=0;
	printf("\n %c \n",a[0]);
	while(a[i]!='\0')
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
    	         {printf("Vowel\n");}
       else
    	    {printf("Not Vowel\n");}

    	i++;
}
}
