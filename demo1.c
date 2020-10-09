#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {


main11try2()
{
	char word[20];
	int i, len, vow = 0, sps = 0, con = 0;
	printf("\nEnter word : ");
	gets(word);
	len = strlen(word);
	for(i=0;i<len;i++)
	{
		switch(word[i])
		{
			case 'a':
			case 'A':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			{
				vow++;
				break;
			}
			case ' ':
			{
				sps++;
				break;
			}
			default:
			{
				con++;
				break;
			}
		}
	}
	printf("\nNumber of vowels is : %d", vow);
}
	return 0;
}
