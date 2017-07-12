#include <stdio.h>
#include <conio.h>	// for clrscr() function

void Reverse(char* _aray);


 int main(int argc, char* argv[])
{
	char strArry[81] = {};                            //-- declare and initialize string array

	printf("Enter a string < 80 chars or less > \n");
	scanf("%80[^\n]s", strArry);                      //-- get a string from user up to 80 chars and stop on '\n'

	printf("The string of chars you entered is: \n%s\n", strArry);
	Reverse(strArry);                                 //-- call to reverse the string
  
	printf("The string of chars in reverse order is: \n%s\n", strArry);

	getch();
	return 0;
}
