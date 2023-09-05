#include<stdio.h>
main(){
	//finding the hypotenuese
	int P,B,H;
	printf("Enter the value P\n",P);
	scanf("%d",&P);
	printf("Enter the value B\n",B);
	scanf("%d",&B);
	
	H=sqrt(P*P+B*B);
	printf("The Hypotenuse is:%d\n",H);
}
