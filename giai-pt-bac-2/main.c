#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    printf("Nhập số a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    float delta = b*b - (4*a*c);
    if(a == 0){
        printf("Không phải pt bậc 2");
    }else {
        if(delta < 0){
            printf("Phương trình vô nghiệm");
        }else if(delta == 0){
            printf("Phương trình có nghiệm duy nhất x = %f", (-b)/(2*a));
        }else{
            float x1 = (-b + sqrt(delta))/(2*a);
            float x2 = (-b - sqrt(delta))/(2*a);
            printf("Phương trình có nghiệm kép:\n");
            printf("x1 = %f", x1);
            printf("x2 = %f", x2);
        }
    }
    return 0;
}
