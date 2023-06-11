#include <stdio.h>
void get_sum_diff(int x, int y,int *p_sum,int * p_diff){
    *p_sum = x + y;
    *p_diff = x - y;
}

int main(){
    int a,b,sum,diff;
    printf("input two int :");
    scanf("%d %d", &a,&b);

     get_sum_diff(a,b,&sum,&diff);
     printf("diff is %d\n sum is %d",diff,sum);
    
    
    
}