#include <stdio.h>
#include <string.h>

typedef char string[256];

typedef struct{
string Tanggal;
string Bulan;
string Tahun;
}Lahir;

typedef struct {
string NPM;
string Nama;
char tempat[15];
Lahir L;
char Angkatan[5];
float IPK;
}Mahasiswa;

 

Mahasiswa InputDataMahasiswa (Mahasiswa M) {

printf("INPUT DATA MAHASISWA \n");
printf("_-_-_-_-_-_-_-_-_-_-_\n");
printf(" Nama : "); scanf("%[^\n]", &M.Nama);
printf(" NPM : "); scanf("%s", &M.NPM);
printf(" Tempat lahir : "); scanf("%s", &M.tempat);
printf(" Tgl Lahir (Contoh: DD MM YYYY) \n");
printf(" : ");scanf("%s%s%s", &M.L.Tanggal, &M.L.Bulan, &M.L.Tahun);
printf(" Angkatan : "); scanf("%s", &M.Angkatan);
printf(" IPK : "); scanf("%f", &M.IPK);
printf("\n\n\n");

return M;
}

void TampilkanDataMahasiswa (Mahasiswa M) {

 

printf(" DATA MAHASISWA \n");
printf("*_*_*_*_*_*_*_*_\n");
printf(" Nama        : %s\n ", M.Nama);
printf("NPM         : %s\n ", M.NPM);
printf("Tempat lahir: %s\n",M.tempat);
printf("Tgl Lahir    : %s – %s – %s \n", M.L.Tanggal, M.L.Bulan, M.L.Tahun);
printf(" Angkatan    : %s\n ", M.Angkatan);
printf("IPK         : %.2f\n ", M.IPK);
printf("\n\n");
}

int main() {
Mahasiswa M;

M=InputDataMahasiswa(M);
TampilkanDataMahasiswa(M);

return 0;
}
