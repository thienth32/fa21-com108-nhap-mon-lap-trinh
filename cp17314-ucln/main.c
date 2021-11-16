#include <stdio.h>

int main() {
    int x, y, max, max_chia_2, ucln = 1;
    printf("Nhap so x:");
    scanf("%d", &x);
    printf("Nhap so y:");
    scanf("%d", &y);
    max = x > y ? x : y;
    max_chia_2 = (int) max/2;
    for (int i = 2; i <= max_chia_2; i++) {
        if(x % i == 0 && y % i == 0){
            ucln = i;
        }
    }

    printf("ucln của %d va %d = %d", x, y, ucln);

    return 0;
}
