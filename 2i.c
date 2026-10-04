//Write a small function to find the smallest element in an array using pointers. In the main function, create a dynamically allocated array, read the values from the keyboard, and pass the array to the function. Display the result (smallest element) in the main function.

#include<stdio.h>
#include<stdlib.h>
int findSmallest(int *arr, int n){
    int *ptr=arr;
    int smallest= *ptr;
    for(int i=1;i<n;i++){
        ptr++;
        if(*ptr < smallest){
            smallest=*ptr;
        }
    }
    return smallest;
}
int main(){
    int n;
    scanf("%d", &n);
    int *arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL){
    printf("Enter number of elements");
        printf("Memory allocation failed");
        return 1;
    }
    printf("Enter the elements\n",n);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int smallest=findSmallest(arr,n);
    printf("Smallest element=%d\n",smallest);
    free(arr);
    return 0;
}
