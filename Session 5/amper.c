1. Create a function that would count the occurence of 
   a given character in the given string regardless of 
   the lettercase.

    int countchar(char text[], char given){
	int count,occur=0;
	for(count=0; text[count]!='\0'; count++){
			if(tolower(text[count])== given){
				occur++;
			}
	}
	return occur;
}


2. Create a function that would convert a part of the 
   sentence that contains an f and k in a four letter 
   sequence with an asterisk.
   Input    ---> My folk uses his fork when eating.  
   Output   ----> My f**k uses his f**k when eating.


char* converter(char text[]){
	char f='f';
	char k='k';
	int count,i;
	char *temp;
	
	for(; text[count]!='\0'; ++count){}
	
	temp=(char*)malloc(count*sizeof(char));
	strcpy(temp,text);
	
		for(i=0; temp[i]!='\0'; i++){
		if(temp[i]==f && temp[i+3]==k){
			temp[i+1]='*';
			temp[i+2]='*';
		}
	}	
	return temp;
}

3. Create a function that would stripout a specified 
   character in the given string. 
   (No change must be made to the original string)





4. Create a function that would get all prime numbers 
   in a given positive integer number collection. 
   (No count is used. Negative one is used as a sentinel.)


5. Create a function that would replace a sequence of 
   numbers in a given collection from a range given. 
   (Granting that the given collection has more numbers than the sequence t be replaced.)