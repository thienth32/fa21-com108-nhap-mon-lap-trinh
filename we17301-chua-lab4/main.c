#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int answer;
    bool is_continue = true;
    int min, max, tongb1 = 0, demb1 = 0, inputb2, inputb3;
    float trungbinhb1;

    do {
        printf("Lua chon bai tap:\n");
        printf("1. Bai 1\n");
        printf("2. Bai 2\n");
        printf("3. Bai 3\n");
        printf("4. Thoat\n");
        printf("Lua chon cua ban:");
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

                for (int i = min; i < max; i++) {
                    if(i%2==0){
                        tongb1 = tongb1 + min;
                        demb1++;
                    }
                }
                trungbinhb1 = tongb1/demb1;
                printf("Trung binh cua cac so chan trong khoang %d => %d = %f\n", min, max, trungbinhb1);
                break;
            case 2:
                printf("Bai 2\n");
                printf("Nhap so cua ban:");
                scanf("%d", &inputb2);
                int count = 0;
                for (int i = 2; i < inputb2; i++) {
                    if(inputb2%i == 0){
                        count++;
                    }
                }
                if(count > 0){
                    printf("so vua nhap khong phai so nguyen to\n");
                }else{
                    printf("so vua nhap la so nguyen to\n");
                }
                break;
            case 3:
                printf("Bai 3\n");
                printf("Nhap so x:");
                scanf("%d", &inputb3);
                bool flag = false;
                for (int i = 1; i < inputb3; i++) {
                    if(i == sqrt(inputb3)){
                        flag = true;
                        break;
                    }
                }
                if(flag == true){
                    printf("%d la so chinh phuong\n", inputb3);
                }else{
                    printf("%d khong phai so chinh phuong\n", inputb3);
                }
                break;
        }

    } while (is_continue == true);
    return 0;
}
