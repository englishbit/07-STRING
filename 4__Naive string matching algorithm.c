#include<stdio.h>
int main(){

    int n,m;
    scanf("%d %d",&n,&m);
    //logic for special case
    if(n<1 || m<1){
        printf("Invalid input\n");
        return -1;
    }
    if(m>n){
        printf("Invalid input\n");
        return -1;
    }

    //logic for taking input
    char text[n+1];
    char patrn[m+1];
    printf("Enter the text\n");
    scanf("%s",text);

    printf("Enter the pattern\n");
    scanf("%s",patrn);
    

    //logic for string matching 
    int found=0;
    for(int i=0;i<=n-m;i++){
        int j;
        for(j=0;j<m;j++){
            if(text[i+j]!=patrn[j]){
                
                break;
            }
        }

        if(j==m){
            printf("The pattern is found\n");
            found=1;
        }

    }

    if(found==0){
        printf("The pattern is not found\n");
    }

    
    return 0;
}