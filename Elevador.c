#include <stdio.h>
int main(){
    int n, c, i, k, j, l;
    scanf("%d %d %d %d\n", &n, &c, &k, &j);
    l=j;
    for(i=1;i<n;i++){
        scanf("%d %d", &k, &j);
        l=l+j-k;
        if(l>c){ printf("S");i=n;}
    }   
    if(l<=c) printf("N");
    return 0;
}