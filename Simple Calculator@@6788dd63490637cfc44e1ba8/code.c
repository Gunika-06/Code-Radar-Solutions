#include<stdio.h>
int main(){
    char operator;
    scanf("%c",&operator);
    int x,y;
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
        printf("%d\n",x/y);
        break;
        
    }
    return 0;
}