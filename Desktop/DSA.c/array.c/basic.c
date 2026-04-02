#include<stdio.h>
#include<stdlib.h>
int main()
{
    // what is array?
    // array is a collection of similar data elements.ex: int ,char 
    //the elemnts of array are stored in consecutive memory locations and are referenced by a index.


    //DECLARATION
    /// datatype name [size];
    int i,marks[10];
    for(i=0;i<10;i++)
    marks[i]=-1;
    for(i=0;i<10;i++)
    printf("%d",marks[i]);// output -1-1-1-1-1-1-1-1-1-1
    
    return 0;
}// calculating the address 


//A[K]=BA(A)+W(K-lower_bound)
// copy pen .
//calculating the length of an array. copy pen
// length=upperbound-lowerboud+1
