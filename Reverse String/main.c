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

void Reverse(char* array)
{
	char cTemp = 0;
	int nCharLength = 0;
	char *pBegin = array, *pEnd = array;

	while(*pEnd++ != '\0')           //-- get the length of the incoming array
	{
		nCharLength++;
	}

	pEnd -= 2;                       //-- at this point pEnd is pointing at NULL
				         //-- I need to back the ponter up to the last char

	while(pEnd >= pBegin)
	{
		cTemp = *pEnd;           //-- dereference pEnd and store it in cTemp
		*pEnd-- = *pBegin;       //-- dereference pBegin and store it in dereferenced pEnd
		            		 //-- decrement pEnd
		*pBegin++ = cTemp;       //-- copy cTemp into dereferenced pBegin and increment pBegin
	}
}
