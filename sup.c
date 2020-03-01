void func()
{
	call some function
}

void func1()
{
	int j;
}

void new_func_1()
{
	//something new
}

int feature_func2()
{
	if(k is null)
		return 0;
	switch(k)
	{
		case 1:
		//do nothing;
		break;
		case 2:
		//do something;
		break;
		default:
		//do nothing;
		break;
	}
}

int feature_func1()
{
	if(k is null)
		return 0;
	switch(k)
	{
		case 1:
		//do nothing;
		break;
		case 2:
		//do something;
		break;
		default:
		//do nothing;
		break;
	}
}

void new_func_2()
{
	//something new
}

void main_func1()
{
	new_func_2();
	if(k==0)
		return;
	else
		k = 1;	
}

void main_func2()
{
	new_func_2();
	if(k==0)
		return;
	else
		k = 1;	
}

void new_func_2()
{
	//incorrect implementation
	switch(k)
	{
		case 1:
		//do nothing;
		break;
		case 2:
		//do something;
		break;
		default:
		//do nothing;
		break;
	}
}