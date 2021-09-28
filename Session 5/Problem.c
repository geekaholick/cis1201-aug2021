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

// two kinds representation of arrays
// : array + count
// : array with a sentinel value at the end

// void function(int list[], int count, int seq[], int seqCnt, int start, int number)
// int *function(int list[], int seq[], int start, int number)

// list ->> 1, 2, 3, 4, 5, 6, 7, 8
// seq  ->> 6, 3, 2
// start->> 2
// number->> 2
// list ->> 1, 2, 6, 3, 5, 6, 7, 8