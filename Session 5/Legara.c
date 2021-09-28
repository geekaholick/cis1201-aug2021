/* 
1. Create a function that would count the occurence of 
   a given character in the given string regardless of 
   the lettercase.
2. Create a function that would convert a part of the 
   sentence that contains an f and k in a four letter 
   sequence with an asterisk.
   Input    ----> My folk uses his fork when eating.  
   Output   ----> My f**k uses his f**k when eating.
3. Create a function that would stripout a specified 
   character in the given string. 
   (No change must be made to the original string)
   Input    ----> My folk uses his fork when eating.
   Output   ----> My folk uss his fork whn ating.
4. Create a function that would get all prime numbers 
   in a given positive integer number collection. 
   (No count is used. Negative one is used as a sentinel. No change of the original collection)
5. Create a function that would replace a sequence of 
   numbers in a given collection from a range given. 
   (Granting that the given collection has more numbers than the sequence t be replaced.) 
*/

#include<stdio.h>
#include<ctype.h>
#define MAX 50

int countOccurence(char[], char);
char *convertToAsterisk(char[]);
char *stripString(char[], char);
int main() {

    char string[MAX] = "Hello World";
    char string2[MAX] = "Joe Mama is a lazy folk";
    int occurenceResult;

    occurenceResult = countOccurence(string, 'l');

    return 0;

}

int countOccurence(char givenString[], char givenChar) {

    int x;
    int count;

    for (x = 0; givenString[x] != '\0'; x++) {

        if (givenString[x] == givenChar ) {

            count++;

        }

    }

    return count;

}

char *convertToAsterisk(char givenString[]) {

    int x;
    char temp[MAX], *convertedString;
    

    for (x = 0; givenString[x] != '\0'; x++) {

        if (toLower(givenString[x]) == 'f' && toLower(givenString[x+3]) == 'k') {

            temp[x+1] = '*';
            temp[x+2] = '*'; 

        } else {

            temp[x] = givenString[x];

        }

    }
    temp[x++] = '\0';

    convertedString = (char*) malloc(sizeof(char)*x);

    if (convertedString != NULL) {

        memcpy(convertedString, temp, sizeof(char)*x);

    }

    return convertedString;

}

char *stripString(char givenString[], char givenChar) {

    int x;
    char temp[MAX];

    for (x = 0; givenString[x] != '\0'; x++) {

        if (toLower(givenString[x]) == toLower(givenChar)) {

            break;

        } else {

            temp[x] = givenString[x];

        }

    }
    temp[x++] = '\0';

    convertedString = (char*) malloc(sizeof(char)*x);

    if (convertedString != NULL) {

        memcpy(convertedString, temp, sizeof(char)*x);

    }

    return convertedString;

}