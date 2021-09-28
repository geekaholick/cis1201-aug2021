--------------------------------------------
1. Create a function that would count the occurence of 
   a given character in the given string regardless of 
   the lettercase.

   int getChar(char str1[], char x){
       int len,i,count;
       count=0;
       char c;

       tolower(x);
       len = strlen(str1);

       for(i=0;i<len;i++){
       	c=str1[i];
       	tolower(c);
        if(isalpha(c)){
        	if(c==x){
        		count++;
			}  
        }
       }
       return count;
   }
------------------------------------------------------------------

-----------------------------------------------------------------
2. Create a function that would convert a part of the 
   sentence that contains an f and k in a four letter 
   sequence with an asterisk.
   Input    ----> My folk uses his fork when eating.  
   Output   ----> My f**k uses his f**k when eating.

char *convFK(char str1[]){
    int i,len;
    char *s1;
    len=strlen(str1);
    s1=(char*)calloc(len,sizeof(char));

    memcpy(s1,str1);
    
    for(i=0;i<len;i++){
        if(s1[i]=='f'&& s1[i+3]=='k'){
            s1[i+1]='*';
            s1[i+2]='*';
        }
    }
    return s1;
}
------------------------------------------------------
3. Create a function that would stripout a specified 
   character in the given string. 
   (No change must be made to the original string)
   Input    ----> My folk uses his fork when eating.
   Output   ----> My folk uss his fork whn ating.

char *getStrip(char str[]){
    int i,len;
    char *s1,ch1;
    ch1='e';

    len=strlen(str);

    s1=(char*)calloc(len,sizeof(char));

    memcpy(s1,str);

    for(i=0;i<len;i++){
        if(s1[i]==ch1){
            s1[i]=s1[i+1];
        }
    }

    return s1;
}
--------------------------------------------------------
4. Create a function that would get all prime numbers 
   in a given positive integer number collection. 
   (No count is used. Negative one is used as a sentinel. No change of the original collection)
int *getPrime(int *x){
    int i,j;

    int *prime;

    prime=(int*)calloc(x,sizeof(int));

    while(i != -1){
        i++
        for(j=2;j<x;j++){
            if(x%j == 0){
                prime[i];
            }
            }
        }
    }
}
---------------------------------------------------------
5. Create a function that would replace a sequence of 
   numbers in a given collection from a range given. 
   (Granting that the given collection has more numbers than the sequence t be replaced.)
int *getSeq(int *arr, int pos )