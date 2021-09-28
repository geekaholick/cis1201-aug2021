1. Create a function that would count the occurence of 
   a given character in the given string regardless of 
   the lettercase.

    int countOccurence (char word[], char let){
    int x, count=0;
  

    for(x=0; word[x] != '\0'; x++){
        if(tolower(word[x])==tolower(let){
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

   char * returnAst(char sentence[]){
       int x,y,size;
       char *retval;

       for(x=0; sentence[x] != '\0';x++){
           if(tolower(sentence[x]) == 'f'){
               if(tolower(sentece[x]+3) == 'k'){
                   for(y=x; y<x+2; y++){
                       sentence[y+1]= '*';
                   }
               }
           }
       }
       size= strlen(sentence);
       retval=(char*)malloc(sizeof(char)*size);
       if(retval!= NULL){
           memcpy(retval,sentence,sizeof(char)*size);
       }
    return retval;
   }

3. Create a function that would stripout a specified 
   character in the given string. 
   (No change must be made to the original string)
   Input    ----> My folk uses his fork when eating.
   Output   ----> My folk uss his fork whn ating.

   char * stripChar(char word[], char let){
       int x,size= strlen(word);
        retval = (char*)malloc(sizeof(char)*size);
    if(retval!= NULL){
        printf("successful");
           }
       char retval[];

        strcpy(retval,word);

       for(x=0; retval[x] != '\0',x++){
           if(retval[x]==let){
               retval[x]= retval[x+1];
               size--;
           }
       }
       return retval;
   }


4. Create a function that would get all prime numbers 
   in a given positive integer number collection. 
   (No count is used. Negative one is used as a sentinel. No change of the original collection)

    


5. Create a function that would replace a sequence of 
   numbers in a given collection from a range given. 
   (Granting that the given collection has more numbers than the sequence t be replaced.)