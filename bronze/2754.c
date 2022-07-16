#include <stdio.h>
#include <string.h>

int main(){
    char x[3];
    scanf("%s", x);
	int len=strlen(x);
	if(len==2){
		if(x[0]=='A'){
			if(x[1]=='+')
			{
				printf("4.3");
			}
			else if(x[1]=='0')
			{
				printf("4.0");
			}
			else if(x[1]=='-')
			{
				printf("3.7");
			}
		}
		else if(x[0]=='B')
		{
			if(x[1]=='+')
			{
				printf("3.3");
			}
			else if(x[1]=='0')
			{
				printf("3.0");
			}
			else if(x[1]=='-')
			{
				printf("2.7");
			}
		}
		else if(x[0]=='C')
		{
			if(x[1]=='+')
			{
				printf("2.3");
			}
			else if(x[1]=='0')
			{
				printf("2.0");
			}
			else if(x[1]=='-')
			{
				printf("1.7");
			}
		}
		else if(x[0]=='D')
		{
			if(x[1]=='+')
			{
				printf("1.3");
			}
			else if(x[1]=='0')
			{
				printf("1.0");
			}
			else if(x[1]=='-')
			{
				printf("0.7");
			}
		}
	}
	else
	{
		printf("0.0");
	}
}