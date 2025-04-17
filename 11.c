#include <stdio.h>
#include<conio.h>
#include<stdlib.h>


int main() {
    int n, m, i;
    char boys[n][50];  
    char girls[m][50];      
    
    printf("Enter the number of boys: ");
    scanf("%d", &n); 

    
    printf("Enter the names of boys:\n");
     for (i = 0; i < n; i++) {
         printf("Boy %d: ", i + 1);
         scanf("%s", boys[i]);
    }
    
    printf("\nEnter the number of girls: ");
     scanf("%d", &m); 

    
     printf("Enter the names of girls:\n");
     for (i = 0; i < m; i++) {
         printf("Girl %d: ", i + 1);
         scanf("%s", girls[i]);
     }

    
    printf("\nList of Boys:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", boys[i]);
    }

    printf("\nList of Girls:\n");
    for (i = 0; i < m; i++) {
        printf("%s\n", girls[i]);
    }

    return 0;
}