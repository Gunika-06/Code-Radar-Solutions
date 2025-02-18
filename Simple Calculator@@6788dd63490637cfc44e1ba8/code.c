#include<stdio.h>
int main(){
    char operator;
    scanf("%c",&operator);
    int x,y;
    scanf("%d%d",&x,&y);
    switch(operator){
        case'+':
        printf("%d+%d = %d",x,y,x+y);
        break;
        case'-':
        printf("%d-%d = %d",x,y,x-y);
        break;
        case'*':
        printf("%d*%d = %d",x,y,x*y);
        break;
        case'/':
        printf("%d/%d = %d",x,y,x/y);
        break;
        
    }
    return 0;
}