#include <stdio.h>

int main() {
    int num, i;

    
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);

    
    if (num == 0) {
        printf("0 khong co uoc.\n");
        return 0;
    }

    
    printf("Cac uoc cua %d la: ", num);

    
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}