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

}