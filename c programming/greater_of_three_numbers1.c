#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    { 
        if(a>c) {
        printf("%d id greater number",a);
}
else{
    printf("%d is greater number",c);
    }
  }else {
        if(b>a)
        {
            printf("%d is greater number",b);
        } else{
            printf("%d is greater number",c);
        }
    }
}