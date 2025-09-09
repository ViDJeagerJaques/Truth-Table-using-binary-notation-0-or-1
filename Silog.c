#include<stdio.h>
int main () {
    int a,b, hasil;
    char x;
    printf("=== Program tabel kebenaran ===\n");
    printf("== Masukkan huruf 'x' untuk keluar dari program ==\n");
    while (1){
        printf("Masukkan pernyataan pertama(0 atau 1) :\n");
        scanf(" %d", &a);
        
        printf("Masukkan pernyataan kedua (0 atau 1) :\n");
        scanf(" %d", &b);
        
        printf("Masukkan operator logika (&=AND, ||=OR, !=NOT, x=keluar) :\n");
        scanf(" %c", &x);
        printf("Hasil dari pernyataan tersebut adalah : %c\n", x);

        if (x == 'x'){
            printf("Terima kasih telah menggunakan program ini\n");
            break;
        }
        if (x == '&'){
            hasil = a && b;
            printf("Hasil dari %d AND %d adalah : %d\n", a, b, hasil);
        } else if (x == '|'){
            hasil = a || b;
            printf("Hasil dari %d OR %d adalah : %d\n", a, b, hasil);
        } else if (x == '!'){
            hasil = !a;
            printf("Hasil dari NOT %d adalah : %d\n", a, b, hasil);
        } else {       
            printf("Operator Logika tidak dikenali\n");
        } if (x == 'x'){
            printf("Terima kasih telah menggunakan program ini\n");
            break;
        }
    }
    return 0;
}

/*
+++ Hasil Project Tabel Kebenaran menggunakan notasi biner 0 atau 1. +++
1 AND 1 RESULT = 1 ✓

1 AND 0 RESULT =0✓

1 OR 1 RESULT = 1✓

1 OR 0 RESULT = 1✓

1 NOT 1 RESULT = 1✓

1 NOT 0 RESULT = 0✓

HURUF ATAU LOGIKA SELAIN DIPERINTAH ERROR FIX✓

DIKETIK BANYAK HURUF MASIH BANYAK BUG (PERBAIKI BUG INI)
*/