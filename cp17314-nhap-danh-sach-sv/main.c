#include <stdio.h>

int main() {
//    char name[100];
//    printf("Ho va ten:");
//    fgets(name, 100, stdin);
//    printf("%s", name);
    // yêu cầu nhập sỹ số của lớp (int)
    int sy_so;
    printf("Nhap sy so: ");
    scanf("%d", &sy_so);
    // dựa vào biến sỹ số tạo 1 mảng char để lưu trữ danh sách tên của các bạn sinh viên
    // trong lớp
    char ds_sinhvien[sy_so][100];
    float ds_diem[sy_so][3];
    getchar();
    char ten_mon_hoc;
    // dùng vòng lặp để nhập danh sách tên các bạn sinh viên trong lớp
    for (int i = 0; i < sy_so; i++) {
        printf("Ten cua ban sinh vien so %d:", i+1);
//        fgets(&ds_sinhvien[i], 100, stdin);
        gets(ds_sinhvien[i]);
        // nhập điểm văn, toán, tiếng anh cho từng bạn sinh viên một
        for (int k = 0; k < 3; k++) {
            if(k == 0)
                ten_mon_hoc = "Toan";
            else if(k == 1)
                ten_mon_hoc = "Van";
            else
                ten_mon_hoc = "Tieng Anh";
            printf("Nhap diem mon %s:", ten_mon_hoc);
            scanf("%f", &ds_diem[i][k]);
        }
    }
    printf("Danh sach lop:\n");
    for (int j = 0; j < sy_so; j++) {
        printf("%s\n", ds_sinhvien[j]);
    }
    return 0;
}
