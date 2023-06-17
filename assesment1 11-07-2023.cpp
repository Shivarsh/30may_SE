#include<stdio.h>
#include<stdbool.h>
int main()
{
	int  menu,pizza,burger,idli,dosa,totalamount=0,choice;
	int q;
	
	bool status=true;
	printf("\t----:Manu:----");
	printf("\n1.Pizza		Price=180rs/pcs");
	printf("\n2.Burger   	Price=100rs/pcs");
	printf("\n3.Idli     	Price=50rs/pcs");
	printf("\n4.Dosa     	Price=120rs/pcs");
	
	while(status)
	{
		printf("\nPlease enter your Choice:  ");
		scanf("%d",&choice);
		
	    if(choice==1)
		{	
			printf("\nYou selected Pizza.");
			printf("\nPlease select quantity:");
			scanf("%d",&q);
			pizza=180*q;
			printf("\nYour bill is = %d",pizza);	
		}
		else if(choice==2)
		{
			printf("\nYou selected Burger.");
			printf("\nPlease select quantity:");
			scanf("%d",&q);
			burger=120*q;
			printf("\nYour bill is = %d",burger);
		}
		else if(choice==3)	
		{
			printf("\nYou selected Dosa.");
			printf("\nPlease select quantity:");
			scanf("%d",&q);
			dosa=100*q;
			printf("\nYour bill is = %d",dosa);
			}
		else if(choice==4)
		{
			printf("\nYou selcted Idli.");
			printf("\nPlease select quantity:");
			scanf("%d",&q);
			idli=50*q;
			printf("\nYour bill is = %d",idli);
		}
		else
		{
			printf("\n  Invalid Input::");
		
			break;
			
		}
		
		printf("\nwill you want more....");
		
	
	int i;
	printf("\n Yes ! press 1");
	printf("\n No ! press 2\n");
	scanf("%d",&i);
	switch(i)
	{    	break;
		case 1:
			printf("\n1.Pizza		Price=180rs/pcs");
			printf("\n2.Burger   	Price=100rs/pcs");
			printf("\n3.Idli     	Price=50rs/pcs");
			printf("\n4.Dosa     	Price=120rs/pcs");
			break;
		case 2:
			printf("thank you ");
			status=false;
			break;		
		case 3:
			printf("invalid value");
			
			break;
			
	}
	
	
	}
	

			totalamount=pizza+burger+dosa+idli;
			printf("\n totalamount = %d",totalamount);
}
