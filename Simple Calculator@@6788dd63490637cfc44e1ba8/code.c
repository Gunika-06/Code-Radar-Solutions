#include<stdio.h>
int main(){
    char operator;
    int x,y;
    scanf("%c",&operator);
    scanf("%d%d",&x,&y);
    switch(operator){
        case'+':
        printf("%d\n",x+y);
        break;
        case'-':
        printf("%d\n",x-y);
        break;
        case'*':
        printf("%d\n",x*y);
        break;
        case'/':
        if(y!=0){
        printf("%d\n",x/y);
        }
        else {
            printf("error");
        }
        break;
        default :
        printf("error");
        break;
    }
    return 0;
}