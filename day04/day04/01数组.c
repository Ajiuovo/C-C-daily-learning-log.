#include <stdio.h>

int main0101(void)
{
	int arr[10] = { 1,3,5,7,9,2,6,4,0,8 };
	printf("arr=%p\n", arr);	//������Ϊ��ַ����������Ԫ�ص�ַ
	printf("&arr[0]=%p\n", &arr[0]);   //ȡ������Ԫ�ص�ַ��
	printf("&arr[1]=%p\n", &arr[1]);
	printf("&arr[2]=%p\n", &arr[2]);
	printf("&arr[3]=%p\n", &arr[3]);
	return 0;
}

int main0102(void)
{
	int arr[10] = { 1,3,5,7,9,2,6,4,0,8 };
	printf("�����С��%d\n", sizeof(arr));
	printf("����Ԫ�ش�С��%d\n", sizeof(arr[0]));
	printf("����Ԫ�ظ�����%d\n", sizeof(arr)/ sizeof(arr[0]));
	return 0;
}

//�����ʼ��
int main0103(void)
{
	int arr[10] = { 1,3,5,7,9,2,6,4};  //δ��ʼ��Ԫ��Ĭ��Ϊ0
	//int arr[] = { 1,3,5,7,9,2};        //ϵͳ�Զ����������С��
	//int arr[10];      //�����ʼ��
	//int arr[10] = { 0 }; //����Ԫ�س�ʼ��Ϊ0
	//int arr[] = { 0 };   //ֻ��һ��Ԫ�أ�Ϊ0
	int n = sizeof(arr); // sizeof(arr[0]);
	for (int i = 0;i < n;i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
	 
}