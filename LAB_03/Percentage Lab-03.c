#include<stdio.h>
main(){

float OGprice,discount,PricePaid;
    printf(" OG price ",OGprice);
    scanf("%f", &OGprice);
    printf("\n");
    printf(" What is the discount ",discount);
    scanf("%f", &discount);
    printf("\n");
    
            PricePaid = (OGprice*discount)/100;
            PricePaid = OGprice-discount;
            printf(" New Price is: %0.2f", PricePaid);
        
}
