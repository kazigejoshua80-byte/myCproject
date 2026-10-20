#include <stdio.h>
int main() {
     
     char password[50];
     int password_length;
	 printf("Enter password: ");
	 scanf("%s", password);
	 
	 password_length = strlen(password); 


if(password_length < 8)
{
    printf("Weak Password");
}
else
{
    printf("Strong Password");
}
    return 0;
}
