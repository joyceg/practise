#include "file1.c";
int main()
{
extern int a;
printf("The value of a from file1.c is:%d",a);
fun();
return 0;

}
