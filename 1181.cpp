#include <bits/stdc++.h>

int main(){

double M[12][12],soma=0;
int x;
char c;

scanf("%d %c",&x,&c);

for(int i = 0; i<12;i++){
    for(int j = 0; j<12;j++){
        scanf("%lf",&M[i][j]);
        if(i==x){
            soma+= M[i][j];
        }
    }
}
if(c=='S'){
    printf("%.1lf\n",soma);
}else{
    printf("%.1lf\n",soma/12.0);
}
return 0;
}
