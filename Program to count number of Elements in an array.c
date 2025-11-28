#include <stdio.h>
int main(){
int arr[]={10,20,0,40,50};
int count=sizeof(arr)/sizeof(arr[0]);
printf("Total number of elements in the array=%d\n",count);
return 0;
}
