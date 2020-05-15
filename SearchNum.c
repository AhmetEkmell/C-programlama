#include <stdio.h>

int main(){
  
  int n;
  printf("N sayisini giriniz");
  scanf("%d",&n);
  
  int i,sayi,enb=0;
  
  for(i=n;i>0;i--)
  {
  	printf("sayi giriniz: ");
  	scanf("%d",&sayi);
  		if(sayi>enb)
		{
  			enb = sayi;
	    }
  }
  
  printf("En buyuk sayi=%d",enb);
  
  return 0;
}
