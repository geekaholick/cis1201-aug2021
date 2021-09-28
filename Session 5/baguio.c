// 1. Create a function that would count the occurence of 
//    a given character in the given string regardless of 
//    the lettercase.

int countOccurence(char string[], char x){
    int i,count=0;
    for(i=0; string[i] != '\0'; ++i){
        if(string[i]==x){
            count++;
        }
    }
    return count;
}
// 2. Create a function that would convert a part of the 
//    sentence that contains an f and k in a four letter 
//    sequence with an asterisk.
//    Input    ----> My folk uses his fork when eating.  
//    Output   ----> My f**k uses his f**k when eating.

char *convertSent(char string[]){
	int i,y,z,size;
	
	char *retval; 
	for(i=0; string[i] != '\0'; ){
		if(string[i]=='f'&&string[i+3]=='k'){
			for(y=i+1,z=0;z<2;z++,y++){
				string[y]='*';
			}
			i=y;
		}else{
			i++;
		}
	}
	size=strlen(string);
	retval=(char*)malloc(sizeof(char)*size);
	if(retval!=NULL){
		memcpy(retval,string,sizeof(char)*size);
	}
	
	return retval;
}

// 3. Create a function that would stripout a specified 
//    character in the given string. 
//    (No change must be made to the original string)
//    Input    ----> My folk uses his fork when eating.
//    Output   ----> My folk uss his fork whn ating.
char *removeChar(char string[], char x){
	int i,y;
	int count=strlen(string);
	char temp[50], *convertedString;
	
	for(i=0;i<count;){
		if(string[i]==x){
			for(y=i;y<count;y++){
				temp[y]=string[y++];
			}
		}else{
			temp[i]=string[i];
			i++;
		}
	}
	

	count=strlen(temp);
	convertedString=(char*)malloc(sizeof(char)*count);
	if(convertedString!=NULL){
		memcpy(convertedString,temp,sizeof(char)*count);
	}
	
	return convertedString;
}

4. Create a function that would get all prime numbers 
   in a given positive integer number collection. 
   (No count is used. Negative one is used as a sentinel.)
   
5. Create a function that would replace a sequence of 
   numbers in a given collection from a range given. 
   (Granting that the given collection has more numbers than the sequence t be replaced.)