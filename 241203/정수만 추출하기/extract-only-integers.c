#include <stdio.h>
#include <stdlib.h>

int main() {
    char n1[8];
    char n2[8];

    scanf("%s",n1);
    scanf("%s",n2);

    int i;

    for(i = 0;i<8;i++){
        if((n1[i]>=0)&&(n1[i]<=9)){
            n1[i]=n1[i];
        }
        else{
            n1[i+2]='\0';
            break;
        }
    }
    
    for(i = 0;i<8;i++){
        if((n2[i]>=0)&&(n2[i]<=9)){
            n2[i]=n2[i];
        }
        else{
            n2[i+2]='\0';
            break;
        }
    }

    int n_1 = atoi(n1);
	int n_2 = atoi(n2);

	int num = n_1 + n_2;

	printf("%d",num);

    return 0;
}