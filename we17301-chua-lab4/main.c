#include <stdio.h>
#include <stdbool.h>

int main() {
    int answer;
    bool is_continue = true;
    int min, max, tongb1, demb1;
    float trungbinhb1;

    do {
        printf("Lua chon bai tap:\n");
        printf("1. Bai 1\n");
        printf("2. Bai 2\n");
        printf("3. Bai 3\n");
        printf("4. Thoat\n");
        printf("Lua chon cua ba:");
        scanf("%d", &answer);
        switch (answer) {
            case 4:
                is_continue = false;
                break;
            case 1:
                printf("Bai 1\n");
                printf("Nhap so min:");
                scanf("%d", &min);
                printf("Nhap so max:");
                scanf("%d", &max);

                while (min <= max){
                    if(min%2==0){
                        tongb1 += min;
                        demb1++;
                    }
                    min++;
                }
                trungbinhb1 = tongb1/demb1;
                printf("Trung binh cua cac so chan = %f\n", trungbinhb1);
                break;
            case 2:
                break;
            case 3:
                break;
        }

    } while (is_continue == true);
    return 0;
}
