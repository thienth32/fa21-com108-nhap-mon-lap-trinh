#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
    int question;
    while (true){
        system("clear");
        printf("Assignment 1!\n");
        printf("Lựa chọn 1 trong các bài tập sau:\n");
        printf("1. Tìm số nguyên tố\n");
        printf("2. Tính tiền hát karaoke\n");
        printf("3. Tính tiền điện\n");
        printf("Mời bạn chọn: ");

        scanf("%d", &question);
        if(question >= 1 && question <= 3){
            break;
        }
    }

    printf("Lựa chọn của bạn là: %d", question);
    return 0;
}
