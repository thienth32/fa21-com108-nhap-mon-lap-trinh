#include <stdio.h>

int main() {
//    %d - hiển thị/nhận giá trị là số
//    %c - hiển thị/nhận giá trị cho 1 ký tự
//    %f - hiển thị/nhận giá trị cho 1 số thực
//    %s - hiển thị/nhận giá trị cho 1 chuỗi
    int x,y,z;
    z = 10;
    int *point = &z;

    printf("%d", point); // 33
    return 0;
}
