/* Write a recursive C program to implement Selection Sort using pointers. 
• The recursive function should sort the array using the Selection Sort algorithm. 
• Access and manipulate the array elements using pointers (i.e., avoid using arr[i] 
style directly). 
• The program should read the array from the user in the main function, call the 
recursive sorting function, and display the sorted array. */

#include<stdio.h>
#include<stdlib.h>
int findMin(int *arr, int n, int start){
  int min=start;
  for(int j=start+1; j<n;j++){
    if(*(arr+j)<*(arr+min)){
            min=j;
        }
    }
  retrun min;
}
void selectionSortRec(int *arr, int n, int start){
  if (start>n-1) return;
  int min=findMin(arr,n,start);
    if min!=start{
        temp=*(arr+start);
        *(arr+start)=*(arr+min;
        *(arr+min)=temp;
}
selectionSortRec(arr, start+1, n);

int main(){
  int n;
  printf("Enter number of elements:");
  scanf("%d",&n);
  int *arr= (int*)malloc(n*sizeof(int));
  if(arr==NULL){
    printf("memory allocation failed");
    return 1;
  }
  printf("enter the elements");
  for(i=0;i<n;i++){
    scanf("%d", (arr+i));
  }
  selectionSortRec(arr,0,n);
  printf("sorted array");
  for(i=0;i<n;i++){
    printf("%d", *(arr+i));
  }
  free(arr);
  retrun 0;
}
