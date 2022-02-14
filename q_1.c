#include<stdio.h>
#include<string.h>

int top=-1; // Defining top for stack

void push(char c,char s[]) // function for pushing characters
{
	top++;
	s[top]=c;
}

void pop(char s[]) // function for poping characters
{
	char c;
	c=s[top];
	top--;
}

int main()
{
	int n; // Length of string
	printf("Enter the length of string: ");
	scanf("%d",&n);	
	char s[n]; //String of length n
	char stack[n]; // stack defined for comparing characters
	printf("Enter the string: ");
	scanf("%s",s);	
	for(int i=0;i<n;i++)
	{
		if(i==0) // Pushing first character of string onto stack
		{
			push(s[i],stack);
		}
		else
		{
			if(stack[top]==s[i]) // If two adjacent characters found same then pop the character from stack
			{
				pop(stack);
			}
			else // If two adjacent characters not same then push the character onto stack
			{
				push(s[i],stack);
			}
		}
	}
	if(top==-1)
	{
		printf("Empty String\n");
	}
	else
	{
		for(int i=0;i<=top;i++)
		{
			printf("%c",stack[i]);
		}
		printf("\n");
	}
}


	
