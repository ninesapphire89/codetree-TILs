#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d",&n);

    char arr[10][100];

    for(int i =1;i<=n;i++){
        scanf("%s",arr[i]);
    }

    int a = 0;
    int num = 0;

    for(int i = 1;i<=n;i++){
        num+=strlen(arr[i]);
        if(arr[i][0]=='a'){
            a++;
        }
    }
    printf("%d %d",num,a);
    return 0;
}