// 1. Create a function that would count the occurence of 
//    a given character in the given string regardless of 
//    the lettercase.

   void countCharOccurance(char str[],char smallLetter, char bigLetter){
    int ctr=0, i;
    for(i=0;str[i]!='\0';i++){
    if(str[i]==smallLetter||str[i]==bigLetter){
        ctr++;
        }
    }
}




// 3. Create a function that would stripout a specified 
//    character in the given string. 
//    (No change must be made to the original string)
//    Input    ----> My folk uses his fork when eating.
//    Output   ----> My folk uss his fork whn ating.

void deleteChar(char str[],char ch){
int len,i,j;
len = strlen(str);

      for(i = 0; i < len; i++){
        if(str[i] == ch)
        {
            for(j = i; j < len; j++)
            {
                str[j] = str[j + 1];
            }
            len--;
            i--;
        } 
    }
}