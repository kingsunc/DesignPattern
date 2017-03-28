//#pragma once
//#include <iostream>
//using namespace std;
//
////路的基类;
//class Road
//{
//	Road(){};
//	virtual ~Road(){};
//
//	virtual void Run()
//	{
//		cout << "在路上" << endl;
//	}
//};
//
////高速公路;
//class SpeedWay: public Road
//{
//	virtual void Run()
//	{
//		cout << "高速公路" << endl;
//	}
//};
//
////市区街道;
//class Street: public Road
//{
//	virtual void Run()
//	{
//		cout << "市区街道" << endl;
//	}
//};
//
////小汽车在高速公路上行驶;
//class CarOnSpeedWay: public SpeedWay
//{
//	virtual void Run()
//	{
//		cout << "小汽车在高速公路上行驶" << endl;
//	}
//};
//
////公共汽车在高速公路上行驶;
//class BusOnSpeedWay: public SpeedWay
//{
//	virtual void Run()
//	{
//		cout << "公共汽车在高速公路上行驶" << endl;
//	}
//};
//
////小汽车在市区街道上行驶;
//class CarOnStreet: public Street
//{
//	virtual void Run()
//	{
//		cout << "汽车在街道上行驶" << endl;
//	}
//}
//
////公共汽车在市区街道上行驶;
//class BusOnStreet: public Street
//{
//	virtual void Run()
//	{
//		cout << "公共汽车在街道上行驶" << endl;
//	}
//}
//
//void main()
//{
//	//小汽车在高速公路上行驶
//	Road pRoad = new CarOnSpeedWay();
//	pRoad->Run();
//	delete pRoad;
//	pRoad = NULL;
//
//	//公共汽车在街道上行驶
//	pRoad = new BusOnStreet();
//	pRoad->Run();
//	delete pRoad;
//	pRoad = NULL;
//}


/*-------------------------------------------------------------------------------------------------------------------------------------------------------
缺点;
但是我们说这样的设计是脆弱的，仔细分析就可以发现，它还是存在很多问题;
首先它在遵循开放-封闭原则的同时，违背了类的单一职责原则，即一个类只有一个引起它变化的原因，而这里引起变化的原因却有两个，即路类型的变化和汽车类型的变化.;
其次是重复代码会很多，不同的汽车在不同的路上行驶也会有一部分的代码是相同的；再次是类的结构过于复杂，继承关系太多，难于维护，最后最致命的一点是扩展性太差.;
如果变化沿着汽车的类型和不同的道路两个方向变化，我们会看到这个类的结构会迅速的变庞大。;
-------------------------------------------------------------------------------------------------------------------------------------------------------*/
