#include<iostream>
#define max 100

bool parantezkontrol(char girdi[])
{
	char stack[max];
	int top = -1;
	int i;
	
	for(i = 0; girdi[i]!='\0';i++) //unclosed parentheses control
	{
		top++;
	}
	if(top%2 == 0)
	{
		return false;
	}
	
	for(i=0; girdi[i] != '\0'; i++)
	{
		if(girdi[i] == '{' || girdi[i] == '['|| girdi[i] == '(')
		{
			stack[++top] = girdi[i];
		}
		else if(girdi[i] == '}' && stack[top] == '{')
		{
			stack[top--];
		}
		else if(girdi[i] == ']' && stack[top] == '[')
		{
			stack[top--];
		}
		else if(girdi[i] == ')' && stack[top] == '(')
		{
			stack[top--];
		}
		else
		{
			return false;
		}
	}
	return true;
}

int main()
{
	char girdi[max];
	
	printf("enter the parentheses: ");
	scanf("%s",girdi);
	
	if(parantezkontrol(girdi))
	{
		printf("parentheses are true");
	}
	else
	{
		printf("parentheses are false");
	}
	
	return 0;
}
