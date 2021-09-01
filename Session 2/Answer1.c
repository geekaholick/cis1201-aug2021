//--------------------




//-----ANDALES-----//
#include<stdio.h>
#include<string.h>

int main(){
    char x[10]="hi";
	char y[10]="guys";
	char z[10];
	
	
	strcpy(x,z);
	printf("%s", z);
	
	strcat(x,y);
	printf("\n%s",x);
	
	if(strcmp(x,z)==0){
		printf("\nStrings are equal");
	}else {
		printf("\nStrings are not Equal");
	}
	
	return 0;
	
}


//-----MENDOZA------

#include <stdio.h>
#include <string.h>

//strcmp
//strcpy
//strlen

int main(){
	char name[] = "Henrix";
	char newString[100];
	
	int i=0;
	
	printf("STRLEN:\n");
	for(;name[i]!='\0'; i++);
	printf("The length of the old string is: %d\n", i);
	
	printf("\nSTRCPY:");
	for(i=0;name[i]!='\0'; i++){
		newString[i] = name[i];
	}
	printf("\nname: %s is copy to the 'newString' variable: %s\n", name, newString);	

	printf("\nSTRCMP:");
	int flg = 0;
	for(i=0;name[i]!='\0'; i++){
		if(newString[i] == name[i]){
			flg = 1;
		} else{
			flg = 0;
		}
	}
	flg != 0 ? printf(" Both Strings are Equal") : printf("Both Strings are Not Equal");
	
	return 0;
}

//-----MENDOZA-END-----




// G // 50% di ko sure hehe
#include <stdio.h>
#include <string.h>

char strCopy(char source[], char dest[]){

char source[] = "Annyeong Friends";
char dest[20];

strcpy(dest,source);

printf("Source String = %s", source);
printf("Dest String = %s", dest);

{ 

char strCat(char source[], char dest[]){

 char source[] = "Annyeong!" ;
 char dest[30] = "Friends" ;
    
    strcat (target, source);
    printf ("Source string = %s", source) ;
    printf ("Target string = %s", dest ) ;
}

char strCmp(char string1[], char string2[]){ 

char string1[] = "Lalisa" ;
char string2[] = "Manoban" ;
int i,j,k;
i = strcmp (string1, "Lalisa") ;
j = strcmp (string1, string2) ;
k = strcmp (string1, "Lalisa Lili") ;
printf ("%d %d %d", i, j, k ) ; 

}

// G END//

// di ko sure ani haha//
#include <stdio.h>

int main(){
    char inputString[20];

    printf("Input a string to be copied to another variable");
    gets(inputString);


    printf("Returned string from a new variable %s", stringCopy(inputString));


}

char stringCopy(char string[]){
    char copiedString;

    copiedString = memcpy(copiedString, string, getLength(string)+ 1);

    return copiedString;

    
}

int getLength(char string[]){
    for(int i = 0; string[i] != '\0'; ++i){
    }

    return i;
}




//--------jan
void cpy(char text1[]){
	int size=strlen(text1);;
	char text2[size];
	strcpy(text2,text1);
	printf("%s",text2);
	
}
void comp(char text1[],char text2[]){
	if(strcmp(text1,text2)==0){
		printf("Strings are equal");
	}else{
        printf("String not equal");
    }		
}


----///

//akoa ni :)
char cpyString(char A[], char C[]){
    char A[15]="HELLO";
    char C[10];
	int i;
		for(i=0; A[i] != '\0'; i++){
			C[i] = A[i];
		}
        printf("\noriginal str: %s", A);
		printf("\ncopied str: %s", C);		
}

char catString(char A[], char B[]){
    char A[15]="HELLO";
    char B[10]="FRIEND";
	int i,j;
		for (i=0; A[i] !='\0'; i++);
		for (j=0; B[i] !='\0'; j++, i++){
			A[i]=B[j];
		}
        printf("\nstrcat: %s", A);
}
//end :)




void stringCopy(char a [], char b[]);    

int main()
{
;
    char a[20], b[20];
    printf("Enter string: ");
    gets(a);
    stringCopy(a, b); // function call
    printf("The copied string is: %s", b);
    return 0;
}

//-------------------
void stringCopy(char a [], char b[]);    

int main()
{
;
    char a[20], b[20];
    printf("Enter string: ");
    gets(a);
    stringCopy(a, b); // function call
    printf("The copied string is: %s", b);
    return 0;
}

//-------------------------
void stringCopying(char vic[], char thor[]) 
{
    int i = 0;
    while(vict[i] != '\0')
    {
        thor[i] = vic[i];
        i++;
    }

   
    thor[i] =' \0';    
}
//---------------------

//Abarquez

#include <stdio.h>
#include <string.h>

int getLength(char str[]); 
int myStcmp(char a[],char b[]);
void myStrcat(char a[],char b[]);

int main() {
    char string1[20], string2;
    char string3= "Hi";
    char string4= "World";
    string1 = "Hoy";
    //myStrcpy
    string2 = memcpy(copiedString, string, getLength(string1)+ 1);
    printf("%s", string2);

    //myStrcmp
    int comp = myStcmp(string1, string3);
    printf("If strings are the same, return 0.\nElse, return 1.");
    printf("\n%d", comp);
    
    //myStrcat
    myStrcat(string3, string4);
    return 0;
}


int getLength(char str[]) {
    int i;

    i=0;
    while(str[i] != '\0') {
        i++;
    }

    return i;
}

int myStcmp(char a[],char b[])  
{  
    int r=0,i=0;   
    while(a[i]!='\0' &&b[i]!='\0')  
    {  
       if(a[i]!=b[i])  
       {  
           r=1;  
           break;  
       }  
       i++;  
    }  
    if(r==0)  
    return 0;  
    else  
    return 1;  
}  
void myStrcat(char a[],char b[]){
    int aCount=0, bCount=0
    while(a[aCount]!='\0'){
        aCount++;
    }
  while(b[bCount]!='\0')
  {
    a[aCount]=b[bCount];
    bCount++;
    aCount++;
  }
  a[aCount]='\0';
  printf("\nConcatenated String is %s",a);
}






//---------SILVERIO--------

int strlen(char a[]){
    int length = 0;

    for(int i = 0; a[i] != '\0'; i++){
        ++length;
    }
    return length;
}

int strcmp(char a[], char b[]){
    int length = 0;

    for(int i = 0; a[i] != '\0'; i++){
        ++length;
    }
    //understood sir

    int compared = 0;
    int conclusion;

    for(int i = 0; i <= length; i++){
        if(a[i] > b[i]){
            ++compared;
        }else if(a[i] < b[i]){
            --compared;
        }
    }

    return conclusion = (compared != 0) ? compared: 0;
}


//----------------
char *myStrcpy(char A[],int n){
	char *retArr;
	int i;
	retArr=(char*)malloc(sizeof(char)*n); 		
	
	if(retArr != NULL){
	for(i=0;i<n;i++){
		retArr[i]=A[i];
	}
}
	return retArr;
}

char *myStrCat(char A[],char B[],int n){
	char *retArr;
	int i,j=0;
	retArr=(char*)malloc(sizeof(char)*2*n); 		
	
	if(retArr != NULL){
	retArr=myStrcpy(A,n);
	for(i=n;i<2*n;i++){
		retArr[i]=B[j++];
	}
}
	return retArr;
}

int myStrcmp(char A[],char B[],int n){
	int cmp=0;
	int i;
	for(i=0;A[i]<B[i];i++){
		cmp=A[i]-B[i];
	}
	
	return cmp;
}
/*************************************************/