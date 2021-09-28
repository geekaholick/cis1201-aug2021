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

/////////////////////////////////////////////////
int countOccur(char str[], char x){
    int ctr, occ=0;
    int count = strlen(str);

    for(ctr=0; ctr < count; ctr++){
        if(strcmpi(str[ctr], x)){
            occ++;
        }
    }
    return occ;
}
////////////////////////////////////////////////
char* convertAst(char str[]){
    int ctr;
    int count = strlen(str);
    char* n = (char*)calloc(count, sizeof(char));
    
    strcpy(n, str);
    for(ctr = 0; ctr < count; ctr++){
        if(strcmpi(n[ctr], 'f') && strcmpi(n[ctr+3], 'k')){
            n[ctr+1] = '*';
            n[ctr+2] = '*';
        }
    }
    return n;
}
/////////////////////////////////////////////////
char* stripoutChar(char str[]){
    int ctr;
    int count = strlen(str);
    char* n = (char*)calloc(count, sizeof(char));

    strcpy(n, str);
    for(ctr = 0; ctr < count; ctr++){

    }
}