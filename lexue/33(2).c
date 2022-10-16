#include<stdio.h>
int main()
{
	static char s[80], t[80], u[80]; 
    char b;
	int i=0,j=0,k,r,q=0,judg=0;
	while((b=getchar())!='\n'){
         s[i]=b; 
         i++;
	}
	while((b=getchar())!='\n'){ 
        t[j]=b; 
        j++;
	}
	for(k=0;k<i;k++){
		for(r=0;r<j;r++){
			if(s[k]!=t[r]) {
				judg=judg+1;
			}
		}
		if(judg==j){
            u[q]=s[k]; 
            q++;
        }
		judg=0;
	}
	for(i=0;i<q;i++) printf("%c",u[i]); printf("\n");
}