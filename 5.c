#include <stdio.h>
#include <string.h>

int main(){
	int num;
	scanf("%d ",&num);

	char kwords[100];
	fgets(kwords,100,stdin);

	char *ptr = strtok(kwords," ");
	char *arr[num];

	int marks[num];
	int i =0;
	for (i = 0; i < num;i++){
		scanf("%d ", &marks[i]);
	}

	char ans[500];
	fgets(ans,500,stdin);

	i = 0;
	while(ptr != NULL){
		arr[i++] = ptr;
		ptr = strtok(NULL," ");
	}
	int tot = 0;
	char w[30];
	for(i = 0; i < num ; i++){	
		if(strstr(ans,arr[i]) != NULL){
			tot = tot + marks[i];
		}
	}
	printf("%d",tot);
	return 0;
}