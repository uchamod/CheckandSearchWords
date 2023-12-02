#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

    char password[20];
    printf("Enter the password:");
    gets(password);
    int i=0,upper=0,lower=0,digit=0,symbol=0;

    while(i<strlen(password)){
        if(strlen(password)<8){

            break;
        }if(password[i]>=65 && password[i] <=90){
            upper++;

        }if(password[i]>=97 && password[i] <=122){
            lower++;

        }if(password[i]>=48 && password[i] <=57){
            digit++;

        }else {
            symbol++;

        }
         i++;
        }
       if(upper==0 || lower==0 || digit==0 || symbol==0){
             printf("Weak password. Please make it stronger!");

       }else{

             printf("Strong password");
       }






    return 0;
}
