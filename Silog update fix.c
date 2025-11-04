    #include<stdio.h>
    int main () {
        int a,b, hasil;
        char x;
        printf("=== Program tabel kebenaran ===\n");
        printf("== Masukkan huruf 'x' untuk keluar dari program ==\n");
        while (1){
            printf("Masukkan pernyataan pertama (0 atau 1) :\n");
            if (scanf(" %c", &x) != 1) continue;
            if (x == 'x'){
                printf("Terima kasih telah menggunakan program ini\n");
                break;
            }
            else if( x != '0' && x != '1'){
                printf("Harap masukkan notasi (0 dan 1) saja\n");
                continue;
            }
            a = x - '0';
            printf("Masukkan pernyataan kedua (0 atau 1) :\n");
            if (scanf(" %c", &x) != 1) continue;
            if (x == 'x'){
                printf("Terima kasih telah menggunakan program ini\n");
                break;
            }
            else if( x != '0' && x != '1'){
                printf("Harap masukkan notasi (0 dan 1) saja\n");
                continue;
            }
            b = x - '0';  
            
            printf("Masukkan operator logika A(&)=AND, O(|)=OR, I(=>)= IF THEN, C(<=>) = IMPLICATION, x = keluar) :\n");
            if (scanf(" %c", &x) != 1) continue;
            if (x != 'A' && x != 'O' && x != 'I' && x != 'C' && x != 'x'){
                printf("Operator Logika tidak dikenali\n");
                
            }
            /*printf("Hasil dari pernyataan tersebut adalah : %c\n", x); */

            if (x == 'A'){
                hasil = a && b;
                printf("Hasil dari %d AND %d adalah : %d\n", a, b, hasil);
            } else if (x == 'O'){
                hasil = a || b;
                printf("Hasil dari %d OR %d adalah : %d\n", a, b, hasil);
            } else if (x == 'I'){
                hasil = (!a) || b;
                printf("Hasil dari IF %d THEN %d adalah : %d\n", a, b, hasil);
            } else if (x == 'C'){
                hasil = (a == b);
                printf("Hasil dari IMPLICATION ( %d <=> %d)  adalah : %d\n", a, b, hasil);
            } else if (x == 'x'){
                printf("Terima kasih telah menggunakan program ini\n");
                break;
            }
             else {       
                printf("Silahkan masukkan operator yang benar\n");
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
    
    Update 04/11/2025: BUG SUDAH DIPERBAIKI✓ YEAY YATTA YOKATTA
    KAIKEN KONTOL
    I CANT HEAR U SHIBAU WAIT 
    */