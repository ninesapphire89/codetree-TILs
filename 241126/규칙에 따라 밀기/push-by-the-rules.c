#include <stdio.h>
#include <string.h>

int main() {
    char obj[101]; 
    char ord[101]; 

   
    scanf("%s", obj);
    scanf("%s", ord);

    int len1 = strlen(obj); 
    int len2 = strlen(ord); 

   
    for (int i = 0; i < len2; i++) {
        if (ord[i] == 'L') { 
            char first = obj[0];
            for (int j = 0; j < len1 - 1; j++) {
                obj[j] = obj[j + 1];
            }
            obj[len1 - 1] = first; 
        } 
        else if (ord[i] == 'R') { 
            char last = obj[len1 - 1];
            for (int j = len1 - 1; j > 0; j--) {
                obj[j] = obj[j - 1];
            }
            obj[0] = last; 
        }
    }

    
    printf("%s\n", obj);

    return 0;
}