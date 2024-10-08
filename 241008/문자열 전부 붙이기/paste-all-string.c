#include <stdio.h>
#include <string.h>

int main() {
    
    char str[10][100];
    char str_all[1001];

    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%s",str[i]);
    } 

    int tot_idx = 0;

    for(int i = 0;i<n;i++){
        int len = strlen(str[i]);
        for(int j=0;j<len;j++)
            str_all[tot_idx++]=str[i][j];
    }

    str_all[tot_idx] = '\0';

    printf("%s",str_all);

    return 0;
}