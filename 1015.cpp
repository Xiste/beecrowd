#include <bits/stdc++.h>
using namespace std;

int main(){

double x1,y1,x2,y2,raiz;

scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
raiz = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
printf("%.4lf\n",raiz);
return 0;
}
