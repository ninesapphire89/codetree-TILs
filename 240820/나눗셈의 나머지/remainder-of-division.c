#include <stdio.h>

int main() {
    int c_arr[10]={0,};
    int type;
    int sum=0;
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=0;i<100;i++){
        type=a%b;
        c_arr[type]++;
        a/=b;
        if(a<=1)
            break;
    }
    for(int i=0;i<10;i++){
        sum+=c_arr[i] * c_arr[i];
    }
    printf("%d",sum);
    return 0;
}