#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    if (x==2){
        printf("2");
    }
    else if(x%2==0){
        printf("30");
    }
    else{
        printf("31");
    }
    return 0;
}