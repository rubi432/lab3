#include <stdio.h>
#include <string.h>
int main(void){
    char word[50];
    int width;
    printf("Введите строку и ширину: ");
    scanf("%s %d",word,&width);
    printf("%*s\n",width,word);
    printf("%-*s\n",(int)width+5,word);
}