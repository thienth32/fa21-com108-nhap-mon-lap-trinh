#include <stdio.h>
#include <string.h>

int main() {
    // nhập số lượng sinh viên
    int syso;
    printf("Nhap so luong sinh vien:");
    scanf("%d", &syso);
    char ds_ten[syso][100];
    float ds_diem[syso];
    getchar();
    for (int i = 0; i < syso; i++) {
        printf("Nhap ho va ten sinh vien so %d", i+1);
        fgets(ds_ten[i], 100, stdin);
    }
    // tạo thêm 1 vòng lặp chạy từ i = 0 => i < syso
    for (int i = 0; i < syso; i++) {
        printf("Sinh vien: %s", ds_ten[i]);
        printf("Nhap diem :");
        scanf("%f", &ds_diem[i]);
    }
    float tmp_score;
    char tmp_name[100];
    // tạo thêm 1 vòng lặp để sắp xếp điểm theo thứ tự giảm dần
    for (int i = 0; i < syso-1; i++) {
        for (int j = i+1; j < syso; j++) {
            if(ds_diem[i] < ds_diem[j]){
                tmp_score = ds_diem[j];
                strcpy(tmp_name, ds_ten[j]);

                ds_diem[j] = ds_diem[i];
                ds_diem[i] = tmp_score;

                strcpy(ds_ten[j], ds_ten[i]);
                strcpy(ds_ten[i], tmp_name);
            }
        }
    }

    printf("===========================\n");

    for (int i = 0; i < syso; i++) {
        printf("Ho va ten: %sDiem: %.1f\n", ds_ten[i], ds_diem[i]);
    }
    return 0;
}
