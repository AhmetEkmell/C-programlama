#include <stdio.h>

int main(){
	
	printf("Hello Ahmet\n");
	
	int a = 44; 
	char a1= 65;
	char a2= 'S';
	float a3 = 4.536;
	double a4 = 4.536;
	printf("%d %c %c %.1f %.2f\t Hello world\n",a,a1,a2,a3,a4);
	printf("----------------------------------------------\n");
	printf("%d byte\n",sizeof(char));
	printf("%d byte\n",sizeof(int));
	printf("%d byte\n",sizeof(short int));
	printf("%d byte\n",sizeof(long int));
	printf("%d byte\n",sizeof(float));
	printf("%d byte\n",sizeof(double));
	
	printf("----------------------------------------------\n");
	
	int x1 = 10, x2 = 5;
	printf("%d\n",x1+x2);
	printf("%d\n",x1-x2);
	printf("%d\n",x1/x2);
	printf("%d\n",x1*x2);
	printf("%d\n",x1%x2);
	
	return 0;
}
