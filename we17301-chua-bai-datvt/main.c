#include<stdio.h>
#include <stdbool.h>
int so_nguyen(){
    float a;
    printf("nhap so gia tri: ");
    scanf("%f",&a);
    if(a==(int)a){
        return (int) a;
    }
    so_nguyen();
}
int sumOdd(int arr[], int b){
    int sum = 0;
    for (int i = 0; i < b; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum += arr[i];
        }
    }
    return sum;
}
int main(){
    int b;
    printf("nhap so luong phan tu: ");
    scanf("%d",&b);
    int a[b];
    for(int i=0;i<b;i++){
        a[i] = so_nguyen();
    }

    int tg;
    for(int i = 0; i < b - 1; i++){
        for(int j = i + 1; j < b; j++){
            if(a[i] > a[j]){
                // Hoan vi 2 so a[i] va a[j]
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
    for (int k = 0; k < b; k++) {
        printf("%d\n", a[k]);
    }
    printf("tinh tong so chan :%d", sumOdd(a,b));
    return 0;
}
