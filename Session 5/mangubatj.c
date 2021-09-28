// 1. Create a function that would count the occurence of 
//    a given character in the given string regardless of 
//    the lettercase.
// 2. Create a function that would convert a part of the 
//    sentence that contains an f and k in a four letter 
//    sequence with an asterisk.
//    Input    ----> My folk uses his fork when eating.  
//    Output   ----> My f**k uses his f**k when eating.
// 3. Create a function that would stripout a specified 
//    character in the given string. 
//    (No change must be made to the original string)
//    Input    ----> My folk uses his fork when eating.
//    Output   ----> My folk uss his fork whn ating.
// 4. Create a function that would get all prime numbers 
//    in a given positive integer number collection. 
//    (No count is used. Negative one is used as a sentinel. No change of the original collection)
// 5. Create a function that would replace a sequence of 
//    numbers in a given collection from a range given. 
//    (Granting that the given collection has more numbers than the sequence t be replaced.)
#include <stdio.h>
#include <string.h>

int countOcc(char string[], char c);
char * FAndK(char string[]);
char * stripChar(char string[],char e);
int  * primeNumbers(char string[]);
int main()
{
    char S[40] = "H1 my n4me is fhok, im 20 yrs old";
    char conv[40],sC[40];
    int co,primeNum;

    co = countOcc(S,'i');
    conv = FAndK(S);
    sC = stripChar(S,'e');
    primeNum = primeNumbers(S);

    return 0;
}


int countOcc(char string[], char c)
{
    int occ,x,y = strlen(string);

    for(x = occ = 0; x < y ; x++){
        if(c == string[x]){
           occ++; 
        }
    }

    return occ;
}

char * FAndK(char string[])
{
    int i;
    char * withAst =(char*)malloc(sizeof(int)*strlen(string));

    for(i = 0; i < strlen(string) ; i++){
        if(string[i] == 'f' && string[i+3] == 'k' && string && isspace(string[i+4])==1){
            strcpy(withASt,string);
            withAst[++i] = '*';
            withAst[++i] = '*';
        }    /* code */
    }

    return withAst;
}

char * stripChar(char string[], char e)
{
    int i;
    char * sC = (char*)malloc(sizeof(char)*strlen(string));

    for(i = 0 ; i < strlen(string); i++){
        sC[i] = (string[i] == e) ? string[++i] : string[i];  
    }

    return sC;
}

