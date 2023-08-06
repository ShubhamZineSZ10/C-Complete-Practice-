//Typedef -  it is used to create allices

#include<stdio.h>
typedef struct Employee{
	int empID;
	char empName[20];
	float empSal;

}Emp;              // Emp is new name to struct Employee
void main(){
	struct Employee obj1={10,"Shubham",11.5};
	Emp obj2={11,"Ajay",12.2};

	printf("%d\n",obj1.empID);
	printf("%s\n",obj1.empName);
	printf("%f\n",obj1.empSal);
	printf("%d\n",obj2.empID);
	printf("%s\n",obj2.empName);
	printf("%f\n",obj2.empSal);


}
