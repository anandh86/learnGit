long int mult(int a, int b)
{
	return (a*b);
}

int divide(int a, int b)
{
	if(b !=0)
		return a/b;
	else
		return 0; //cannot divide by zero
}

int add(int a, int b)
{
	//bug fix
	if( a==0 && b==0)
		return 0;
	return a+b;
}

int sub(int a, int b)
{
	return a-b;
}

//added new feature
int specialFunc()
{
	//bug fix
	if(k == 1)
		return 1;
	return 0;
}