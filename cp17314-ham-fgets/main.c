#include <stdio.h>

int tinh_so_lon_nhat(a, b, c){
    int max = a > b ? a : b;
    max = max > c ? max : c;
    return max;
}
int main() {
//    printf("Nhap ho va ten:");
//    char name[100];
//    fgets(name, 100, stdin);
//    printf("%s", name);
    int a, b, c;
    printf("Nhap so a:");
    scanf("%d", &a);
    printf("Nhap so b:");
    scanf("%d", &b);
    printf("Nhap so c:");
    scanf("%d", &c);
    printf("So lon nhat trong 3 so la: %d", tinh_so_lon_nhat(a, b, c));
    return 0;
}
