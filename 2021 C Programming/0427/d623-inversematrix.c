//d623 - Inverse Matrices
/*
    Sample Input 1:
    1 4
    2 9

    Sample Output 1:
    9.00000 -4.00000
    -2.00000 1.00000

    Sample Input 2:
    1 1
    1 1

    Sample Output 2: cheat! (no inverse matrix)
*/

/*Solution
    Step 1: Input First Row (A[0][0] and A[1][0])
    Step 2: Input Second Row (A[0][1] and A[1][1])
            if A=
            {0 0}
            {0 0}
            then break;
    Step 3: Calculate det(A)
            if det(A)==0, then print "cheat"
    Step 4: Multiply each element by 1/det(A)
    Step 5: Swap A[0][0] and A[1][1]
    Step 6: add - to A[1][0] and A[0][1]
    Step 7: print each row in float format
*/

#include <stdio.h>

int main()
{
    float A[2][2],det,temp;

    while(scanf("%f %f",&A[0][0],&A[1][0])!=EOF && scanf("%f %f",&A[0][1],&A[1][1])!=EOF)
    {
        if(A[0][0]==0 && A[0][1]==0 && A[1][0]==0 && A[1][1]==0)
            break;

        det=(A[0][0]*A[1][1])-(A[1][0]*A[0][1]);

        if(det==0)
            printf("cheat!\n");
        else
        {
            temp=A[0][0];
            A[0][0]=(A[1][1]/det);
            A[1][0]=(-A[1][0])/det;
            A[0][1]=(-A[0][1])/det;
            A[1][1]=(temp/det);
            printf("%.5f %.5f\n",A[0][0],A[1][0]);
            printf("%.5f %.5f\n",A[0][1],A[1][1]);
        }

        
    }

    return 0;
}