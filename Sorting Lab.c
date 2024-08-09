//sorting the array first half into ascending and second half into descending
int main(){
    int ar[10],i,j,a;
    int k=10/2;
    
   
    for(int i;i<10;i++){
        printf("Enter the array elements:");
        scanf("%d",&ar[i]);

}
for(int i=0;i<k;i++){
        for(int j=i+1;j<k;j++){
            if(ar[i]>ar[j]){
                a=ar[i];
                ar[i]=ar[j];
                ar[j]=a;
            }
        }
    }


for(int i=k;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(ar[i]<ar[j]){
                a=ar[i];
                ar[i]=ar[j];
                ar[j]=a;
            }
        }
    }
    
    printf("The first half:");
    for(i=0;i<k;i++){
        printf("%d\n",ar[i]);
    }
    printf("The second half");
    for(i=k;i<10;i++){
        printf("%d\n",ar[i]);
    }
}
