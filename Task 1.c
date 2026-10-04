#include <stdio.h>

int main (){
	
	int balance=50000,count=0,cont=1,withdraw;
	
	printf("Welcome To Armali Bank! You Have An Initial Deposit Of 50 000rs \n To Make A Widrawl Please Enter The Amount You Would Like To Withdraw: \n");
	
	while (cont=1){
	printf("Enter The Amount To Withdraw: \n");
	scanf("%d", &withdraw);
	
	if (withdraw > 0){
		
		balance -= withdraw;
		count++;
		continue;
	}
	else {
		break;
	}
	
		
	}
	
	printf("The Balance In Your Account Is: %d \n", balance);
	printf("The Number Of successful TRansactions Executed Are: %d", count);
	
	
	return 0;
}
