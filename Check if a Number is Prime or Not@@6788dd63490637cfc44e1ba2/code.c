#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    int a=0;
    for(int i = 1;i<=(n-1);i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(a==0) printf("Prime");
    else printf("Not Prime");
    return 0;
}