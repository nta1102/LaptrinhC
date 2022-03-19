# include <stdio.h>
int main()
{
int a,b;
printf("Nhap so nguyen a: ");
scanf("%d",&a);
printf("Nhap so nguyen b: ");
scanf("%d",&b);

int tong=0;
tong=a+b;

int tich= 0;
tich=a*b;

int thuong=0;
thuong= a%b;
printf("\nthuong la: %d \ttong la: %d \ttich la: %d", thuong, tong, tich);
return 0;
}
