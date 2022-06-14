#include<stdio.h>

void LinearSeach(int arr[], int key, int n){

    int i = 0, flag = 0;

    while(i<n){
        if(arr[i] == key ){
            printf("Search Element Found At %d ",i+1);
            flag = 1;
        }
        i++;
    }

    if(flag == 0){
        printf("Error! Search Element Is Not Found ... ");
    }

}

void main(){

    int arr[20], n, i, key;

    printf("\nEnter the number of integers : ");
    scanf("%d",&n);

    printf("\nEnter Elements of Array : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("\nEnter the Search Element : ");
    scanf("%d",&key);

    LinearSeach(arr,key,n);


}