#include <stdio.h>

/*  Nama : I Made ALit Darma Putra
    Nim  : 2008561045
    Kelas: E
*/

int main () {
    int pilih, a, b, c, d, k;
    printf("\tProgram Operasi Matriks\n");
    printf("=====================================\n");
    printf("1. Penjumlahan dua matriks\n");
    printf("2. Pengurangan dua matriks\n");
    printf("3. Perkalian dua matriks\n");
    printf("4. Perkalian sklar dengan matriks\n");
    printf("5. Transpose Matriks");
    printf("\nKetik angka untuk memilih menu. (Contoh ketik '1' untuk memilih menu penjumlahan dua matriks) :");
    scanf("%d", &pilih);
    printf("\n--------------------------\n");
    if(pilih == 1){
        printf("\nMenu Penjumlahan Dua Matriks\n");
    }else if(pilih == 2){
        printf("\nMenu Pengurangan Dua Matriks\n");
    }else if(pilih == 3){
        printf("\nMenu Perkalian Dua Matriks\n");
    }else if(pilih == 4){
        printf("\nMenu Perkalian Skalar Matriks\n");
    }else if(pilih == 5){
        printf("\nMenu Transpose Matriks\n");
    }

    if (pilih >= 1 && pilih <= 5 ){
        printf("\nMATRIKS A :\n");            //menentukan nilai matriks A//
        printf("ordo matriks :\n");
        printf("Ketik jumlah baris :");
        scanf("%d", &a);
        printf("Ketik jumlah kolom :");
        scanf("%d", &b);
        int matriksA [a][b];

        for(int i=0; i<a; i++){
            for(int j = 0; j<b; j++){
                printf("Ketik nilai baris ke-%d kolom ke-%d dari matriks A :", i+1, j+1);
                scanf("%d", &matriksA[i][j]);
            }
        }

        if (pilih >= 1 && pilih <=3){       //menentukkan nilai matriks B//
            printf("\nMATRIKS B :\n");
            printf("ordo matriks :\n");
            printf("Ketik jumlah baris :");
            scanf("%d", &c);
            printf("Ketik jumlah kolom :");
            scanf("%d", &d);
            int matriksB [c][d];

            for(int i=0; i<c; i++){
                for(int j = 0; j<d; j++){
                    printf("Ketik nilai baris ke-%d kolom ke-%d dari matriks B :", i+1, j+1);
                    scanf("%d", &matriksB[i][j]);
                }
            }

            printf("\nMatriks A :\n");
            for(int i = 0; i<a; i++){
                for(int j = 0; j<b; j++){
                    printf("%d\t", matriksA[i][j]);
                }
                printf("\n");
            }

            printf("\nMatriks B :\n");
            for(int i = 0; i<c; i++){
                for(int j = 0; j<d; j++){
                    printf("%d\t", matriksB[i][j]);
                }
                printf("\n");
            }

            if(pilih == 1 || pilih == 2){
                if(a == c && b == d){

                    int resultA [a][b];

                    for(int i=0; i<a; i++){
                        for(int j=0; j<b; j++){
                            if (pilih == 1){        //penjumlahan//
                                resultA [i][j] = matriksA[i][j] + matriksB[i][j];
                            }
                            if(pilih == 2){         //pengurangan//
                                resultA [i][j] = matriksA[i][j] - matriksB[i][j];
                            }
                        }
                    }

                    if(pilih == 1){
                        printf("\nMatriks A + Matriks B :\n");
                    }else if(pilih == 2){
                        printf("\nMatriks A - Matriks B :\n");
                    }

                    for(int i = 0; i<a; i++){
                        for(int j = 0; j<b; j++){
                            printf("%d\t", resultA[i][j]);
                        }
                        printf("\n");
                    }
                }else{
                    printf("\nProgram tidak dapat dilanjutkan karena ordo dari matriks A dan B berbeda. Untuk melakukan operasi penjumlahan atau pengurangan matriks, ordo matriks A dan matriks B harus sama.\n");
                }
            }else if (pilih == 3){
                if (b == c){
                    int resultB [a][d], sum = 0;      //perkalian//
                    for(int i = 0; i<a; i++){
                        for (int j = 0; j<d;j++){
                            for(int k = 0; k<b; k++){
                                sum += matriksA [i][k] * matriksB [k][j];
                            }
                        resultB [i][j] = sum;
                        sum = 0;
                        }
                    }
                    printf("\nMatriks A x Matriks B : \n");
                    for(int i = 0; i<a; i++){
                        for(int j = 0; j<d; j++){
                            printf("%d\t", resultB[i][j]);
                        }
                        printf("\n");
                    }
                }else{
                    printf("\nProgram tidak dapat dilanjutkan karena jumlah kolom A tidak sama dengan baris B. Untuk melakukan operasi perkalian dua matriks, jumlah kolom matriks A dan baris matriks B harus sama.");
                }
            }
        }else if (pilih == 4 || pilih == 5){
            printf("\nMatriks A :\n");
            for(int i = 0; i<a; i++){
                for(int j = 0; j<b; j++){
                    printf("%d\t", matriksA[i][j]);
                }
                printf("\n");
            }
            if(pilih == 4){
                printf("\nmasukkan nilai k :");
                scanf("%d", &k);

                int result [a][b];
                for(int i = 0; i<a; i++){       //perkalian skalar matriks//
                    for(int j = 0; j<b; j++){
                        result[i][j] = matriksA[i][j] * k;
                    }
                }

                printf("\n%d x Matriks A :\n", k);
                for(int i = 0; i<a; i++){
                    for(int j = 0; j<b; j++){
                        printf("%d\t", result [i][j]);
                    }
                    printf("\n");
                }
            }
            if (pilih == 5){
                printf("\nTranspose dari matriks A adalah :\n");
                for(int i = 0; i<b; i++){                           //transpose matriks//
                    for(int j = 0; j<a; j++){
                        printf("%d\t", matriksA [j][i]);
                    }
                    printf("\n");
                }
            }
        }
        return 0;
    }else{
        printf("\nMaaf menu yang anda masukkan salah\n");
        return 0;
    }
}