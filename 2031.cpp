#include <bits/stdc++.h>

using namespace std;
int main(){

    int n;
    string a,b;

    scanf("%d",&n);

    for(int i = 0;i<n;i++){
        cin>>a>>b;
        if(a=="ataque"){
            if(b=="pedra"){
                printf("Jogador 1 venceu\n");
            }else if(b=="papel"){
                printf("Jogador 1 venceu\n");
            }else{
                printf("Aniquilacao mutua\n");
            }
        }
        else if(a=="pedra"){
            if(b=="ataque"){
                printf("Jogador 2 venceu\n");
            }else if(b=="papel"){
                printf("Jogador 1 venceu\n");
            }else{
                printf("Sem ganhador\n");
            }
        }
        else if(a=="papel"){
            if(b=="pedra"){
                printf("Jogador 2 venceu\n");
            }else if(b=="ataque"){
                printf("Jogador 2 venceu\n");
            }else{
                printf("Ambos venceram\n");
            }
        }
    }
    return 0;
}
