#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct SinhVien {
    int MaSV;
    char Ten[50];
    float LAB;
    float PT;
    float AS;
    float PE;
    float FE;
    float AVG;
};

float tinhtb(float LAB, float PT, float AS, float PE, float FE) {
    return 0.1 * (LAB + PT + AS) + 0.4 * PE + 0.3 * FE;
}

int ssdiemtb(const void *a, const void *b) {
    struct SinhVien *sinhVienA = (struct SinhVien *)a;
    struct SinhVien *sinhVienB = (struct SinhVien *)b;
    if (sinhVienA->AVG < sinhVienB->AVG) return 1;
    else if (sinhVienA->AVG > sinhVienB->AVG) return -1;
    else return 0;
}

int main() {
    struct SinhVien danhSachSV[] = 
	{
        {1, "Dong", 9, 8, 8, 8, 8},
        {2, "Huy", 7, 8.5, 8, 9.6, 7.5},
        {3, "Hung", 5, 9, 7.5, 8, 9.2},
        {4, "Anh", 8, 8, 8.2, 7.9, 8.5}
    };
    int i;
    int soLuongSV = sizeof(danhSachSV) / sizeof(danhSachSV[0]);

    for (i = 0; i < soLuongSV; ++i) {
        danhSachSV[i].AVG = tinhtb(danhSachSV[i].LAB, danhSachSV[i].PT, danhSachSV[i].AS, danhSachSV[i].PE, danhSachSV[i].FE);
    }

    qsort(danhSachSV, soLuongSV, sizeof(struct SinhVien), ssdiemtb);

    printf("MaSV\tTen\t\tLAB\tPT\tAS\tPE\tFE\tAVG\n");
    for (i = 0; i < soLuongSV; ++i) {
        printf("%d\t%s\t\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t%.2f\n", danhSachSV[i].MaSV, danhSachSV[i].Ten,
               danhSachSV[i].LAB, danhSachSV[i].PT, danhSachSV[i].AS, danhSachSV[i].PE, danhSachSV[i].FE, danhSachSV[i].AVG);
    }

    printf("\nDanh sach sinh vien da qua mon:\n");
    printf("MaSV\tTen\t\tAVG\n");
    for (i = 0; i < soLuongSV; ++i) {
        if (danhSachSV[i].AVG >= 5) {
            printf("%d\t%s\t\t%.2f\n", danhSachSV[i].MaSV, danhSachSV[i].Ten, danhSachSV[i].AVG);
        }
    }

    return 0;
}

