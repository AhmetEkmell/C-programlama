#include <stdio.h>
#define PI 3.14  //pi ye sabit deger atamasi yapildi.
#include <math.h>
int main(){
	
	int a,b,c;
	float x1,x2;
	float delta;
	
	printf("Denklem a b ve c degerlerini giriniz\n");
	scanf("%d %d %d",&a,&b,&c);
	
	delta = (b*b)-4*a*c;
	x1 = (-b+(sqrt(delta))) / (2*a);
	x2 = (-b-(sqrt(delta))) / (2*a);
	printf("Denklemin 1.koku=%.2f, ikinci koku=%.2f dir.",x1,x2);	
	
	printf("------------------------------------------------------");
	
	int a,b,c,d,e;
	float aritmetik;
	
	printf("5 adet sayi giriniz\n");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	aritmetik = (a+b+c+d+e)/5.0;
	printf("Sayilarin ortalamasi=%.2f",aritmetik);
	
	printf("------------------------------------------------------");
	
	
	int yaricap;
	float hacim;
	
	printf("Kurenin yaricapini giriniz: ");
	scanf("%d",&yaricap);
	
	hacim = (4/3.0)*PI*(yaricap*yaricap*yaricap);
	printf("Kurenin yaricapi= %.2f dir.",hacim);
	
	return 0;
}
