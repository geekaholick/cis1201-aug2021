x// 1. Create a function that would count the occurence of 
//    a given character in the given string regardless of 
//    the lettercase.

    #include <stdio.h>
    #include <string.h>
    #define MAX 30

    int charCount(char string[], char toCheck,int count){
        int i;
        for(i = 0; i < strlen(string); i++){
            if(string[i] == toCheck){
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
// 3. Create a function that would stripout a specified 
//    character in the given string. 
//    (No change must be made to the original string)
//    Input    ----> My folk uses his fork when eating.
//    Output   ----> My folk uss his fork whn ating.

    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #define MAX 50

    char *charStripout(char str[], char x){
        char temp[MAX], *toInsert;
        int i, j;
        strcpy(temp, str);
        
        for(i = 0; temp[i] != '\0'; i++){
            if(temp[i] == x){
                for(j = i; temp[j] != '\0'; j++){
                    temp[j] = temp[j+1];
                }
                i--;
            }
        }
        
        toInsert = (char*) malloc(sizeof(char)+i);
        memcpy(toInsert, temp, sizeof(char)+i);
        
        return toInsert;
    }

    int main(){
        char str[MAX] = "My folk uses his fork when eating.";	
        char *hold = charStripout(str, 'e');
        puts(hold);
        return 0;
    }

// 4. Create a function that would get all prime numbers 
//    in a given positive integer number collection. 
//    (No count is used. Negative one is used as a sentinel. No change of the original collection)
// 5. Create a function that would replace a sequence of 
//    numbers in a given collection from a range given. 
//    (Granting that the given collection has more numbers than the sequence t be replaced.)