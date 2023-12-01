#include <stdio.h>

// Hàm sử dụng con trỏ để tính tổng các số nguyên từ đoạn cho trước
int tinhTong(int *batDau, int *ketThuc) {
    int tong = 0;
    int ptr = *batDau;

    while (ptr <= *ketThuc) {
        tong += ptr;
        ptr++;
    }

    return tong;
}

int main() {
    int batDau, ketThuc;

    // Nhập đoạn số nguyên
    printf("Nhap gia tri bat dau: ");
    scanf("%d", &batDau);
    printf("Nhap gia tri ket thuc: ");
    scanf("%d", &ketThuc);

    // Tính tổng sử dụng con trỏ
    int tong = tinhTong(&batDau, &ketThuc);

    // Hiển thị tổng
    printf("Tong cac so nguyen tu %d den %d la: %d\n", batDau, ketThuc, tong);

    return 0;
}