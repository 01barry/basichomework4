#include <stdio.h>

#include <stdlib.h>

int main(void)

{

   int Second=0;

    printf("�A��J�����:");

    scanf("%d",&Second);

    printf("�ഫ���ɶ���=%02d��:%02d��:%02d��\n",Second/3600%60,Second/60%60,Second%60);

 system("pause");  

 return 0;
 } 
