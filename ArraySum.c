#include <stdio.h>


unsigned sumArrayDigits(const int* arr, size_t n){
    unsigned sum = 0;
for (int i = 0; i < n; i++)
{
    int num = arr[i];

    if (num <= 9)
    {
        sum += num;
    }else 
    {
        
        while (num > 0)
        {
          
            sum += num % 10;
            num = num / 10;
        }
        
    }
    
    
    
} 
      return sum;
}

int main(){
const int arr[] = {12, 34, 5, 70};
int size = sizeof(arr) / sizeof(arr[0]);
printf("%u",sumArrayDigits(arr,size));
return 0;
}