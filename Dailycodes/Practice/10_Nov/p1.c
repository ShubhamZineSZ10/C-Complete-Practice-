//Enumeration/enum
//it is used to make allices of integers

#include<stdio.h>
enum Partners{
	Dhole,
	Sangle,
	Wani=11,
	More,
	Athare
};
void main(){
	enum Partners obj;
	printf("%ld\n",sizeof(obj));     // size is given in same way as in union

	//printf("%d\n",obj.Dhole);     elements in enum are accessed without object
	
	printf("%d\n",Dhole);
	printf("%d\n",Sangle);
	printf("%d\n",Wani);
	printf("%d\n",More);
	printf("%d\n",Athare);

       //enum Partners obj2={Sharma,Verma};      such initialization is not allowed
}
