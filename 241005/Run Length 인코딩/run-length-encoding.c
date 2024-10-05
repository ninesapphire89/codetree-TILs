#include <stdio.h>
#include <string.h>

int main() {

    char arr[1000];

    scanf("%s",arr);

    int len = strlen(arr);

    int num=0;
    for(int i=0;i<len;i++){
        if(arr[i]!=arr[i+1]){
            num+=2;
        }
    }
    printf("%d\n",num);

    int a =1;

    for(int i =0;i<len;i++){
        if(arr[i] == arr[i+1]){
            a++;

        }
        else{
            printf("%c%d",arr[i],a);
            a=1;
        }
    }
    
    return 0;
}