#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct user {
    char phone[50];
    char ac[50];
    char password[50];
    float balance;
};
int main(){
    struct user usr,usr1;
    FILE *fp;
    char filename[50],phone[50],pword[50];
    int opt,choice;
    char cont = 'y';
    float amount;

  