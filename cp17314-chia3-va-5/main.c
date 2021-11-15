#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 100){
        if(i%3==0 && i%5==0){
            printf("so %d chia het cho ca 3 va 5\n", i);
        }
        i++;
    }
    return 0;
}
