#include<stdio.h>
int lcm(int n1, int n2){
    int max=1;
    while (1) {
        if (max % n1 == 0 && max % n2 == 0) {
            
            break;
        }
        ++max;
    }
    return max;
}
int main(){
int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    printf("LCM = %d", lcm(n1,n2));

return 0;
}    