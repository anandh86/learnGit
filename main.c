//Test1
//Test 2
//Test 3
int functional1(long a, long b)
{
	return 0;
}
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

int functional2(long a, long b)
{
	return 0;
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

//another feature
int feature5()
{
	if(k == 1)
		return 1;
	return 0;
}

//parallel development
int feature6()
{
	return 0;
}
