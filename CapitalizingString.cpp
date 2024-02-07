/*Write a program that accepts a string as input, capitalizes the first letter of each word in the 
string, and then returns the result string.*/

//SOLUTION IN C

#include <stdio.h>
#include <ctype.h>

void Capitalizing (char *str)
{
	int i=0;
	
	//Capitalizing the first letter of eacgh word in the string
	if (isalpha(str[0]))
	{
		str[0] = toupper (str[0]);
		i++;
	}
	
	//Capitalizing the first letter of the next words
	while (str[i] !='\0')
	{
		if (isspace (str [i-1]) && isalpha (str [i]))
		{
			str[i] = toupper (str[i]);
		}
		i++;
	}
}

int main ()
{
	char str [100];
	printf ("Enter a string:");
	fgets (str,100,stdin);
	
	Capitalizing(str);
	
	printf ("The capitalized string is: %s",str);
	
	return 0;
}