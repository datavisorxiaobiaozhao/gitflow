#include <stdio.h>


void v1_paypal_func2() {
	printf("v1_paypal_func1\n");
	printf("v1_paypal_func1\n");
}

void v1_func1() {
	printf("v1_func1\n");
	printf("after v1_func1\n");
	printf("fix bug v1\n");
}

void v1_from_v2_datavis_demo() {
	printf("v1_from_v2_datavis_demo\n");
}

void master_func() {
	printf("master_func\n");
}

void v2_from_xiaobiao_pr() {
	printf("v2_from_xiaobiao_pr\n");
}

int main() {
    printf("Hello, World!\n");
    v2_from_xiaobiao_pr();
    return 0;
}