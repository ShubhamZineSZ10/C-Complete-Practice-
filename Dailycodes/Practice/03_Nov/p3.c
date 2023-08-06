//Nested structure
//   1st WAY

#include<stdio.h>
#include<string.h>
struct MovieInfo{                                 //inner structure
	char actor[20];
	int year;
	float imdb;
};
struct Movie{                                     //outer structure
	char mName[20];
	struct MovieInfo objin;
};
void main(){
	struct Movie objout;
	struct Movie objout2={"Ram Setu",{"Akshay Kumar",2022,8.8}};

	strcpy(objout.mName,"Tumbbad");
	strcpy(objout.objin.actor,"Sohan Shah");
	objout.objin.year=2018;
	objout.objin.imdb=8.5;

	printf("%s\n",objout.mName);
	printf("%s\n",objout.objin.actor);
	printf("%d\n",objout.objin.year);
	printf("%f\n",objout.objin.imdb);

	printf("%s\n",objout2.mName);
	printf("%s\n",objout2.objin.actor);
	printf("%d\n",objout2.objin.year);
	printf("%f\n",objout2.objin.imdb);

	
}
