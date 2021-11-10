#include <stdio.h>

int main() {

    char name[100];
    int birth_year;
    printf("Họ và tên bạn là gì?");
    fgets(name, 100, stdin);

    printf("Bạn sinh năm bao nhiêu?");
    scanf("%d", &birth_year);
    int age = 2021 - birth_year;

    printf("Xin chào: %s \n", name);
    printf("bạn %d tuổi đúng không?", age);

    return 0;
}
