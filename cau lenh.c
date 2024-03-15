#include <stdio.h>
#include <stdlib.h>
#include <string.h>
H�m strlen � h�m lay chieu d�i chuoi
int strlen ( const char * str );
H�m strcmp � h�m so s�nh 2 chuoi
int strcmp ( const char * str1, const char * str2 );
H�m strcat � h�m noi chuoi
char * strcat ( char * chuoi_dich, const char * chuoi_nguon);
H�m strcpy � h�m copy chuoi
char * strcpy ( char * chuoi_dich, const char * chuoi_nguon);
H�m strlwr � �ua chuoi ve dang lowercase
char * strlwr(char * s);
H�m strupr � �ua chuoi ve dang uppercase
char * strupr (char * s)
H�m strrev � h�m �ao nguoc chuoi
strrev(char *chuoi)
H�m strchr � Tra ve vi tr� �au ti�n cua ki tu can tim (nguoc lai:strrchr)
char * strchr (const char * s, char c)
H�m strstr � h�m tim chuoi con trong chuoi
char * strstr (const char * str, const char * sub)
#include <math.h>
H�m to�n h?c c� b?n:

sqrt(): C�n bac hai.
pow(): Luy thua.
fabs(): Gi� tri tuyet �oi.
ceil(): L�m tron l�n �en so nguy�n gan nhat.
floor(): L�m tron xuong �en so nguy�n gan nhat.
round(): L�m tron �en so nguy�n gan nhat.
fmod(): Phan du caa ph�p chia so thuc.
H�m luong gi�c:

sin(), cos(), tan(): H�m sin, cos, v� tan.
asin(), acos(), atan(): Ng�?c c?a sin, cos, v� tan.
sinh(), cosh(), tanh(): H�m sin, cos, v� tan si�u ph?c t?p.
H�m logarit:

log(): Logarit tu nhi�n.
log10(): Logarit c� s? 10.
H?ng s? to�n h?c:

M_PI: S? pi.
C�C H�M TH� VI?N v?  k� t? v� x�u k� t?  
1. C�c h�m s? l? k? t? (c�c h�m n�y n?m trong th� vi?n ctype.h) 
? Int isalpha(int c) : ki?m tra k? t? c� l� ch? c�i kh�ng. 
? Int isdigit(int c) : ki?m tra xem k? t? c� l� ch? s? kh�ng. 
? Int islower(int c): ki?m tra k? t? c� l� ch? th�?ng kh�ng. 
? Int isupper(int c): ki?m tra k? t? c� l� ch? hoa kh�ng. 
? Int ispace(int c): ki?m tra k? t? c� l� tr?ng kh�ng (\n, d?u c�ch, \t). 
C�c h�m s? l? x�u k? t?. (c�c h�m n�y n?m trong th� vi?n string.h) 
Char str[]=�Ha noi�; 
? Int strlen(char *s) tr? v? �? d�i c?a x�u s; 
Vd: strlen(str);//cho k?t qu? l� 6 
? Char *strupr(char *s) �?i ch? th�?ng trong x�u s sang ch? hoa. 
Vd: strupr(str);//cho k?t qu? l� cho k?t qu? l�: str=HA NOI 
 ? Char *strlwr(char *s) �?i ch? hoa sang ch? th�?ng. 
strlwr(str);// cho k?t qu? l�: str=�ha noi� 
? Char *strcat(char *s1, char *s2) n?i x�u s2 v�o x�u s1; 
strcat(str, mua nay); cho k?t qu? l�:str=� ha noi mua nay� 
 ? Int strcmp(char *s1, char *s2) cho gi� tr? �m n?u x�u s1 nh? h�n x�u s2. V� cho gi� t? d��ng n?u x�u 
s1 l?n h�n x�u s2. Tr? v? gi� tr? b?ng 0 n?u x�u s1 b?ng x�u s2. 
Strcmp(str,� ha noi�); 
? Int strcmpi (char *s1, char *s2) so s�nh 2 x�u nh�ng kh�ng ph�n bi?t ch? th�?ng v� ch? hoa. 
 Strcmp(str,� Ha noi�); 
 ? Char *strcpy(char *s1, char *s2) copy x�u s2 v�o x�u s1. 
Vd Strcpy(str,� ha noi�); 
 ? Char *strncpy(char *s1, char *s2, int n) sao ch�p n k? t? �?u c?a x�u s2 sang x�u s1 
Vd strncpy(str,�ha noi�,2); 
 ? Char *strnset(char *s ,int c, int n) d�ng �? sao ch�p n l?n k? t? c v�o x�u s. 
? Char *strstr(char *s1, char *s2) t?m s? xu?t hi?n c?a x�u s2 trong x�u s1. N?u t?m th?y h�m cho �?a 
ch? c?a x�u con trong x�u s1. Tr�i l?i cho NULL. 
? Char *strrev(char *s) d�ng �?o ng�?c x�u s.N?u th�nh c�ng h�m cho �?a ch? x�u �? �?o. 
Vd strrev(str);

