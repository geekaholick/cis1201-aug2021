/*1. Create a function that would count the occurence of 
   a given character in the given string regardless of 
   the lettercase.*/

int countChar(char arr[], char given){
    int count=0;
    for(int i=0;arr[i]!="\0";i++){
        tolower(arr[i]);
        if(arr[i]==given){
            count++;
        }
       return count;
    }
}

/******************************************************************************
2. Create a function that would convert a part of the 
   sentence that contains an f and k in a four letter 
   sequence with an asterisk.
   Input    ----> My folk uses his fork when eating.  
   Output   ----> My f**k uses his f**k when eating.
******************************************************************************/

char convert(char arr[]){

    for(int i=0;arr[i]!='\0';i++){
        tolower(arr[i]);
        tolower(arr[i+3]);
        if(arr[i]=='f'&&arr[i+3]=='k'){
            arr[i]='*';
            arr[i+3]="*";
        }
    }
}

/******************************************************************************
3. Create a function that would stripout a specified 
   character in the given string. 
   (No change must be made to the original string)
   Input    ----> My folk uses his fork when eating.
   Output   ----> My folk uss his fork whn ating.
******************************************************************************/

char remove(char arr[], char cr){
    for(int i=0;arr[i]!="\0";i++){
        if(arr[]);
    }
}