#include <stdio.h>

int main() {
    int c_arr[10]={0,};
    int type;
    int sum=0;
    int a,b;
    scanf("%d %d",&a,&b);
    while(a<=1){
        type=a%b;
        a=a/b;
        c_arr[type]++;
    }
    for(int i=0;i<10;i++){
        sum+=c_arr[i] * c_arr[i];
    }
    printf("%d",sum);
    return 0;
}