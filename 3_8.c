#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL, "");
    const char    utf8_text[] = "Сбой матрицы";
    const wchar_t wide_text[] = L"Сбой матрицы";
    printf("char  -> sizeof: %zu bytes, strlen: %zu chars\n",sizeof(utf8_text), strlen(utf8_text));
    printf("wchar -> sizeof: %zu bytes, wcslen: %zu chars\n",sizeof(wide_text), wcslen(wide_text));
    return 0;
}