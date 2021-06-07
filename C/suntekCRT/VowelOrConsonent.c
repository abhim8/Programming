#include <stdio.h>
int main() {
	char c,temp;
	printf("Enter a Character: ");
	scanf("%c",&temp);
	c = tolower(temp);
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){ printf("\n%c is a Vowel\n",temp); }
	else { printf("\n%c is a Consonant\n",temp); }
	return 0;
}