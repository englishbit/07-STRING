#include<stdio.h>
#define MOD 1000000007
#define BASE 31
int main(){
    int n;
    scanf("%d",&n);
    
    long long hash_val=0;
    long long p_power=1;

    //logic for special case

    if(n<1){
        printf("Invalid input\n");
        return -1;
    }
    char string[n+1];
    scanf("%s",string);

    //logic for calculating hash value
    for(int i=0;i<n;i++){
        hash_val=(hash_val+(string[i]-'a'+1)*p_power)%MOD;
        
        p_power=(p_power*BASE)%MOD;


    }
    
    printf("%lld\n",hash_val);




















    return 0;
}