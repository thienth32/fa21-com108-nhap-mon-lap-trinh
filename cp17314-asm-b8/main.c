#include <stdio.h>
#include <string.h>

int main() {
    int syso;
    printf("Nhap sy so lop:");
    scanf("%d", &syso);
    char ds_sv[syso][100];
    float ds_diem[syso];
    fflush(stdin);
    for (int i = 0; i < syso; i++) {
        printf("Nhap ho va ten sinh vien:");
        gets(ds_sv[i]);
    }

    for (int i = 0; i < syso; i++) {
        printf("Nhap diem cua ban '%s': ", ds_sv[i]);
        scanf("%f", &ds_diem[i]);
    }

    float tamthoi;
    char tentamthoi[100];
    for (int i = 0; i < syso-1; i++) {

        for (int j = i+1; j < syso; j++) {
            if(ds_diem[i] < ds_diem[j]){
                tamthoi = ds_diem[i];
                ds_diem[i] = ds_diem[j];
                ds_diem[j] = tamthoi;

                strcpy(tentamthoi, ds_sv[i]);
                strcpy(ds_sv[i], ds_sv[j]);
                strcpy(ds_sv[j], tentamthoi);
            }
        }
    }


    for (int i = 0; i < syso; i++) {
        printf("%s: %.1f", ds_sv[i], ds_diem[i]);
        printf("\n=============================\n");
    }
    return 0;
}
