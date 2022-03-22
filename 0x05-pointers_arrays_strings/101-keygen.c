#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/** this 
 * is 
 * comment**/

int main(void)
{
	int i,random,sum;
	char key[63] = "qwertyuioplkjhgfdsazxcvbnmQWERTYUIOPLKJHGFDSAZXCVBNM1234567890";
	char pswd[100];
	while (sum < 2650)
	{
		random = rand() % 62;
		pswd[i] = key[random];
		sum += pswd[i];
		i++;
	}
	random = 2772 - sum;
	pswd[i] = random;
	i++;
	pswd[i] = '\0';
	printf("%s", pswd);

	return 0;
}
