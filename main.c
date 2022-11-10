#include<stdio.h>
int main() {

    float toplam,n;
    scanf("%f",&n);
    for(int k=1;k<=n;k++){
        toplam += ((k*k)+1.23)/(k-0.25);
    }
    printf("%f",toplam);

    return 0;
}
