#include <stdio.h>
#include <string.h>

int main() {
    
    char str[100];
    int num;

    scanf("%s",str);
    scanf("%d",&num);

    int len = strlen(str);

    for(int i = 0 ;i<num;i++){
        int n;
        scanf("%d",&n);
        if(n==1){
            int a,b;
            scanf("%d %d",&a,&b);
            char k = str[a-1];
            str[a-1]=str[b-1];
            str[b-1]=k;
            printf("%s\n",str);

        }
        else{
            char c,d;
            scanf(" %c",&c);
            scanf("  %c",&d);
            for(int j=0;j<len;j++){
                if(str[j]==c){
                    str[j]=d;
                }
            }
        }
    }

    printf("%s",str);

    return 0;
}