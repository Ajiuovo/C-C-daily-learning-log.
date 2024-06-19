#include <iostream> //标准输入输出流  相当于stdio.h
using namespace std; //使用标准命名空间
#include <cmath>
#include <math.h>		//头文件引用方式也发生了变化
//程序入口函数
int main(void)
{
	// cout 标准输出流对象
	// << 左移（C语言），在C++下有了新的语义，用于在cout后拼接输出的内容
	//endl   ---end line  刷新缓冲区 并且换行
	cout << "hello,world" << endl;
	return EXIT_SUCCESS;
}