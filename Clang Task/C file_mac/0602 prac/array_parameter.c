#include <stdio.h>
void parameter(int a[]){
    a[0] = 4;
    a[1] = 5;
    a[2] = 6;
}
int main(){
    
    int a[3] = {1,2,3};

    printf("%d %d %d\n",a[0],a[1],a[2]);
    parameter(a);
    printf("%d %d %d",a[0],a[1],a[2]);




}