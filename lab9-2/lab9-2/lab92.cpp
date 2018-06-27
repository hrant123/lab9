#include "stdafx.h"
#include "string.h"
#include <stdio.h>
#include <cstring>
#include <iostream>
void Del();
void Undel();
void Remove();
void Save();
int main()
{
	void(*func_ptr_arr[4])() = { Del,Undel,Remove,Save };

	char func_name_arr[4][100] = { "Del", "Undel", "Remove", "Save" };
	char message[100];
	int i;
	while (1) {
		std::cin >> message;
		for (i = 0; i < 4; i++)
			if (strcmp(message, func_name_arr[i])==0) {
				(*func_ptr_arr[i])();
				break;
			}
		if (strcmp(message, func_name_arr[i]) != 0)
			std::cout << "invalid function name, try again!\n";
		else break;
	}


	std::system("pause");
    return 0;
}
void Del() {
	printf("del function\n");
}
void Undel() {
	printf("undel function\n");
}
void Remove() {
	printf("remove function\n");
}
void Save() {
	printf("save function\n");
}

