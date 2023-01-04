#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct user
{
    /* data */
    char phone[50];
    char ac[50];
    char password[50];
    float balance;
};

int main()
{
    struct user user,usr;
    char filename[50],phone[50],password[50],phone2[50];
    FILE *fp,*fptr;
	int opt,choice;
    int amount;
	char cont = 'y';
	printf("\nWhat do you want to do?");
	printf("\n\n1.Register your account");
	printf("\n2.Login to your account");

    printf("\n\nPlease enter your choice:\t");
	scanf("%d",&opt);
    if(opt == 1){
		system("clear");
		printf("\nEnter your account number:\t");
		scanf("%s",user.ac);
		printf("Enter your phone number:\t");
		scanf("%s",user.phone);
		printf("Enter your new password:\t");
		scanf("%s",user.password);
		user.balance=0;
		stpcpy(filename,user.phone);
		fp=fopen(strcat(filename,".dat"),"w");
		fwrite(&user,sizeof(user),1,fp);
		if(fwrite != 0){
			printf("Succesfully registered");
		}
	}
    else if(opt == 2){
		system("clear");
		printf("\nPhone No.:\t");
		scanf("%s",phone);
		printf("Password:\t");
		scanf("%s",password);
		fp = fopen(strcat(phone,".dat"),"r");
		if(fp == NULL) printf("Account number not registered");
		else {

}