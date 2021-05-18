#include <stdio.h>
int main(){
int i, S=0;
for(i=0;i <10; i++){
if(i%3) S+=i;
else i+=3;
}
printf("%d",S);
}
