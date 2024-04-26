#include "../inc/store_manager.h"

int main(){
	int i;
	while (i > 10 || i < 0)
		scanf("%i", &i);
	switch (i){
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			exit_message("Program terminated by your command!\nGoodbye!");
			break;
		default:
			break;
	}
	return 0;
}