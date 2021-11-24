#include <stdio.h>
#include <stdbool.h>
bool check_ngto(int x){
    for (int i = 2; i < x; i++) {
        if(x%i == 0){
            return false;
        }
    }
    return true;
}

int main() {
//    printf("nhap so mon hoc:");
//    int so_mon;
//
//    scanf("%d", &so_mon);
//    printf("Bat dau nhap diem tung mon học\n");
//    int diem[so_mon];
//    for (int i = 0; i < so_mon; i++) {
//        printf("Nhap diem mon thu %d: ", i+1);
//        scanf("%d", &diem[i]);
//    }
    // tính điểm trung bình của người học
    // hiển thị học lực:
    // < 5 - yếu
    // 5-7 - trung bình
    // 7-9 - khá
    // 9-10 - giỏi


    // tạo 1 mảng có số phần tử tùy theo người dùng nhập vào
    // nhập giá trị cho từng phần tử này
    // tìm số lớn nhất và nhỏ nhất trong mảng
    // in ra danh sách các số nguyên tố xuất hiện trong mảng
    printf("nhap so phan tu:");
    int so_ptu;

    scanf("%d", &so_ptu);
    int arr[so_ptu];
    int min, max;
    for (int i = 0; i < so_ptu; i++) {
        printf("Nhap so phan tu thu %d:", i+1);
        scanf("%d", &arr[i]);
        if(i == 0){
            min = arr[i];
            max = arr[i];
        }else{
            if(min > arr[i]){
                min = arr[i];
            }
            if(max < arr[i]){
                max = arr[i];
            }
        }

        if(check_ngto(arr[i]) == true){
            printf("arr[%d] = %d la so nguyen to\n", i, arr[i]);
        }
    }

    printf("so min = %d\n", min);
    printf("so max = %d", max);
    return 0;
}
