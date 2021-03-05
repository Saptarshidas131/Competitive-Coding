/*
Given a string, , consisting of alphabets and digits, find the frequency of each digit in the given string.

Input Format

The first line contains a string,  which is the given number.

Constraints
1<= len(num) <= 1000

All the elements of num are made of english alphabets and digits.

Output Format

Print ten space-separated integers in a single line denoting the frequency of each digit from  to .

Sample Input 0

a11472o5t6

Sample Output 0

0 2 1 0 1 1 1 1 0 0

Explanation 0

In the given string:

 occurs two times.
 and  occur one time each.
The remaining digits  and  don't occur at all.

Sample Input 1

lw4n88j12n1

Sample Output 1

0 2 1 0 1 0 0 0 2 0 
Sample Input 2

1v88886l256338ar0ekk

Sample Output 2

1 1 1 2 0 1 2 0 5 0 
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char s[1000];
    int a[10] = {0}, i, j;
    
    scanf("%[^\n]", s);
    
    for(i=0; i<strlen(s); i++)
    {
        if(isdigit(s[i]))
        {
            for(j=0; j <= 9; j++)
                {
                    if((int)s[i] == j+48)
                        a[j]++;
                }
        }
    }
    
    for(j=0; j <=9; j++)
        printf("%d ",a[j]);
    
    return 0;
}

