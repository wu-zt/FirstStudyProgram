#include <stdio.h>
// 打印0-100的质数
int main(){
    for(int n=2; n<=100; n++) {
        int is_prime=1;
        for (int i=2;i<=n-1;i++) {
            if(n%i==0) {
                is_prime=0;
                break;
            }
        }
        if(is_prime==1) {
            printf("%d is a prime number\n",n);
        }
    }
}