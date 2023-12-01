#include<stdio.h>
struct student {
	char name[50];
	int age;
	char phone[20];
	char email[30];
	
};
void display(struct student s1);
int main(){
	struct student s1;
	printf("Enter name:");
	gets(s1.name);
	printf("Enter age:");
	scanf("%d",&s1.age);
	printf("Enter phone:");
	scanf("%d",&s1.phone);
	printf("Enter email:");
	scanf("%s",&s1.email);
	display(s1);
	return 0;
}
void display(struct student s){
	printf("\nDisplaying information\n");
	printf("Name:%s",s.name);
	printf("\nAge:%d",s.age);
	printf("\nPhone:%d",s.phone);
	printf("\nEmail:%s",s.email);
}
