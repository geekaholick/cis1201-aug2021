/******************************************************************************
1. Create a function that would count the occurence of 
   a given character in the given string regardless of 
   the lettercase.
*******************************************************************************/
int countGivenChar(char str[], char x){
    int i,ocr=0;
    for(i=0; str[i] != '\0'; ++i){
        if(tolower(str[i])==x){ /*if(str[i]==x)*/
            ocr++; 
        }
    }
    return ocr;
}
//
//check if alphabet bgd? isalpha?
//no nid to use to lower siguro ?
//since regardless of the lettercase 
//for ex. comparing e to E
// Rated by Abarquez: 3 na lang....
//4/5 /8
/************************** ****************************************************
2. Create a function that would convert a part of the 
   sentence that contains an f and k in a four letter 
   sequence with an asterisk.
   Input    ----> My folk uses his fork when eating.  
   Output   ----> My f**k uses his f**k when eating.
******************************************************************************/
char *convertFWord(char s[], int count){
    int i, size;
    char *ns;
    for(i=0; s[i] != '\0'; ++i){
        if(s[i]=='f'&& s[i+3]=='k'){
            s[i+1]=s[i+2]='*';
        }
    }
    size= strlen(s);
    ns=(char*)malloc(sizeof(char)*size);
    if(ns!= '0'){
        memcpy(ns, s, sizeof(char)*size);
    }
    return ns;
}
/******************************************************************************
3. Create a function that would stripout a specified 
   character in the given string. 
   (No change must be made to the original string)
   Input    ----> My folk uses his fork when eating.
   Output   ----> My folk uss his fork whn ating.
******************************************************************************/
char *stripOut(char s[], char letter){
    int i, size;
    char *ns;
    for(i=0; s[i] != '\0'; ++i){
        if(s[i]==letter){
            s[i]=s[i+1];
        }
    }
    size= strlen(s);
    ns=(char*)malloc(sizeof(char)*size);
    if(ns!= '0'){
        memcpy(ns, s, sizeof(char)*size);
    }
    return ns;
}
/******************************************************************************
4. Create a function that would get all prime numbers 
   in a given positive integer number collection. 
   (No count is used. Negative one is used as a sentinel. No change of the original collection)
******************************************************************************/
int *primeArr(int *arr, int num)
{
    int i, j = 0, counter;
    int *p;
    p = (int *)malloc(sizeof(int) * num);
    if (p != '0')
    {
        for(i=0;arr[i]!=-1;i++)
        {
           counter=0;
           j=2;
           while(j<arr[i])
           {
               if(arr[i]%j==0)
               {
                   counter=1;
                   break;
               }
               j++;
           }
           if(counter==0)
           {
               p[j]=arr[i];
           }
        }
        p = (int *)realloc(p, sizeof(int) * j);
        return p;
    }
}
/******************************************************************************
5. Create a function that would replace a sequence of 
   numbers in a given collection from a range given. 
   (Granting that the given collection has more numbers than the sequence t be replaced.)

*******************************************************************************/
