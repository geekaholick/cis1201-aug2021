#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 1.Create a function that would count the occurence of 
//    a given character in the given string regardless of 
//    the lettercase.
int countLetters(char[], char);
char* censorLetters(char[]);
char* removeLetters(char[], char);

int main(){
    char sentence [20] = "Crack creak cackle";
    char sentence2 [40] = "My folk uses his fork when eating";
    char* censored = (char*) malloc (sizeof(char) * strlen(sentence2));
    char* removed = (char*) malloc (sizeof(char) * strlen(sentence2));
    char letter = 'c';
    int count = 0;

    count = countLetters(sentence, letter);

    printf("%d\n", count);

    censored = censorLetters(sentence2);

    printf("%s\n", censored);

    removed = removeLetters(sentence2, 'e');

    printf("%s", removed);
}

int countLetters(char sentence[20], char letter){
    int i, counter = 0;
    char letter2;

    if(letter >= 65 && letter <= 90){
        
        letter2 = letter + 32;
        
    }else if(letter >= 97 && letter <= 122){
        
        letter2 = letter - 32;
    }

    for(i = 0; sentence[i] != '\0'; i++){
        if(sentence[i] == letter || sentence[i] == letter2){
            counter++;
        }
    }

    return counter;
}

char* censorLetters(char sentence2[20]){
    char* temp = (char*) malloc (sizeof(char) * strlen(sentence2));
    int i, j = 0;

    strcpy(temp, sentence2);

    for(i = 0; temp[i] != '0'; i++){
        if(temp[i] == 'f' || temp[i] == 'F'){
            j = i + 1;
            while(temp[j] != 'k'){
                temp[j] = '*';

                j++;
            }
        }
    }

    return temp;
}

char* removeLetters(char sentence2[20], char letter){
    char* temp = (char*) malloc (sizeof(char) * strlen(sentence2));
    int i, j = 0;

    for(i = 0; sentence2[i] != '0'; i++){
        if(sentence2[i] != letter){
            temp[i] = sentence2[i];
        }
    }

    return temp;
}