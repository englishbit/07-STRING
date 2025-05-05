#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    if(n<1){
        printf("invalid input\n");
        return -1;
    }

    char string[n+1];

    for(int i=0;i<n;i++){
        scanf(" %c",&string[i]);
    }

    string[n]='\0';

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            printf("%c",string[j]);
        }
        printf("\n");
    }












    return 0;
}