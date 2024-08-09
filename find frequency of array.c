int main(){
    int n=5,ar[n],f[n],i,j;
    printf("Enter the array elements:");
    for(int i;i<n;i++){
        scanf("%d",&ar[i]);
        f[i]=1;
    }
    
    for(int j=0;j<n;j++){
        for(int k=0;k<n;k++){
            if(ar[i]==ar[j]){
                f[i]++;
                f[j]=0;
            }
        }
    }
    
    printf("Frequency");
    
    for(int i=0;i<n;i++){
        if(f[i]!=0){
            printf("Frequency of %d is %d \n",ar[i],f[i]);
        }
    }
}
