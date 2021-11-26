#include <stdio.h>

int cal_total(int arr[], int number_element){
    int total = 0;
    for (int i = 0; i < number_element; i++) {
        total += arr[i];
    }
    return total;
}
int main() {
    int ori_arr[8] = {1,2,3,4,5,6,7,8};
    int total = cal_total(ori_arr,8);
    printf("%d", total);
    return 0;
}
