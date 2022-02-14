#include<stdio.h>

void reverseBits(int *b,int n)
{
	int a,i=0;
	while(n!=0) // Loop for finding the binary of decimal number
	{
		a=n%2; 
		n=n/2;
		*(b+i)=a; // putting the binary value in array
		i++;
	}
	printf("Before: ");
	for(int j=i-1;j>=0;j--) // Displaying the binary value
 	{
		printf("%d",*(b+j));	 
	}
	printf("\nAfter: ");
	for(int j=0;j<i;j++) // Displaying the reversed binary value
	{
		printf("%d",*(b+j));
	}
	printf("\n");
}
	

int main()
{
	int n,*s;
	printf("Enter the decimal value: ");
	scanf("%d",&n);
	reverseBits(s,n); //function for reversing the bits of binary value
}
