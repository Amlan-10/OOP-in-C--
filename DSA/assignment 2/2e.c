// 5. WAP to read a number and delete the even location digit of that number.Example :
//  i) input 1234. output is 13.
// ii) input 357 output is 37
// iii) input 7637272 output is 7322

#include <stdio.h>
int new_num(int);
int main()
{
    int n, result, m;
    printf("Enter a number: ");
    scanf("%d", &n);
    result = new_num(n);
    printf("The new number is: %d",result);
    return 0;
}
int new_num(int n)
{
    int rem, rev = 0, new = 0, count = 0;
    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    while (rev > 0)
    {
        rem = rev % 10;
        count++;
        if (count % 2 == 1){
            new = new * 10 + rem;
        }
        rev = rev / 10;
    }
    return new;
}