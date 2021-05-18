#include <stdio.h>
#include <string.h>
void delete_str(char *s,int pos){
	int n=strlen(s);
  	for(int i=pos; i<n; i++)
    s[i]=s[i+1];
	s[n-1]='\0';
}

void process(char *s){
int i;
	for(i=0;i<strlen(s);i++)
		if(s[i]==' '&& s[i+1]==' '){
		delete_str(s,i);
		i--;
}
  	if(s[0]==' ')
	delete_str(s,0);
  	if(s[strlen(s)-1]==' ')
	delete_str(s,strlen(s)-1);
  	int n=strlen(s);
  	for(i=0; i<n; i++){
    	if(s[i]>='a' && s[i]<='z') s[i]=s[i]-32;
  	}
  	printf("%s:%d \n", s, n);
}

int main(){
  	int i, n;
  	char s[100];
  	scanf("%d", &n);
  	getchar();
  	for(i=1; i<=n; i++){
    	fgets(s, sizeof(s), stdin);
    	int n = strlen(s);
    	if(s[n-1]=='\n')
    		s[n-1]='\0';
    	process(s);
  	}
  return 0;
}
