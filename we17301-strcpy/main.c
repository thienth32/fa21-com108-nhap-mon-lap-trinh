#include <stdio.h>
#include <string.h>

int main() {
//    char name[100];
//    char name2[100] = "Nguyen van a"; // [100] : 1 chuỗi các ký tự - tối đa 100 ký tự cho chuỗi
//    strcpy(name, name2);
//    printf("%s", name);

    char name[100];
    printf("Nhap ten: ");
    gets(name);
//    fgets(name, 100, stdin);
    printf("%s", name);

    return 0;
}
