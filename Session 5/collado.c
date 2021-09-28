#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 20
void countOccurence (char *string1[]);

int main(){
	
	char *string1[20]={"hello there"};
	countOccurence ( string1);
	
	return 0;
}








//1. Create a function that would count the occurence of 
//   a given character in the given string regardless of 
//   the lettercase.

void countOccurence (char *string1[]){
	int i,j,k=1,result;
	int occu=1;
	int ocr[SIZE];
	
	for(i=0;string1[i]!='\0';i++){
		
		for(j=1;string1[j]!='\0';j++){
	
		result=strcmp(string1[i],string1[j]);
		if(result == 0){
			occu++;
		}else{
			break;
		}
		
			}
			ocr[i]=occu;
			
	}

	printf(" output: %d ", ocr);
	
}

//strcmp is case sensitive?
//
//string functions used
//

//2. Create a function that would convert a part of the 
//   sentence that contains an f and k in a four letter 
//   sequence with an asterisk.
//   Input    ----> My folk uses his fork when eating.  
//   Output   ----> My f**k uses his f**k when eating.

//3. Create a function that would stripout a specified 
//   character in the given string. 
//   (No change must be made to the original string)
//   Input    ----> My folk uses his fork when eating.
//   Output   ----> My folk uss his fork whn ating.
//4. Create a function that would get all prime numbers 
//   in a given positive integer number collection. 
//   (No count is used. Negative one is used as a sentinel. No change of the original collection)
//5. Create a function that would replace a sequence of 
//   numbers in a given collection from a range given. 
//   (Granting that the given collection has more numbers than the sequence t be replaced.)


   