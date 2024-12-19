/*Subscriptions
A new TV streaming service was recently started in Chefland called the Chef-TV. A group of N friends in Chefland want to buy Chef-TV subscriptions.
We know that 6 people can share one Chef-TV subscription. Also, the cost of one Chef-TV subscription is X rupees.
Determine the minimum total cost that the group of N friends will incur so that everyone in the group is able to use Chef-TV.

Input Format
- The first line contains a single integer T — the number of test cases. Then the test cases follow. 
- The first and only line of each test case contains two integers 
  N and X — the size of the group of friends and the cost of one subscription.

Output Format
For each test case, output the minimum total cost that the group will incur so that everyone in the group is able to use Chef-TV.

CONSTRAINTS
1<=T<=1000
1<=N<=100
1<=X<=1000   */

#include <stdio.h>
int main() 
{
    int t,n,x,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
    scanf("%d%d",&n,&x);
    int m=n/6;
    if(n%6!=0){
        m=m+1;
    }
    printf("\n%d",m*x);
    }
}
