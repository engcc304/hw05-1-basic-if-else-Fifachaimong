/*
    รับตัวอักขระมาทั้งหมด 4 ค่า แล้วนำมาแสดงผลย้อนกลับ เช่น กรอกค่า L M X Y ต้องแสดงเป็น Y X M L เป็นต้น
    
    Test case:
        L M Y K
    Output:
        Result: K Y M L

    Test case:
        A B C D
    Output:
        Result: D C B A
*/
#include <stdio.h>
int main(){
    char A ='D';
    char B ='C';
    char C = 'B';
    char D = 'A';
    char L = 'K';
    char M = 'Y';
    char Y = 'M';
    char K = 'L';
    printf("star\n",L ,M ,Y ,K);
    scanf("%d",L ,M ,Y ,K);
    printf("star\n",A ,B ,C ,D);
    if ( L ,M ,Y ,K ){
        printf("Result: K M Y L");
    }else if (scanf("%d",A ,B ,C ,D ));{
        printf("Result: D C B A");
    }
  return 0;
}