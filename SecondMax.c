#include<stdio.h>

int secondMax(const int* arr, size_t n, int* secondMax){
    int num = arr[0];
    int num2 = num;
    for (int i = 0; i < n; i++)
    {
        
       
         if (num > *(arr + 1))
        {
            num = *(arr + 1);
        }

        
    }

   
    for (int i = 0; i < n; i++)
    {
        
        
           if (num2 > *(arr + 1))
        {
            num2 = *(arr + 1);
        }

        
    }

   

    
   return  num2;
}


int main(){
   int sm;
   int arr[] = {12, 34, 5, 70, 46 };
   int size = sizeof(arr) / sizeof(arr[0]);
   
   printf("%d",secondMax(arr,size,&sm));
     return 0;
}