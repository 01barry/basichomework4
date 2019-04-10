#include <stdio.h>

#include <stdlib.h>

int main(void)

{

   int Second=0;

    printf("你輸入的秒數:");

    scanf("%d",&Second);

    printf("轉換的時間為=%02d時:%02d分:%02d秒\n",Second/3600%60,Second/60%60,Second%60);

 system("pause");  

 return 0;
 } 
