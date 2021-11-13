#include <stdio.h>

int main() {
    int answer;
    do{
        printf("===========Assignment===========\n");
        printf("Lua chon 1 trong cac bai toan:\n");
        printf("1. Kiem tra so nguyen to\n");
        printf("2. Tim uoc chung va boi chung cua 2 so\n");
        printf("3. Tinh tien cho quan karaoke\n");
        printf("Lua chon cua ban:");

        scanf("%d", &answer);
    } while (answer < 1 || answer >3);


    return 0;
}
