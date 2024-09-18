#include <stdio.h>

int main() {
    char arr[5][20] = {"apple","banana", "grape", "blueberry", "orange"};
    char word;

    scanf("%c",&word);

    int sum=0;

    for(int i=0;i<5;i++){
        for(int j=2;j<4;j++){
            if(word==arr[i][j]){
                printf("%s\n",arr[i]);
                sum++;
            }
        }
    }

    printf("%d",sum);
    return 0;
}