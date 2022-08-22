#include <stdio.h>
 
 
 
 
int main(){
 
 
int A, B;
srand(time(NULL));
    printf("Enter====> \n1 for Rock \n2 for Paper \n3 for Scissors \n");
    scanf("%d", &A);
 
 
 
 
    B=1+rand()%3;
    printf("Computer Choose %d\n", 1+rand()%3);
 
 
    if (A == 1 && B == 1 || A == 2 && B == 2 || A == 3 && B == 3)
        printf("DRAW!!");
 
 
    else if (A == 1 && B == 2 || A == 2 && B == 3 || A == 3 && B == 1)
        printf("YOU LOSE");
 
 
    else if (A == 3 && B == 2 || A == 2 && B == 1 || A == 1 && B == 3)
        printf("YOU WIN");
 
 
 
 
 
 
 
 
    return 0;
}
