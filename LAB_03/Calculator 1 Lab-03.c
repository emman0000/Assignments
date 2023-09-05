#include<stdio.h>
main(){
int x,y,z,s,m,d,choice,Ans;
 
//calculator program

printf("Enter number x\n",x);
scanf("%d",&x);
printf("Enter number y\n",y);
scanf("%d",&y);

printf("1.ADD, 2.SUB, 3.MULT, 4.DIV\n");
scanf("%d",&choice);

if (choice==1){
	z=x+y;
	printf("Ans=%d",z);	
}

else if (choice==2){
	s=x-y;
	printf("Ans=%d",s);
}
else if (choice==3){
	s=x*y;
	printf("Ans=%d",m);
}
else if (choice==4){
	s=x/y;
	printf("Ans=%d",d);
}


}
