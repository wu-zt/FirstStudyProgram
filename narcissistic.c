#include <stdio.h>
int main() {
    for (int i = 100; i <= 999; i++) {
        int a = i / 100;//这是百位
        int b = i % 10;//这是个位
        int c = (i - a * 100) / 10;

        if (a*a*a + b*b*b + c*c*c == i) {
            printf("%d\n", i);

        }
    }
}

