#include <stdio.h>
#include <stdlib.h>

int main()
{
    float gunluk_gidilen_yol ;                               //dikkat edersen maliyet=(park_masrafi)+(otoban_ucreti)+(gunluk_gidilen_yol*benzin_litre_fiyat*ortalama_yakit_tuketimi); bu s�z konusu atamay� kullan�c�dan scanf ile verileri almayi bitirdikten sonra yapt�m
    float benzin_litre_fiyat ;
    float ortalama_yakit_tuketimi ;
    float park_masrafi ;
    float otoban_ucreti ;
    float maliyet ;
    printf("Lutfen gunluk katettiginiz yolu km cinsinden yaz�n�z\n");
    scanf("%f",&gunluk_gidilen_yol) ;

    printf("Lutfen benzinin litre fiyat�n� yaz�n�z\n") ;
    scanf("%f",&benzin_litre_fiyat) ;

    printf("Lutfen arac�n�z�n ortalama yak�t tuketimini yaziniz\n") ;
    scanf("%f",&ortalama_yakit_tuketimi);

    printf("Lutfen gunluk park masrafinizi yaziniz") ;
    scanf("%f",&park_masrafi);

    printf("Lutfen otoban ucretini yaziniz") ;
    scanf("%f",&otoban_ucreti) ;


    maliyet=(park_masrafi)+(otoban_ucreti)+(gunluk_gidilen_yol*benzin_litre_fiyat*ortalama_yakit_tuketimi);

    printf("is yolculugunuzdaki toplam masraf %f",maliyet) ;
















    return 0;
}
