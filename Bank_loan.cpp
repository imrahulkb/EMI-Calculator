#include<stdio.h>
int main()
{
	float pamt,roi,emi,ntrst,partofloan;
	int i;
	printf("Enter loan amount required\n");
	scanf("%f",&pamt);
	printf("Enter ROI\n");
	scanf("%f",&roi);
	printf("Enter each month installment\n");
	scanf("%f",&emi);
	printf("\nEach Month Installment\t");
	printf("Interest paid\t");
	printf(" Part of loan paid\t");
	printf("Remaining\n");
	for(i=0;pamt>emi;i++)
	{
		partofloan=emi-pamt*roi/1200;
		ntrst=pamt*roi/1200;
		pamt=pamt-partofloan;
		printf("%f\t\t",emi);
		printf("%f\t",ntrst);
		printf("%f\t\t",partofloan);
		printf("%f\n",pamt);
	}

	        partofloan=pamt;
		ntrst=pamt*roi/1200;
		emi=pamt+ntrst;
		printf("%f\t\t",emi);
		pamt=0;
		printf("%f\t",ntrst);
		printf("%f\t\t",partofloan);
		printf("%f\n",pamt);
		printf(" The number of months the loan was paid in are %d months",i);
}
