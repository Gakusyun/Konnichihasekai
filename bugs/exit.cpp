#include<iostream>
int main()
{
	int a,b,c,d;
	std::cout<<"a";
	std::cin>>a;
	if(a<=2)
		return 0;
	else
		b=3;
	c=2;
	while(1)
	{
		d=b%c;
		if(d==0)
			if(a==c)
			{
				std::cout<<b<<std::endl;
				b++;
				c=2;
			}
			else std::cout<<" "<<std::endl;
		else
		{
			if(c>=10)
			{
				std::cout<<b<<std::endl;
				b++;
				c=2;
			}
			else
				c++;
		}
		if(b>=a)
			break;
		c++;
	}
	return 0;
}
