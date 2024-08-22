#include <stdio.h>

int main() {
    int a,b;
	scanf("%d %d\n",&a,&b);
	int a_arr[a];
	int b_arr[b];
	for(int i=0;i<a;i++){
		scanf("%d ",&a_arr[i]);
	}
	for(int i=0;i<b;i++){
		scanf("%d ",&b_arr[i]);
	}
	int con=0;
	for(int i=0;i<b;i++){
		for(int j=0;j<a;j++){
			if(b_arr[i]==a_arr[j])
				con++;
		}
	}
	if(con==b)
		printf("Yes");
	else
		printf("No");
    return 0;
}