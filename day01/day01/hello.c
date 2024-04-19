#include <stdio.h>          //#:关键标识符，表示引入头文件； include：引入头文件关键字
#include <Windows.h>        //为Sleep函数服务
							/*
							stdio.h：系统标准输入输出库的对应的头文件，给printf函数服务 
							 <>：使用系统库函数。  ""：用户自定义库
							 */
int main01(void)				//int：函数返回值是整形数据。  main：特殊函数名。程序唯一入口。必须有且只有一次。
							//void：表示函数无需传参
{							//函数体 起始位置
	printf("hello,c\nhello,c");		//输出到屏幕
	printf("hello,c.hello,c");		//输出到屏幕
	//("pause");        //调用system函数，实现系统暂停功能，加了这个之后需要按两次任意键才能退出屏幕
	Sleep(2000);		//系统睡眠2000毫秒，展示清屏效果
	system("cls");
	return 0;    //返回当前函数调用  --退出程序  返回值要和main指定的返回值类型一致（0，int）  返回0代表程序正常结束
}							//函数体  结束位置 
