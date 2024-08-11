#include<stdio.h>
int main(){
    int a[100],n;
    printf("enter the number of array elements\n");
    scanf("%d",&n);

    for ( int i=0; i<n ;i++ ){
    printf("enter the element at position %d\t",i+1);
    scanf("%d",&a[i]);
    }
    printf("before updating \n ");
     for( int i=0; i<n ;i++ ){
        printf("%d\t",a[i]);
      
     }
 printf("\n");
    for ( int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1 ; j++){
            if(a[j]>a[j+1]){
                int t = a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("after updating\n");
     for( int j=0; j<n ;j++ ){
        printf("%d\t",a[j]);
     }
  return 0;
}