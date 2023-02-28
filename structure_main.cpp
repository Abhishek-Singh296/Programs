#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Car_Details
{
	char company[20];
	char model[20];
	int manufacturing_year;
	float onroad_price;
	char category[8];
};
int main() {
	struct Car_Details v={"BMW,Mercedes","X7",2019,8500000,"SUV"};
	//strcyp(v.company,"BMW");
	//v.company[20]="BMW";
	printf("Company: %s\n",v.company);
	
	//strcyp(v.model,"X7");
	//v.model[20]="X7";
	printf("Model: %s\n",v.model);
	
	//v.manufacturing_year=2019;
	printf("Manufacturing Year: %d\n",v.manufacturing_year);
	
	//v.onroad_price=8500000;
	printf("Onroad Price: %f\n",v.onroad_price);
	
	//strcyp(v.category,"SUV");
	//v.category[8]="SUV";
	printf("Category: %s\n",v.category);
	
	return 0;
}
