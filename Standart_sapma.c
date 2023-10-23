#include <stdio.h>
#include <math.h>

#define N 20

float standartSapma(float b[], int n);
float varyans(float arr[], int n);

int main(int argc, char *argv[]){
    //float arr[7] = {5.6, 1.3, 10.5, 31.6, 4.0, 5.5, 1.9};

    float arr[N] = {40.0, 50.0, 50.0, 60.0, 60.0, 60.0, 60.0, 70.0, 70.0, 70.0, 
                    70.0, 70.0, 70.0, 80.0, 80.0, 80.0, 80.0, 90.0, 90.0, 100.0};
    float std;

    std = standartSapma(arr, N);
    printf("Standart sapmasi: %.3f\n", std);

    return 0;
}

float standartSapma(float b[], int n){
    float standSapma;

    standSapma = sqrt(varyans(b, n));

    return standSapma;
}

float varyans(float arr[], int n){
    int k;
    float toplam = 0.0;
    float ortalama;

    for(k = 0; k < n; k++){
        ortalama += arr[k];
    }
    ortalama /= n;

    for(k = 0; k < n; k++){
        toplam += (arr[k] - ortalama) * (arr[k] - ortalama);
    }

    return (toplam / (n - 1));
}
