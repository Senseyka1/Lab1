#include <stdio.h>
#include <locale.h>


    int main() {

	setlocale (LC_CTYPE, "ua");

	int ceas, min, sec;
	int n, m = 60, h = 3600 , s = 60;
	printf("��� ��������: ");
	scanf("%d",&n);
	
	ceas = n / h;
	min =  (n - h) / m;
	sec =  n - h - m;

	printf("������ = %d \n������� = %d \n������� = %d \n",ceas, min, sec );

	return 0;
}
