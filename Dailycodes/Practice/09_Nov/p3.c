//Initialization of data in union
//memory is given one by one

#include<stdio.h>
union Employee{
	int empid;
	float empSal;
};
void main(){
	// union Employee emp1={10,50.6};      union does not support initilization through initializer list
	union Employee emp2;
	emp2.empid=15;
	printf("%d\n",emp2.empid);

	emp2.empSal=70.65;
	printf("%f\n",emp2.empSal);           
}
