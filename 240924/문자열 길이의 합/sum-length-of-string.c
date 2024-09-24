#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d",&n);

    char arr[n][20];

    for(int i =1;i<=n;i++){
        scanf("%s",arr[i]);
    }

    int a = 0;
    int num = 0;

    for(int i = 1;i<=n;i++){
        if(arr[i][0]=='a'){
            a++;
        }
        num+=strlen(arr[i]);
    }
    printf("%d %d",num,a);
    return 0;
}