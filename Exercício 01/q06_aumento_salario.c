// Leia o sal�rio de um trabalhador e escreva seu novo sal�rio com um aumento de 25%.

#include <stdio.h>

int main() {
	float salary, new_salary, raise;
	printf("Salary: ");	
	scanf("%f", &salary);
	
	raise = 0.25;
	new_salary = salary + (salary * raise);
	
	printf("New salary: %f", new_salary);
	
	return 0;
}
