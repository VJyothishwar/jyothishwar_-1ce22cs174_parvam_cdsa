#include <stdio.h>
int main() {
    char ch;
    printf("Enter a single character: ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z') {
        ch = ch - 'a' + 'A'; 
        printf("%c\n", ch);
    }
    else if (ch >= 'A' && ch <= 'Z') {
        ch = ch - 'A' + 'a';  
        
        printf("%c\n", ch);
    }
    else {
        printf("Invalid input\n");
    }
    return 0;
}