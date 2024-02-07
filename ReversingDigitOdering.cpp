/*Write a program that takes an integer as input and returns an integer with reversed digit 
ordering.*/

//SOLUTION IN C LANGUAGE

#include <stdio.h>

	int reverse(int a)
	{
		int reverse = 0,rem;
		while (a!=0)
		{
			rem = a%10;
			reverse = reverse*10 + rem;
			a /= 10; 
		}
		return reverse;
	}

int main ()
{
	int a;
	
	printf ("Enter any digit:");
	scanf ("%d",&a);
	
	int reversed = reverse(a);
	printf ("The reversed integer is:%d\n",reversed);
	
	return 0;
}