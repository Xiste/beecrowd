#include <bits/stdc++.h>

int main(){

double x;
double n[100];

scanf("%lf",&x);

n[0] = x;

for(int i = 1; i<=99; i++){
    n[i] = n[i-1]/2;
}

for(int i = 0; i<100; i++){
    printf("N[%d] = %.4lf\n",i,n[i]);
}
return 0;
}
