#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int cnt=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
			if(i%2==1){
				cnt++;
				printf("%d ",cnt);
			}
			else{
				cnt+=2;
				printf("%d ",cnt);
			}
		}
		printf("\n");
	}	
    return 0;
}