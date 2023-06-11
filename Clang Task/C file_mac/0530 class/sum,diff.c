#include <stdio.h>

void get_sum_diff(int x, int y, int *p_sum, int *p_diff);
int main(){
    int a,b;
    printf("input two int : ");
    scanf("%d %d",&a,&b);
    int sum;
    int diff;
    get_sum_diff(a,b,&sum,&diff);
    printf("diff is %d",diff);
    printf("sum is %d",sum);

}
void get_sum_diff(int x, int y, int * p_sum, int * p_diff){
    * p_sum = x + y;
    * p_diff = x - y;
}
