// ctype functions
// o	isalpha(), isdigit(),ispunct(), isspace()
// o	isupper(), islower(),
// o	toupper(), tolower()

#include<stdio.h>
#include<ctype.h>

int isNumber(char c) {
    return (c>='A' && c<='Z');
}

// 1. Change a given character in a string.
// "Hi guys, welcome to my blog."
// o - a
// "Hi guys, welcame to my blag."

// 2. Check the string if palindrome or not.
// Hannah
// anna

//Abarquez
void changeChar(char str[], char l){
    int i;
    char c;
    printf("Enter character you change letter into:");
    scanf("%c", &c);
    for(i=0; str[i] !='/0';i++){
        if (str[i]==l)
        {
            str[i]=c;
        }
        
    }
} 

void charChangeInString(char string[], char oldChar, char newChar) {
    int i;
    char *store;
    for(i=0; string[i] != '\0'; ++i){}
    store=(char*)malloc(sizeof(char)*i);
    memcpy(store,string,sizeof(char)*i+1);

    for(i=0; string[i] != '\0'; ++i) {
        if(string[i] == oldChar) {
            string[i] = newChar;
        }
    }
}
//-------------------------------------------------------------------
char *charChangeInString(char string[], char oldChar, char newChar) {
    int i;
    char temp[20], *convertedString;

    for(i=0; string[i] != '\0'; ++i) {
        temp[i] = (string[i] == oldChar)? newChar: string[i];
    }
    temp[i++] = '\0';

    convertedString = (char *) malloc(sizeof(char)*i);
    if(convertedString != NULL) {
        memcpy(convertedString, temp, sizeof(char)*i);
    }
    return convertedString;
}
//-------------------------------------------------------------------
void charChangeInString(char string[], char oldChar, char newChar, char newString[]) {
    int i;

    for(i=0; string[i] != '\0'; ++i) {
        newString[i] = (string[i] == oldChar)? newChar: string[i];
    }
    newString[i++] = '\0';
}
    
int isStringPalindrome(char string[]) {
    int i, count, halfCount;

    for(i=0; string[i] != '\0'; ++i) {}
    count = i;
    halfCount = i/2;

    for(i=0; i<halfCount; ++i) {
        if(string[i] != string[count-i-1]) {
            return 0;
        }
    }

    return 1;
}

scanf() --> general
gets() ---> get string
getch()
getche()


//Abarquez - function call
//char s[]="This is Programming 2.";
//char letter;
//printf("Enter character you want to change in the string:");
//scanf("%c", &letter);
//changeChar(s, letter);

int main() {
    // char character;
    // int i;

    // do {
    //     printf("Enter a character: ");
    //     character = getche();

    //     printf("\nIs isalpha of %c? %d\n", character, isalpha(character));
    //     printf("Is isdigit of %c? %d\n", character, isdigit(character));
    //     printf("Is ispunct of %c? %d\n", character, ispunct(character));
    //     printf("Is isspace of %c? %d\n", character, isspace(character));
    //     printf("Is isupper of %c? %d\n", character, isupper(character));
    //     printf("Is islower of %c? %d\n", character, islower(character));
    // } while(character != '0');

    
    // for(i=0; i<256; i++) {
    //     printf("%d [%c]  ", i, i);
    // }
    char character = 'B';

    printf("%c - %d\n", character, isNumber(character));

    system("PAUSE");
    return 0;
}

// 1. Change a given character in a string.
// "Hi guys, welcome to my blog."




void changeStr (char string[]){
    int x;
    
    for(x=0; string[x] !='\0'; x++){
        if(string[x]=='r'){
         {   
            string[x]='v'
         }
    }
}

void checkPalendr
















