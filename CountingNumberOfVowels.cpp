//Write a program that counts the number of vowels in a sentence

//SOLUTION IN C LANGUAGE

#include <stdio.h>
#include <ctype.h>

int CountVowels(const char *sentence)
{
	int VowelCount = 0;
	char ch;
	
	while (*sentence)
	{
		ch = tolower(*sentence);
		if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		{
			VowelCount++;
		}
		sentence++;
	}
	return VowelCount;
}

int main ()
{
	char sentence[100];
	
	printf ("Type your sentence here:");
	fgets (sentence, sizeof(sentence), stdin);
	
	int VowelCount = CountVowels(sentence);
	printf ("The number of vowels in your sentence are %d.\n", VowelCount);
	
	return 0;
}