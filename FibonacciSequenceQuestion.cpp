//Write a program to generate the Fibonacci sequence up to 100.//

//SOLUTION IN C//

#include <stdio.h>
int main ()
{
	int a=0, b=1, c;
	
	printf ("Here is the Fibonacci sequence up to 100:\n");
	
	for (int i=0; i<=100; i++)
		
		{
			printf ("%d\n", a);
			c = a + b;
			a = b;
			b = c;
		}
  printf ("\n");
  
  return 0;
}