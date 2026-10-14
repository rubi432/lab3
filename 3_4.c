#include <stdio.h>
#include <string.h>
int main(void){
    char word[]="\x48\x65\x6C\x6C\x6F\t\x57\x6F\x72\x6C\x64";
    // x48 = H, x65=e x6C=l,x6c=l,x6F=o,t=табуляция,x57=W,x6F=o,x72=r,x6C=l,x64=d
    printf("%s\n",word);
    printf("STRLERN:%zu\n",strlen(word));
    printf("SIZEOF:%zu\n",sizeof(word));
}