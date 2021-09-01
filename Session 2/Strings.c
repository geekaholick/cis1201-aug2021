// strlen,
// strcpy,
// strcmp,
// strcat,

// -------------------

#include <stdio.h>
#include <string.h>

int getLength(char str[]) {
    int i;

    i=0;
    while(str[i] != '\0') {
        i++;
    }

    return i;
}

int getLength2(char str[]) {
    int i;

    for(i=0; str[i] != '\0'; ++i) {}

    return i;
}

void copyString(char destination[], char source[]) {
    int i;

    for(i=0; source[i] != '\0'; ++i) {
        destination[i] = source[i];
    }
    destination[i] = '\0';
}

int compareString(char stringA[], char stringB[]) {
    int i;

    for(i=0; stringA[i] != '\0' && stringB[i] != '\0'; ++i) {
        if(stringA[i] == stringB[i]) {
            continue;
        } else  if(stringA[i] < stringB[i]){
            return -1;
        } else {
            return 1;
        }
    }

    if(getLength(stringA)>getLength(stringB)) {
        return 1;
    } else if(getLength(stringA)<getLength(stringB)) {
        return -1;
    } else {
        return 0;
    }
}


int main() {
    // char text[20];
    // char strA[20], strB[20];

    // printf("Enter a string: ");
    // gets(text);


    // printf("The length of the string is %d. (getLength())\n", getLength(text));
    // printf("The length of the string is %d. (getLength2())\n", getLength2(text));
    // printf("The length of the string is %d. (strlen())\n", strlen(text));

    // strcpy(strA, "Andre Von Andalle");
    // copyString(strB, "Andre Von Andalle");

    // printf("\'%s\' == \'%s\' ====> %d", strA, strB, strcmp(strA, strB));

    // printf("\nOur compare string: %d\n", compareString("abcd", "Abcd"));
    // printf("Built in compare string: %d\n", strcmp("abcd", "Abcd"));

    printf("0 - %c = %d", 'D', 0 -'D');


    return 0;
}