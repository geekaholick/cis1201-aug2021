1. Create a function that would count the occurence of 
   a given character in the given string regardless of 
   the lettercase.

  
    int countOcc(char str[], int x){
        int i, count=0;
        
        for (i = 0; str[i]!=/0; i++)
        {
            if(str[i]==x){
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

    char convertSen(char str[]){
        int i, size=strlen(str);
        char *strN;

        strN=(char*)malloc(sizeof(char)*size);

        for(i=0;strN!=/0;i++){
            if(strN[i]=='f' && strN[i]=='k'){
                strN[i+1]="*";
                strN[i+2]="*";
            }
        }
        return strN;
    }

3. Create a function that would stripout a specified 
   character in the given string. 
   (No change must be made to the original string)
   Input    ----> My folk uses his fork when eating.
   Output   ----> My folk uss his fork whn ating.

   char stripOut(char str[], char choice){
       int i, size=strlen(str);
       char *strN;

        strN=(char*)malloc(sizeof(char)*size);

        for (i = 0; strN[i]!=/0; i++){
            if(strN[i]==choice){
               strN[i]=strN[i+1];
            }  
        }
       return strN;
    }