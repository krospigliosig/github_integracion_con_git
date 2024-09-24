#include <stdio.h>

//insertion sort
void insertionSort(int* A,int n){
    for(int i=1;i<n;i++){
        int key=A[i];
        int j=i-1;
        while(j>=0 && A[j]>key){
            A[j+1]=A[j];
            j=j-1;
        }
        A[j+1]=key;
    }
}

/*
main
*/

int main(){
    int A[]={5,2,4,6,1,3};
    int n=6;
    printf("Pre-insertion list:\n ");
    for(int i=0;i<n;i++){
        printf("%d ", A[i]);
    }
    printf("\nPost-insertion list:\n ");
    insertionSort(A,n);
    for(int i=0;i<n;i++){
        printf("%d ", A[i]);
    }
}