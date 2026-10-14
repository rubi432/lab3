#include <stdio.h>
#include <string.h>
int main(void){
    char arr[20] = {"SibSUTIS"};
    printf("SIZEOF:%zu\n",sizeof(arr));
    printf("STRLEN:%zu\n",strlen(arr));
    printf("FREE_BYTES:%zu\n",sizeof(arr)-strlen(arr)-1);
    char arr1[20] = {"СибГУТИ"};
    printf("\nSIZEOF:%zu\n",sizeof(arr1));
    printf("STRLEN:%zu\n",strlen(arr1));
    printf("FREE_BYTES:%zu\n",sizeof(arr1)-strlen(arr1)-1);







}