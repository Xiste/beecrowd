#include <bits/stdc++.h>
using namespace std;

int main(){

int A,B,calc;

scanf("%d%d",&A,&B);

if(B>A){
    if(B%A==0){
    printf("Sao Multiplos\n");
}
else{
    printf("Nao sao Multiplos\n");
}
}else{
    if(A%B==0){
        printf("Sao Multiplos\n");
    }
    else{
        printf("Nao sao Multiplos\n");
    }
}

return 0;
}