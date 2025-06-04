//kmp
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
void get_next(char *,int *);
int main(){
	char *str = "abcaabbabcabaacbacba";
	char *ptn = "abcabaa";
	int next[100] = {0};
	int i=0,j=0;
	bool is_found = false;
	
	get_next(ptn,next);
	for(int k=0;k<strlen(ptn);k++){
		printf("%d ",next[k]);
	}
	putchar('\n');
	while(i < strlen(str)){
		if(str[i] == ptn[j]){
			i++;
			j++;
		}else if(j > 0){
			j = next[j - 1];
		}else{
			i++;
		}
		if(j == strlen(ptn)){
			printf("Found at: %d.\n",i - j);
			j = next[j - 1];
			is_found = true;
		}
	}
	if(!is_found){
		printf("Not found...\n");
	}
	
	return 0;
}
void get_next(char *str,int *next){
	int l = strlen(str);
	int prefix_len = 0;
	int i = 1;
	next[0] = 0;
	while(i < l){
		if(str[i] == str[prefix_len]){
			prefix_len++;
			next[i] = prefix_len;
			i++;
		}else if(prefix_len == 0){
			next[i] = 0;
			i++;
		}else{
			prefix_len = next[prefix_len - 1];
		}
	}	
}
