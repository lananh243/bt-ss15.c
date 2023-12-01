#include<stdio.h>
#include<string.h>
struct sinhVien{
	char fullName[50];
	int age;
	char phone[20];
	char email[20];
};
int main(){
	struct sinhVien sv1;
	strcpy(sv1.fullName,"Lung linh lam");
	sv1.age=21;
	strcpy(sv1.phone," 097457448");
	strcpy(sv1.email,"lili@gamil.com");
	printf("Thong tin sinh vien:\n");
	printf("Ho va ten:%s\n",sv1.fullName);
	printf("Tuoi:%d\n",sv1.age);
	printf("So dien thoai:%d\n",sv1.phone);
	printf("email:%s\n",sv1.email);
	return 0;
}

