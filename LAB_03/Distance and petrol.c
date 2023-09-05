#include<stdio.h>
main(){
int North,South,East,West,Rateltr,Total,Distance;
printf("Enter Total distance travelled South=\n",South);
scanf("%d",&South);
printf("Enter Total distance travelled North=\n",North);
scanf("%d",&North);
printf("Enter Total distance travelled East=\n",East);
scanf("%d",&East);
printf("Enter Total distance travelled West=\n",West);
scanf("%d",&West);
printf("Enter Rate of Petrol=\n",Rateltr);
scanf("%d",&Rateltr);

Distance=North+South+West+East;
Total=Distance*Rateltr;
printf("Priceis%d",Total);
	scanf("%d",Total);

}
