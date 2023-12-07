//Descreva o que ocorre nas linhas indicadas por //


	int a=3, b=4;
	int *c = &a;//
	int *d, *f;//
	++b;
	d = &b;//
	*c = *c + 1;//
	*c/= 2;//
	f = c;
	c = d;
	*c = a+2;//
	d = f;//
	printf("%d %d %p", *c, *d, &a);//
