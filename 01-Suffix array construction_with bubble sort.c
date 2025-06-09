#include<stdio.h>
#include<string.h>

int main(){

    int n;
    scanf("%d",&n);
    //logic for special case
    if(n<1){
        printf("invalid input\n");
        return -1;
    }


    //logic for taking input string
    char string [n+1];
    getchar();

    for(int i=0;i<n;i++){
        scanf("%c",&string[i]);
    }

    string[n]='\0';



    // logic for filling the suffix array
    int suffix[n];

    for(int i=0;i<n;i++){
        suffix[i]=i;
    }


    //logic for costructing suffix array
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(strcmp(&string[suffix[j]],&string[suffix[j+1]])>0){
                    
            int temp=suffix[j];
            suffix[j]=suffix[j+1];
            suffix[j+1]=temp;
            }





        }
    }


    //printig the suffix array

    for(int i=0;i<n;i++){
        printf("%d  %s",suffix[i],&string[suffix[i]]);
    }
















    return 0;
}
