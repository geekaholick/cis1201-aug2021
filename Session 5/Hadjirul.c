1. Create a function that would count the occurence of 
   a given character in the given string regardless of 
   the lettercase.

#include <stdio.h>
#include <string.h>

int checkOccor(char *a, char b){

    int i, count=0;
    for(i=0;a[i];i++){
        if(a[i]==b){
            count++;
        }
    }
    return count;
}

int main(){
    char a[1000],b;
    int count=0;

    printf("Enter the string: ");
    gets(a);
    printf("Enter the Character to be Searched:");
    b=getchar();
    count=checkOccur(a,b);
    printf("Character '%c' occurs %d times \n",b,count);

    return 0;
}

2. Create a function that would convert a part of the 
   sentence that contains an f and k in a four letter 
   sequence with an asterisk.
   Input    ----> My folk uses his fork when eating.  
   Output   ----> My f**k uses his f**k when eating.

#include <stdio.h>
#include <string.h>

void replaceChar(char *s, char old, char new){
    int slen=strlen(string);

      for (int i = 0; i < slen; i++)
    if (string[i] == old)
      string[i] = new;
}

int main(){
    char s1[] = "My folk uses his fork when eating.";
    replaceChar(s1, 'ol','**');
    replaceChar(s1, 'r','**');
    printf("s1: %s\n", s1);
    

    return 0;
}

3. Create a function that would stripout a specified 
   character in the given string. 
   (No change must be made to the original string)
   Input    ----> My folk uses his fork when eating.
   Output   ----> My folk uss his fork whn ating.

#include <stdio.h>
#include <string.h>

void removeChar(char *str, char junk){
    char *x, *y;
    for(x=y=str;*x!='\0';x++){
        *y=*x;
        if(*x!=junk)y++;
    }
    *y='\0';
}

int main(void){
    char *str=malloc(strlen("My folk uses his fork when eating.")+1);
    strcpy()
}
4. Create a function that would get all prime numbers 
   in a given positive integer number collection. 
   (No count is used. Negative one is used as a sentinel. No change of the original collection)
5. Create a function that would replace a sequence of 
   numbers in a given collection from a range given. 
   (Granting that the given collection has more numbers than the sequence t be replaced.)