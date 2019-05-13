#include"stdafx.h"
#include"iostream"
using namespace std;
class CTestCopy
{
private:
	int x;
	int y;
public:
	CTestCopy();
	CTestCopy(int a,int b);
	~CTestCopy();
	CTestCopy(CTestCopy&om);
	void display();
};
CTestCopy::CTestCopy()
{
	x = 0;
	y = 0;
	cout << "默认构造函数 x=" << x << " y=" << y << endl;
}
CTestCopy::CTestCopy(int a, int b)
{
	x = a;
	y = b;
	cout << "构造函数 x=" << x << " y=" << y << endl;
}
CTestCopy::CTestCopy(CTestCopy&om)
{
	x = om.x * 2;
	y = om.y * 2;
	cout << "复制构造函数 x=" << x << " y=" << y << endl;
}
CTestCopy::~CTestCopy()
{
	cout << "析构函数 x=" << x << " y=" << y << endl;
}
void CTestCopy::display()
{
	cout << "display x=" << x << " y=" << y << endl;
}
CTestCopy myTest()
{
	CTestCopy om(100, 200);
	om.display();
	return om;
}
int main()
{
	CTestCopy od;
	od.display();
	od = myTest();
	od.display();
	return 0; 
}

