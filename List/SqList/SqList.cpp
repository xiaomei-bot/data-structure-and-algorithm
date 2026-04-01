#include<iostream>//cout,cin
using namespace std;
#include "SqList.h"

char pause;


void dispmenu()
{
	cout<<"***  顺 序 表   ***\n";
	cout<<" 1-初始化顺序表\n";
	cout<<" 2-创建顺序表\n";
	cout<<" 3-获取第i个元素\n";
	cout<<" 4-按值查找元素位序\n";
	cout<<" 5-插入第i个元素\n";
	cout<<" 6-删除第i个元素\n";
	cout<<" 7-修改第i个元素\n";
	cout<<" 8-清空表\n";
	cout<<" 9-测表长\n";
	cout<<" 10-测表空\n";
	cout<<" 11-测表满\n";
	cout<<" 12-显示表\n";
	cout << "13-求交集\n";
	cout << "14-求并集\n";
	cout<<" 0-退出\n";
}

 //主函数
int main()
{
	int i;
	int e;
	SqList<int> L;
	SqList<int> L1;
	SqList<int> L2;
	system("cls");										//执行系统命令cls，清屏
    
	int choice;
    do
	{
		dispmenu();										//显示主菜单
		cout<<"Enter choice(1~14，0 退出):";
		cin>>choice;
		switch(choice)
		{
			case 1:										//初始化线性表 
				cout<<"请输入要创建的顺序表的长度：";
				cin>>i;
				cout<<endl;
				InitList(L,i);
				cout<<endl<<"创建成功！"<<endl;
				break;
		     case 2:									//创建线性表 
				cout<<"请输入要创建的元素个数:";
				cin>>i;
				cout<<endl;
				CreateList(L,i);
				cout<<"创建的顺序表元素为：\n";       //显示表元素
				DispList(L);
				cout<<endl;
				break;
			case 3:										//获取第i个元素
				cout<<"请输入元素序号:";
				cin>>i;
				cout<<endl;
				if (GetElem_i(L,i, e))
					cout<<endl<<"第"<<i<<"个元素为:"<<e<<endl;
				else
					cout<<endl<<"元素不存在！"<<endl;
				break;	
			 case 4:									//按值查找
                 cout<<"请输入要查询的元素值:";
				 cin>>e;
				 i=LocateElem_e(L, e);
				 if(i)
					 cout<<endl<<e<<"是第"<<i<<"个数据元素"<<endl;
				 else
					 cout<<endl<<"不存在此元素！"<<endl;
				 break;
			 case 5:									// 在第i个位置插入元素
				 cout<<"输入插入位置："<<endl;
				 cin>>i;
				 cout<<"输入插入元素值："<<endl;
                 cin>>e;
				 if(InsertElem_i(L,i,e)) 
				 {
					 cout<<endl<<"插入成功！"<<endl;
					 DispList(L);
				 }
				 else
					 cout<<endl<<"插入不成功！"<<endl;;
				 break;
			 case 6:									//删除第i个元素
				 cout<<"输入删除元素位置："<<endl;
				 cin>>i;
				 if(DeleElem_i(L,i))
				 {
					 cout<<endl<<"删除成功！"<<endl;
					 DispList(L);
				 }
				 else
					 cout<<endl<<"删除失败！"<<endl;
				 break;
			 case 7:									//修改第i个元素的值
				 cout<<"输入修改元素位置："<<endl;
				 cin>>i;
				 cout<<"输入新元素值："<<endl;
                 cin>>e;
				 if(PutElem(L,i,  e))
				 {
					 cout<<endl<<"修改成功！"<<endl;
					 DispList(L);
				 }
				 else
                     cout<<endl<<"修改失败！"<<endl;
				 break;  
			 case 8:									// 清空表
				 ClearList(L);
				 break;
             case 9:									// 测表长
				 cout<<"表长为："<<ListLength(L)<<endl;
				 break;
			 case 10:									//测表空
				 if(ListEmpty(L))
					 cout<<endl<<"空表！"<<endl;
				 else
					 cout<<endl<<"不是空表！"<<endl;
				 break;
			case 11:									// 未表满
				if(ListFull(L))
					 cout<<endl<<"表满！"<<endl;
				 else
					 cout<<endl<<"表不满！"<<endl;
				 break;
			case 12:									//遍历显示表
				DispList(L);
				cout<<endl;
				cin.get(pause);
				system("pause");
				break;
			case 13:
				cout << "请输入要创建的顺序表L1的长度：";
				cin >> i;
				cout << endl;
				InitList(L1, i);
				cout << endl << "创建成功！" << endl;
				cout << "请输入要创建的顺序表L2的长度：";
				cin >> i;
				cout << endl;
				InitList(L2, i);
				cout << endl << "创建成功！" << endl;
				cout << "请输入要创建L1的元素个数:";
				cin >> i;
				cout << endl;
				CreateList(L1, i);
				cout << "创建的顺序表L1元素为：\n";       //显示表元素
				DispList(L1);
				cout << endl;
				cout << "请输入要创建L2的元素个数:";
				cin >> i;
				cout << endl;
				CreateList(L2, i);
				cout << "创建的顺序表L2元素为：\n";       //显示表元素
				DispList(L2);
				cout << endl;
				AjiaoB(L1, L2);
				break;
			case 14:
				cout << "请输入要创建的顺序表L1的长度：";
				cin >> i;
				cout << endl;
				InitList(L1, i);
				cout << endl << "创建成功！" << endl;
				cout << "请输入要创建的顺序表L2的长度：";
				cin >> i;
				cout << endl;
				InitList(L2, i);
				cout << endl << "创建成功！" << endl;
				cout << "请输入要创建L1的元素个数:";
				cin >> i;
				cout << endl;
				CreateList(L1, i);
				cout << "创建的顺序表L1元素为：\n";       //显示表元素
				DispList(L1);
				cout << endl;
				cout << "请输入要创建L2的元素个数:";
				cin >> i;
				cout << endl;
				CreateList(L2, i);
				cout << "创建的顺序表L2元素为：\n";       //显示表元素
				DispList(L2);
				cout << endl;
				AbingB(L1, L2);
				break;
			case 0:  //退出
                DestroyList(L);
				cout<<"结束运行bye-bye!"<<endl;
                break;
			default:									//无效选择
				cout<<"无效选择!\n";
				break;
			}
	}while(choice!=0);
    
	return 1;
}//end of main function

