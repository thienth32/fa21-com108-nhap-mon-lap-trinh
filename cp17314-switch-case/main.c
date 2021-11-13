#include <stdio.h>

int main() {
    printf("===========Assignment===========\n");
    printf("Lua chon 1 trong cac bai toan:\n");
    printf("1. Kiem tra so nguyen to\n");
    printf("2. Tim uoc chung va boi chung cua 2 so\n");
    printf("3. Tinh tien cho quan karaoke\n");
    printf("Lua chon cua ban:");
    int answer;
    scanf("%d", &answer);
    switch (answer) {
        case 1:
            printf("1. Kiem tra so nguyen to\n");
            break;
        case 2:
            printf("2. Tim uoc chung va boi chung cua 2 so\n");
            break;
        case 3:
            printf("3. Tinh tien cho quan karaoke\n");
            break;
        default:
            printf("Moi ban chon lai bai toan\n");
            break;
    }
    return 0;
}
