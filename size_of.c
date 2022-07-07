//#include<stdio.h>
/*int main(){
int i;
float f;
double d;
char c;
printf("Size Of Int = %d\n", sizeof(i));
printf("Size Of Float = %d\n", sizeof(f));
printf("Size Of Double = %d\n", sizeof(d));
printf("Size Of Char = %d\n", sizeof(c));
}*/
#include<stdio.h>
int main()
{
	int c=4,d=5,temp;


	temp=c;
	c=d;
	d=temp;

	printf("c=%d\n",c);
	printf("d=%d",d);

	return 0;

}
