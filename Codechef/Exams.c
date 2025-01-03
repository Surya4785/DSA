/*EXAMS
In Chefland, there are X schools, and each school has Y students. The year end results are in and a total of Z students passed the exams.
Assuming that all students appeared for the exams, find whether the number of students who passed in Chefland was strictly greater than 50%.

Input Format
- The first line of input will contain a single integer T, denoting the number of test cases.
- Each test case consists of three space-separated integers X,Y, and Z, as mentioned in the statement.
    
Output Format
For each test case, output on a new line, YES, if the total number of students who passed in Chefland was strictly greater than 50%,
otherwise print NO.

You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as 
identical).

CONTRAINTS
1<=T<=2*10^4
1<=X<=5
1<=X<=50
0<=Z<=X*Y  */



#include<stdio.h>
int main()
{
    int i,t,x,y,z;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        int c=(x*y)/2;
        if(z>c)
        {
            printf("\nyes");
        }
        else{
            printf("\nno");
        }
    }  
}
