#include <stdio.h>
int main()
{
    int k=0;
    for(int i=0; i<6; i++) // number of line i have to print
    {
        for(int j=1; j<i; j++) // number of element in each line
        {
            k++;
            printf("%d ",k);
    
        }
        printf("\n");
    }
}
   

// *
// **
// ***
// ****
// *****
// ******


// *****
// *****
// *****
// *****
// *****

// 1
// 2 3
// 4 5 6
// 7 8 9 10


// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
// 6 6 6 6 6 6
// 7 7 7 7 7 7 7 
// 8 8 8 8 8 8 8 8
// 9 9 9 9 9 9 9 9 9
// 10 10 10 10 10 10 10 10 10 10


//     *
//    **
//   ***
//  ****
// *****

// A
// B C
// D E F
// G H I J

