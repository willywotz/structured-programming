int main() {
	int number, temp;

	scanf("%d", &number);
	if (number > 10) {
		printf("Number %d is over than 10\n", number);
		temp = number;
		number = number - 5;
		printf("%d - 5 = %d\n", temp, number);
	} else {
		printf("Number %d is not over than 10\n", number);
		number = number + 5;
		temp = number;
		printf("%d + 5 = %d\n", temp, number);
	}
}

int main() {
	float h1, h2, hm;

	printf("Enter first student's height (cm) : ");
	scanf("%f", &h1);

	printf("Enter second student's height (cm) : ");
	scanf("%f", &h2);

	hm = h1 > h2 ? h1 : h2;
	printf("Maximum height is : %.2f cm\n", hm);
}

int main() {
	int number;

	printf("Enter number : ");
	scanf("%d", &number);

	if (number < 20 || number > 60) {
		printf(
			"Number %d is out of range\n", number);
	}
}

int main() {
	char sex, *ret = "";
	float height;

	printf("Enter sex ");
	printf("(M as male, F as female) : ");
	scanf("%s", &sex);

	printf("Enter height in cm : ");
	scanf("%f", &height);

	if (sex == 'M' && height >= 180.0) {
		ret = "Basketball";
	}

	if (sex == 'F' && height >= 170.0) {
		ret = "Volleyball";
	}

	if (ret != NULL && ret[0] != '\0') {
		printf("%s\n", ret);
	}
}
