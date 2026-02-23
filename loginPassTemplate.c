#include <stdio.h>
int checkLogin(char *login, char *passwd);
int checkValidPass(char *ps);

int main() {
	char login[64], password[64];
	printf("Enter login : "); gets(login);
	printf("Enter password : "); gets(password);
	if( checkLogin(login, password) == 1) {
		printf("Welcome\n");
	} else {
		printf("Incorrect login or password\n");
	}
	if (checkValidPass(password)) {
		printf("Accepted\n");
	}
	else{
		printf("Reject\n");
	}
		
}
int checkValidPass(char *ps) {
	int len = strlen(ps);
	int digit = 0,upper = 0;
	int usedUpper[26] = {0};
	int uniqueUpper = 0;
	int i;
	for(i = 0 ;i<len ;i++){
		if(isdigit(ps[i])){
			digit++;
		}
		if(isupper(ps[i])){
			upper++;
			if(!usedUpper[ps[i] - 'A']){
				usedUpper[ps[i] - 'A'] = 1;
				uniqueUpper++;
			}
		}
	}
	if(len == 5 && digit >=1 ){
		return 1;
	}
	if(len >= 5 && len <=8 && !isdigit(ps[0]) && upper >= 2 && digit >= 2){
		return 1;
	}
	if(len >= 5 && len <=8 && uniqueUpper >=2 && digit >=2){
		return 1;
	}
	return 0;
}
int checkLogin(char *login, char *passwd) {
	if( !strcmp(login, "student1") && !strcmp(passwd, "mypass"))
		return 1;
	else
		return 0;
}
