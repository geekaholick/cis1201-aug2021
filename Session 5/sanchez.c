//Mariah Ariannie Sanchez
/* 1. Create a function that would count the occurence of 
   a given character in the given string regardless of 
   the lettercase. */
int countOcc(char str[], int ch){
	int i, occ=0;
	for (i=0; str[i]!='\0'; i++){
		if(str[i]==ch){
			occ++;
		}
	}
	return occ;
}

/*2. Create a function that would convert a part of the 
   sentence that contains an f and k in a four letter 
   sequence with an asterisk.
   Input    ----> My folk uses his fork when eating.  
   Output   ----> My f**k uses his f**k when eating.*/

char *convert(char str[]){
	int i,j;
	for (i=0; str[i] != '\0'; i++){
		if(str[i]=='f' && str[i+3]=='k'){
			str[i+1]='*';
			str[i+2]='*';
		}
	}
	str[i]='\0';
	return str;
}

/*3. Create a function that would take out a specified 
   character in the given string. 
   (No change must be made to the original string)
   Input    ----> My folk uses his fork when eating.
   Output   ----> My folk uss his fork whn ating.*/

char *removeCh(char str[], char ch){
	int i, j;
	char *temp;
	temp=(char*)malloc(sizeof(char)*strlen(str)+1);
	for(i=0; str[i]!='\0'; i++){
		if(str[i]==ch){
			temp[j]=str[i];
			str[i]=str[i+1];
			j++;
		}
	}
	temp[j]='\0';
	return temp;
}

/*4. Create a function that would get all prime numbers 
   in a given positive integer number collection. 
   (No count is used. Negative one is used as a sentinel. No change of the original collection)*/



