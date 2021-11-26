#include <stdio.h>

int main() {
    int arr[8] = {2, 4, 8, 5, 1, 7, 6, 3};
    int chan_arr[4];
    int index = 0, i;
    // 1. lọc tất cả các phần tử chẵn đưa vào mảng chan_arr
    // 2. sắp xếp các phần tử theo giá trị tăng dần (15h43)
    for (i = 0; i < 8; i++) {
        if(arr[i] % 2 == 0){
            chan_arr[index] = arr[i];
            index++;
        }
    }
    for (i = 0; i < 3; i++) {
        int j;
        for (j = i+1; j < 4; j++) {
            if(chan_arr[i] > chan_arr[j]){
                int tmp = chan_arr[j];
                chan_arr[j] = chan_arr[i];
                chan_arr[i] = tmp;
            }
        }
    }



//    int i;
//    for (i = 0; i < 7; i++) {
//        int j;
//        for (j = i+1; j < 8; j++) {
//            if(arr[i] > arr[j]){
//                int tmp = arr[j];
//                arr[j] = arr[i];
//                arr[i] = tmp;
//            }
//        }
//    }
    int k;
    for (k = 0; k < 4; k++) {
        printf("%d\n", chan_arr[k]);
    }
    return 0;
}
