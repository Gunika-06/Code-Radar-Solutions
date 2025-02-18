#include<stdio.h>
int main(){
    int x,y,result;
    scanf("%d%d",&x,&y);
    switch(){
        case '+' :
        result = x+y;
        printf("%d",result);
        break;
        case '-' :
        result = x-y;
         printf("%d",result);
        break;
        case '*' :
        result = x*y;
         printf("%d",result);
        break;
        case '/' :
        result = x/y;
         printf("%d",result);
        break;

    }
    return 0;
}