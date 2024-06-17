#include<stdio.h>

struct employee1{
	int id;
	char name[100];
};

union employee2{
	int id;
	char name[100];
};

int main(){
	struct employee1 s_emp;
	union employee2 u_emp;
	
	printf("enter id and name for structure variable";
	scanf("%d%s",&s_emp.id,&s_emp.name));
	
	printf("id is %s and name is %s",s_emp.id,s_emp.name);
	
	printf("enter id for union variable");
	scanf("%d",&u_emp,id);
	printf("id is %d",u_emp.id);
	
	printf("enter name for union variable");
	scanf("%s",&u_emp,name);
	printf("id is %s",u_emp.name);
	
	printf("%d",sizeof(s_emp));
	printf("%s",sizeof(u_emp));
}


