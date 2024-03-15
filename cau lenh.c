#include <stdio.h>
#include <stdlib.h>
#include <string.h>
Hàm strlen – hàm lay chieu dài chuoi
int strlen ( const char * str );
Hàm strcmp – hàm so sánh 2 chuoi
int strcmp ( const char * str1, const char * str2 );
Hàm strcat – hàm noi chuoi
char * strcat ( char * chuoi_dich, const char * chuoi_nguon);
Hàm strcpy – hàm copy chuoi
char * strcpy ( char * chuoi_dich, const char * chuoi_nguon);
Hàm strlwr – Ðua chuoi ve dang lowercase
char * strlwr(char * s);
Hàm strupr – ðua chuoi ve dang uppercase
char * strupr (char * s)
Hàm strrev – hàm ðao nguoc chuoi
strrev(char *chuoi)
Hàm strchr – Tra ve vi trí ðau tiên cua ki tu can tim (nguoc lai:strrchr)
char * strchr (const char * s, char c)
Hàm strstr – hàm tim chuoi con trong chuoi
char * strstr (const char * str, const char * sub)
#include <math.h>
Hàm toán h?c cõ b?n:

sqrt(): Cãn bac hai.
pow(): Luy thua.
fabs(): Giá tri tuyet ðoi.
ceil(): Làm tron lên ðen so nguyên gan nhat.
floor(): Làm tron xuong ðen so nguyên gan nhat.
round(): Làm tron ðen so nguyên gan nhat.
fmod(): Phan du caa phép chia so thuc.
Hàm luong giác:

sin(), cos(), tan(): Hàm sin, cos, và tan.
asin(), acos(), atan(): Ngý?c c?a sin, cos, và tan.
sinh(), cosh(), tanh(): Hàm sin, cos, và tan siêu ph?c t?p.
Hàm logarit:

log(): Logarit tu nhiên.
log10(): Logarit cõ s? 10.
H?ng s? toán h?c:

M_PI: S? pi.
CÁC HÀM THÝ VI?N v?  kí t? và xâu kí t?  
1. Các hàm s? l? k? t? (các hàm này n?m trong thý vi?n ctype.h) 
? Int isalpha(int c) : ki?m tra k? t? có là ch? cái không. 
? Int isdigit(int c) : ki?m tra xem k? t? có là ch? s? không. 
? Int islower(int c): ki?m tra k? t? có là ch? thý?ng không. 
? Int isupper(int c): ki?m tra k? t? có là ch? hoa không. 
? Int ispace(int c): ki?m tra k? t? có là tr?ng không (\n, d?u cách, \t). 
Các hàm s? l? xâu k? t?. (các hàm này n?m trong thý vi?n string.h) 
Char str[]=”Ha noi”; 
? Int strlen(char *s) tr? v? ð? dài c?a xâu s; 
Vd: strlen(str);//cho k?t qu? là 6 
? Char *strupr(char *s) ð?i ch? thý?ng trong xâu s sang ch? hoa. 
Vd: strupr(str);//cho k?t qu? là cho k?t qu? là: str=HA NOI 
 ? Char *strlwr(char *s) ð?i ch? hoa sang ch? thý?ng. 
strlwr(str);// cho k?t qu? là: str=”ha noi” 
? Char *strcat(char *s1, char *s2) n?i xâu s2 vào xâu s1; 
strcat(str, mua nay); cho k?t qu? là:str=” ha noi mua nay” 
 ? Int strcmp(char *s1, char *s2) cho giá tr? âm n?u xâu s1 nh? hõn xâu s2. Và cho giá t? dýõng n?u xâu 
s1 l?n hõn xâu s2. Tr? v? giá tr? b?ng 0 n?u xâu s1 b?ng xâu s2. 
Strcmp(str,” ha noi”); 
? Int strcmpi (char *s1, char *s2) so sánh 2 xâu nhýng không phân bi?t ch? thý?ng và ch? hoa. 
 Strcmp(str,” Ha noi”); 
 ? Char *strcpy(char *s1, char *s2) copy xâu s2 vào xâu s1. 
Vd Strcpy(str,” ha noi”); 
 ? Char *strncpy(char *s1, char *s2, int n) sao chép n k? t? ð?u c?a xâu s2 sang xâu s1 
Vd strncpy(str,”ha noi”,2); 
 ? Char *strnset(char *s ,int c, int n) dùng ð? sao chép n l?n k? t? c vào xâu s. 
? Char *strstr(char *s1, char *s2) t?m s? xu?t hi?n c?a xâu s2 trong xâu s1. N?u t?m th?y hàm cho ð?a 
ch? c?a xâu con trong xâu s1. Trái l?i cho NULL. 
? Char *strrev(char *s) dùng ð?o ngý?c xâu s.N?u thành công hàm cho ð?a ch? xâu ð? ð?o. 
Vd strrev(str);

