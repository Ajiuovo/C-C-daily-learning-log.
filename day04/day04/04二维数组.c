#include <stdio.h>
int main04(void)
{
	int arr[2][3] = { {2,3,5},{22,17,10} };
	

	/*
	* ����ȫ��ʼ��
	* int arr[2][3] = { {2,3}};    //����Ԫ��Ϊ0
	* int arr[2][3] = {0};		//����Ԫ��Ϊ0
	* int arr[2][3] = { 2,3,5,22,17,10};	//�Զ�����
	* int arr[][] = { 2,3,5,22,17,10};		//���У��ᱨ������ָ����ֵ
	*/

	//�������С
	int len = sizeof(arr);
	printf("%d\n", len);
	//��һ�д�С,
	int x = sizeof(arr[0]);
	printf("%d\n", x);
	//����ĳ��Ԫ�ش�С
	int n = sizeof(arr[0][0]);
	printf("%d\n", n);
	//������
	int xs = len/sizeof(arr[0]);
	printf("%d\n", xs);
	//������
	int ys = x / n;
	printf("%d\n", ys);

	//��ַ��һ
	printf("%p\n", &arr[0]);
	printf("%p\n", arr[0]);
	printf("%p\n", &arr[0][0]);
	printf("%p\n", arr);

	for (int i = 0;i < 2;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

