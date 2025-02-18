#include<stdio.h>
int main(){
    int x,y;
    char operator;
    scanf("%d%d",&x,&y);
    scanf("%c",&operator);
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