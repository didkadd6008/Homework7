#include <stdio.h>

 #define COUNT 5

 int sumArray( int* arr, int n){
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += *(arr + i);
    }
      return sum;
 }

 void arrayEvaluate(int* arr, int n, int(*f)(int*,int)){
      printf("%d",f(arr,n));
 }

int main(){
    int arr[COUNT] ;
    int(*f)(int*,int);
     for (int i = 0; i < COUNT; i++){
         
      scanf("%d", arr + i);
         
            
    }
      f = &sumArray;
     
      
     arrayEvaluate(arr,COUNT,*f);

    
}