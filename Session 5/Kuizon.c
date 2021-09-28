1. Create a function that would count the occurence of 
   a given character in the given string regardless of 
   the lettercase.
    
    int countChar(char arr[], char c){
        int i, count=0;

        for(i = 0; arr[i] != '\0'; i++){
            if(arr[i] == c){
                count++;        
            }
        }
        return count;
    }

2. Create a function that would convert a part of the 
   sentence that contains an f and k in a four letter 
   sequence with an asterisk.
   Input    ----> My folk uses his fork when eating.  
   Output   ----> My f**k uses his f**k when eating.

    void censoreStr(char arr[]){
        int i;

        for(i = 0; arr[i] != '\0'; i++){
            if(arr[i] == 'f' && arr[i+3] == 'k'){
                arr[i+1] = '*';
                arr[i+2] = '*';
            }

       }

   }
3. Create a function that would stripout a specified 
   character in the given string. 
   (No change must be made to the original string)
   Input    ----> My folk uses his fork when eating.
   Output   ----> My folk uss his fork whn ating.

    #define size 20

    char *deleteChar(char arr[], char c){
        char *retArr;
	    char newarray[size]; 
	    int x,y;		

	    for(x=y=0; x != '\0'; x++){
		    if(arr[x]!=c){
		        newarray[y++]=arr[x];
		    }
    	}
	
	retArr=(char*)malloc(sizeof(char)*(y+1)); 
	
    if(retArr != NULL){	
	    memcpy(retArr, newarray, sizeof(char)*y);
	    retArr[y]=-1;
	    }
	return retArr;
    }

4. Create a function that would get all prime numbers 
   in a given positive integer number collection. 
   (No count is used. Negative one is used as a sentinel. No change of the original collection)




5. Create a function that would replace a sequence of 
   numbers in a given collection from a range given. 
   (Granting that the given collection has more numbers than the sequence t be replaced.)