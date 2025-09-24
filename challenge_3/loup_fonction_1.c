#include <stdio.h>
void signe (int A, int B){
    if (A*B>0)
    printf ("a et b ont le meme signe\n");
    else
    printf("n'ont pas le meme signe!\n");
}
int minimuim (int A , int B){
    int min;
    if (A>B)
    min= B;
    else
    min= A;
    return min ;
    
}
int maximuim (int A, int B){
    int max;
    if (A>B)
    max = A;
    else
    max = B;
    return max;
}
int main() {
    int A,B;
    int max , min;
    printf("entre a et b :\n");
    scanf ("%d %d",&A,&B);
    signe(A,B);
    max = maximuim(A,B);
    min = minimuim(A,B);
    printf("le max est :%d\n",max);
    printf("le min est :%d",min);
    return 0;
}