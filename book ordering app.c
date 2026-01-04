#include<stdio.h>

int main(){
int bookPrice, orderQuantity;
float discountRate, noDiscountPrice,discountPrice,sum;
bookPrice= 20;
orderQuantity = 0;
printf("How much do you order a book: ");
scanf("%d", &orderQuantity);

 if(orderQuantity>=60){
   discountRate = 0.30;
 }else{
 	 if(orderQuantity>=30 && orderQuantity < 60){
 	 	discountRate=0.20;
	  }else if(orderQuantity >=10 && orderQuantity < 30){
	  	discountRate = 0.12;
	  }else{
 	    discountRate = 0.01;
	  }
 	
 }



	noDiscountPrice= orderQuantity * bookPrice;
	printf("No discount price is:%.2f TL\n", noDiscountPrice);
	discountPrice = orderQuantity * bookPrice * discountRate;
	printf("Discount price is: %.2f TL\n", discountPrice);
	
	
	
	
	
	
	return 0;
}
