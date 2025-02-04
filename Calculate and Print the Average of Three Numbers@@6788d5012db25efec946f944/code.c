#include<stdio.h>
int main() {
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    float w;
    w=(x+y+z)/3;
    printf("Average: %.2f",w);
    return 0;
}