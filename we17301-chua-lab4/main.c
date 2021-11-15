#include <stdio.h>
#include <stdbool.h>

int main() {
    int answer;
    bool is_continue = true;
    int min, max, tongb1 = 0, demb1 = 0, inputb2;
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
                printf("Bai 2\n");
                printf("Nhap so cua ban:");
                scanf("%d", &inputb2);
                int b2Loop = 2;
                int count = 0;
                while (b2Loop < inputb2){
                    if(inputb2%b2Loop == 0){
                        count++;
                    }
                    b2Loop++;
                }
                if(count > 0){
                    printf("so vua nhap khong phai so nguyen to\n");
                }else{
                    printf("so vua nhap la so nguyen to\n");
                }
                break;
            case 3:
                break;
        }

    } while (is_continue == true);
    return 0;
}
