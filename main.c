#include <stdio.h>

int main() {
    FILE *fp = fopen("gunluk.dat","r");
    FILE *fpgec = fopen("gec.dat", "w");
    FILE *fperken = fopen("erken.dat", "w");
    if (fp == NULL) {
        printf("Dosya acilamadi.\n");
        return 1;
    }
    if (fpgec == NULL) {
        printf("Dosya acilamadi.\n");
        return 1;
    }
    if (fperken == NULL) {
        printf("Dosya acilamadi.\n");
        return 1;
    }
    int sicil,saat,dakika,kalan_dakika;
    char girmecikma,bosluk;
    char satir[128];
    while(fgets(satir,sizeof(satir),fp) != NULL) {
        sscanf(satir,"%d%d:%d%c%c",&sicil,&saat,&dakika,&bosluk,&girmecikma);
    }

    fclose(fp);
    fclose(fpgec);
    fclose(fperken);
    return 0;
}
