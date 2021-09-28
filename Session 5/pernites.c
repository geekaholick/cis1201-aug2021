// 1. Create a function that would count the occurence of 
//    a given character in the given string regardless of 
//    the lettercase.

int countChar(char string[], char chara) {
    int i, count = 0;

    for(i=0; string[i] != '\0'; i++) {
        if(string[i] == chara) {
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

char* convertStr(char string[], int size) {
    int i, j, k = 0;
    char* temp = (char*)malloc(sizeof(char) * strlen(string));

    for(i=0; string[i] != '\0'; ) {
        if(string[i] == 'f' && string[i+3] == 'k') {
            for(j=i+1; k < 2; i++, k++) {
                string[j] = '*';
            }
        } else {
            i++;
        }
    }

    memcpy(temp, string, sizeof(char) * strlen(string));

    return temp;
}

// 3. Create a function that would stripout a specified 
//    character in the given string. 
//    (No change must be made to the original string)
//    Input    ----> My folk uses his fork when eating.
//    Output   ----> My folk uss his fork whn ating.

char* removeChar(char string[], int size, char chara) {
    int i, j = 0;
    char* temp = (char*)malloc(sizeof(char) * strlen(string));

    for(i=0; string[i] != '\0'; i++) {
        if(string[i] == chara) {
            temp[j] = string[i];
            j++;
        }
    }
    temp[j] = '\0';
    return temp;
}

// 4. Create a function that would get all prime numbers 
//    in a given positive integer number collection. 
//    (No count is used. Negative one is used as a sentinel. No change of the original collection)

int getPrimeNumbers(int array[], int size) {
    int i;
    int temp[size];

    for(i=0; array[i] < size; i++) {
        for(j=i; array[j] / 2; ) {
            if(array[j] % i == 0) {
                temp[j] = array[i];
                j++;
            }
        }
    }
    return temp;
}



// 5. Create a function that would replace a sequence of 
//    numbers in a given collection from a range given. 
//    (Granting that the given collection has more numbers than the sequence t be replaced.)

int replaceNumbers