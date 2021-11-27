#include <stdio.h>

int main() {

    char name[4][100] = {"Nguyen Van A", "Nguyen Van B", "Nguyen Van C", "Nguyen Van D"};
    float score[4][3] = {
            {5.5, 6.2, 7.9},
            {8, 6, 8},
            {7, 6, 6},
            {6, 6, 5}
    };
    for (int i = 0; i < 4; i++) {
        printf("Ho va ten: %s\n", name[i]);
        float diemtb = (score[i][0] + score[i][1] + score[i][2])/3;
        printf("diem Van: %.1f\n", score[i][0]);
        printf("diem Toan: %.1f\n", score[i][1]);
        printf("diem Tieng Anh: %.1f\n", score[i][2]);
        printf("diem Trung binh: %.1f\n", diemtb);
    }
//    printf("Nhap so luong sinh vien trong lop:");
//    int syso;
//    scanf("%d", &syso);
//    int somon = 3;
//    char name_list[syso][100];
//    float score_list[syso][somon];
//    getchar();
//    for (int i = 0; i < syso; i++){
//        printf("Nhap ten cua sinh vien thu %d:", i+1);
//        fgets(name_list[i], 100, stdin);
//    }
//
//    for (int i = 0; i < syso; i++) {
//        printf("%s\n", name_list[i]);
//    }

//    int arr[6] = {4, 8, 6, 2, 9, 5};
//    for (int i = 0; i < 5; ++i) {
//        for (int j = i+1; j < 6; j++) {
//            // swap
//            if(arr[i] > arr[j]){
//                int tmp = arr[j];
//                arr[j] = arr[i];
//                arr[i] = tmp;
//            }
//        }
//    }
//    for (int i = 0; i < 6; i++) {
//        printf("%d\n", arr[i]);
//    }
    return 0;
}
