#include <bits/stdc++.h>

int main(){

int vetor[10];

for(int i =0; i<10;i++){
    scanf("%d",&vetor[i]);
}
for(int i= 0;i<10;i++){
    if(vetor[i]<=0){
        vetor[i]=1;
    }
    printf("X[%d] = %d\n",i,vetor[i]);
}

return 0;
}
