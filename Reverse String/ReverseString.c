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
