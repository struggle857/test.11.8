#include<string.h>
#include<windows.h>
#include<stdio.h>
//int main()
//{
	//printf("hello\n");
	//printf("%d\n", sizeof(char));//1
	//printf("%d\n", sizeof(long));

	//return 0;
//}
//int main()
//{
	//����2�����ĺ�
	//int num1 = 0;
	//int num2 = 0;
	//int sum = 0;
	//��������-ʹ�����뺯��
	//scanf("%d%d", &num1, &num2);//ȡ��ַ����&
	//sum=num1+num2;
	//printf("sum=%d\n",sum);
	//return 0;

	//const���εĳ�����
	//const int num = 10;
	//printf("%d/n",num );
	//num = 8;
	//printf("%d/n", num);
	// C2166.cpp
	 //const-������


        //ö�ٳ���
        //ö��--�о�
      
//enum Sex



//{
//	MALE,
//	FEMALE,
//	SECRET,

	//#define MAX 10
	//define����ı�ʶ������



//};
//int main()
//{
//	printf("%d/n", MALE);
//	printf("%d/n", FEMALE);
//	printf("%d/n", SECRET);
//	return 0;
//
//}
//int main()
//{
	//char arr1[] = "abc";
	//char arr2[]= { 'a', 'b', 'c',0 };\0�ַ���������־
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	 //�����ڼ�����洢��ʱ�򣬴洢����2����
	//return 0;
	//ASCII��\0-0,
	//strlen-string length-�����ַ��ĳ���     �Ӷ����Դ�ӡ��printf("%d\n",strlen(arr1));




//}
/*���ܽ���Ƕ��
int main()
{//ת���ַ�
	printf("c:\test\32\test.c");ˮƽ�Ʊ��-\t
	printf("(are you ok \? \?)\n");
	printf("(are you ok \\t)\n");���Ҫǿ����ô��Ҫ��\�����Ų��ᱻת��
	printf("%d\n",strlen("c:\test\32\test.c"));


	
	return 0;
int main ()*/

//ѡ�����
/*int main()
{
	int input = 0;
	printf("������ϿƼ�ѧԺ\n");
	printf("��Ҫ�ú�ѧϰ��\?(1\0)>: ");
	scanf("%d", &input);
	if (input == 1)
	  printf("��offer\n");
	else
	  printf("�ؼ�����\n");
	return 0;

}*/

//ѭ�����whileѭ��
//int main()
//{
//	int line = 0;
//	printf("������ϿƼ�ѧԺ\n");
//
//	while (line < 10000)
//	{
//		printf("��һ�д���:%d\n", line);
//		line++;
//	}
//	if (line >= 10000)
//		printf("һ�ݺ�offer\n");
//	return 0;
//
//} 

//����Add(intx,inty)
//int Add(int x, int y)
//{
//	int z = x+y;
//	return z;
//}
//�Զ��庯��  �⺯��

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	/*printf("%d\n", arr[5]);*/
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	    int a = 5 % 2;
//		printf("%d\n", a);ȡģ
//		return 0;


//int main()
//{
//	//�ƣ�2���ƣ�λ������
//	//<<���Ʋ�����
//	//>>���Ʋ�����
//	int a = 1;
//	int b = a << 2;
//	//b = a + 1;
//	printf("%d/n", b);
//	printf("%d/n", a);
//}
//�����ƣ�1 1 1 1  =1*2^3

/*int main()
{
	int a = 3;
	int b = 5;
	int c = a & b;
	//011
	//101
	printf("%d\n",c);
	return 0;
	//&��λ��   ��ͬ1��ͬΪ0��ͬΪ1
	//^��λ���    ����ͬ����
	//|��λ��   ��1 ��Ϊ1����Ϊ0

}*/


//=��ֵ ==�ж����
//c���������ж����0-��  ��0-��

//int main ()
//{
//
//	//int a = 10;
//	//sizeof����ı���/������ռ�ռ�Ĵ�С����λ���ֽ�
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(int));
//	//ע��int���ã���
//	return 0;
//}



//��֧����ѭ�����
//c������һ�Žṹ���ĳ����������
//1.˳��ṹ
//2.ѡ��ṹ
//3.ѭ���ṹ

//if���1
//else  if���2
//else���3

//int main()

	/*int age = 9;
	if (age < 18)
	{
		printf("δ����\n");
		printf("����̸����\n");
	}
	
	else
	{
		if (age > 18 && age <= 28)
			printf("����\n");

	else if (age >= 28 && age < 50)
	printf("׳��\n");
	else if (age >= 50 && age < 100)
	printf("����\n");
	else
	printf("�ϲ���\n");
	}*/
	
	//else 
	//	printf("����\n");
	///*	if ("age<18");
	//	printf(" δ����\n");*/


	/*int a = 0;
	int b = 2;
	if (a == 0)
		if (b == 2)
			printf("hehe\n");
		else
			printf("haha\n");*/
	//else�������δƥ���ifƥ��    Ҳ����ֱ�Ӹ������ŴӶ�ֱ��ȷ��ƥ��
	/*int num = 4;
	if (num == 5)
	{return (1);  }

	
*/

//=��ֵ ==�ж����
	//��ҵ�г����е���������100����

	/*int i = 1;
	while (i <= 100)
	{
		if (i % 2 != 0)
			printf("%d", i);
		i++;
	}*/
	
	
	/*int i = 1;
	while (i <= 100)
	{
		if (i % 2 != 0)
			printf("%d", i);
		i++;
	}
	return 0;*/



//int main()
//{
     /*int day =0;
	 scanf("%d",&day);
	 if(1 == day)
	     printf("����1\n");
    if(2 == day)
	     printf("����2\n");
    if(3 == day)
	     printf("����3\n");
	if(4 == day)
	     printf("����4\n");
	if(5 == day)
		 printf("����5\n");
    if(6 == day)
	     printf("����6\n");
    if(7 == day)
	     printf("����7\n");
		 return 0;*/
	//��������̫�鷳���Ը���switch���
	/*int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("����1\n");
		break;
	case 2:
		printf("����2\n");
		break;
	case 3:
		printf("����3\n");
		break;
	case 4:
		printf("����4\n");
		break;
	case 5:
		printf("����5\n");
		break;
	case 6:
		printf("����6\n");
		break;
	case 7:
		printf("������\n");
		break;
	}*/
	//switch ��������䡢����break�����������������

	/*int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			printf("������\n");
				break;
			case 6:
			case 7:
			printf("��Ϣ��\n");
				break;
				
	}*/
	
		   //case 7:
		   //printf("��Ϣ��\n");
			 //  break;int day = 0;
	//int m = 1;
   //scanf("%d", &day);
   //switch (day)
   //{
   //case 1:
	 //  if (m == 1)
		//   printf("hehe\n");
		//   case 2:
		//   case 3:
		 //  case 4:
		 //  case 5:
		 //  printf("������\n");
			//   break;
		 //  case 6:
		  // default:
		//	 printf("�������\n");
		//	 break;
   //}


	
	
	
	
//	return 0;

//ѭ�����
//while ѭ�����
	/*int i = 1;

	while(i<=10)
	{
		if (i == 5)
			break;
		printf("%d", i);
		i++;
	}
	return 0;*/
 



//��֧ѭ����䣨2��
	/*int ch = getchar();

	putchar(ch);
	printf("%c\n", ch);
	return 0;*/
	/*int ch = 0;
	while ((ch=getchar() !=EOF)
   {
		putchar(ch);

	}



	return 0;*/ 
	//EOF - end  of file �ļ�������־*�����ļ���
	//int ret = 0;
	//int ch = 0;
	//char password[20] = {0}; 
	//printf("����������:>");
	//scanf("%s", password);//�������룬�������password��
	////��������ʣ��һ��"\n"
	//while ((ch = getchar()) != '\n')
	//{
	//	;
	//}

	//printf("��ȷ��(Y/N):>");
	//ret = getchar();//Y/N
	//if (ret == 'Y')
	//{
	//	printf("ȷ�ϳɹ�\n");

	//}
	//else
	//{
	//	printf("����ȷ��\n");
	//}
	//	
	//	return 0;
	//	//���뺯��password,scanf���뻺����123456\n
 
//int main ()
//{int ch = 0;
//while ((ch = getchar()) != EOF)
//{
//	if (ch < '0' || ch>'9')
//		continue;
//	putchar(ch);
//
//
//}
//return 0;
//	}

//Forѭ��
// int��ʼ�� while����    i++����   �� ���1 ���2  ���3 ��

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d", i);
//	}
//	return 0;
//}


//��ϰ����



//int main()
//{
//	int i = 0;
//    for (i = 0; i < 10; i++)
//{   
//		if (i == 5)
//		printf("hehe\n");
//		//printf("haha\n");
//
//	}
//	return 0;
//}

//for��� ��ѭ���Ŀ��Ʊ�����ȡֵ����"ǰ�պ�����"д��

//int main()����1
//{
//	for (;;);����ѭ��for���
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	{
//		for (i = 0; i < 10; i++)
//		{
//			for (j = 0; j < 10; j++)
//				printf("hehe\n");
//		}
//	}
//	return 0;
//}�Ӷ��ܹ��ﵽһ�ٸ��Ǻ�����i=0ȥ����ô��ֻ�ܵõ�10���Ǻ���Ϊj�ﵽ���Լ��Ķ�����
 
//����2
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0;  i++, k++)k����ֵ��������ѭ�����Ϊ��0��������ѭ��
//		k++;
//		return 0;
//}

//do-whileѭ��
//int main()
//{
//	int i = 1;
//	do {
//		
//		
//		printf("%d", i);
//		i++
//
//	} while (i <= 10);
//		return 0;
//}
// 
// 
// 
// ��ϰ1.
//int main()
//{ 
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//
//	scanf("%d", &n);
//	for(i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret = %d\n",ret);
//	return 0;
//}��for�����n�Ľ׳�


//��ϰ2.
//int main()
//{
//  int y= 0 ;	
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &y);
//	for(n=1;n<=y;n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//
//
//	}
//	printf("sum= %d\n", sum);
//		return 0;
//}��for�����n�Ľ׳˵��ܺ�


//��ϰ3.�۰�����㷨�����ֲ����㷨
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,8,9,10,11 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ�������Ϊint������sizeofֻ��Ҫ��1
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
//	while (left <= right)
//	{
//
//		int mid = (left + right) / 2;
//
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ���,�±��ǣ�%d\n", mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("û���ҵ�\n");
//		}
//	}
//	return 0;
//}


//��ϰ4.
//int main()
//{
//	char arr1[] = "welcome to china!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//���ܼ�1��Ϊ����char a b cΪ���ַ�4-2=2�� 0 1 2������Ҫ2
//	int right = strlen(arr1) - 1;//Ϊ��һ��д��
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s/n", arr2);
//		Sleep(1000);
//		system("cls");//ִ��ϵͳ�����һ������-cls-��պ���
//		left++;
//		right--;
//	}
//	return 0;
//}



//��ϰ5.
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "��ĳ��˧b") == 0)//strcmp�����Ƚ������ַ�����ȶ�==����
//		{
//			printf("����ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//
//		}
//	}
//		if (i == 3)
//			printf("��������������˳�����\n");
//		return 0;
//	}


//�����ֵ�������У���Ҫʹ����ʱ����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b ,&c);//213��Ҫ�ÿո�����������ո��Ĭ�ϳ�һ����
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//
//	}
//	printf("%d %d %d\n", a, b, c);
//		return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//
//	}
//	return 0;
//
//}



//�����Լ��
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int ret = 0;
//	scanf("%d%d", &m, &n);
//	while (m % n==0)
//	{
//		ret = m % n;
//		m = n;
//		n = ret;
//
//
//	}
//	printf("%d\n", n);
//	return 0;
//
//}

//��ӡ����
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for(year=1000;year<=2000;year++)
//	{
//		//�ж������������׼
//		//�ܹ���4����&&�����ң����ܱ�100����
//		//2.�ܹ���400����
//		if (year%4 == 0 && year%100!= 0)
//		{
//			printf("%d\n", year);
//			count++;
//		}
//		else if (year%400 == 0)
//		{
//			printf("%d\n", year);
//			count++;
//		}
//	
//	}
//	printf("\ncount=%3d\n   ", count);
//		return 0;
//}


//����2
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year%4==0&&year%100!=0))||(year%400==0))
//		{
//			printf("%d\n", year);
//			count++;
//		};
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}



//��ӡ��������1.

	//int count = 0;

	//for (i = 100; i <= 200; i++)
	//{
	//	//�ж�i�Ƿ�Ϊ����
	//	//�������жϹ���
	//	//1.�Գ���
	//   //2->i-1
	//	int j = 0;

	//	for (j = 2; j < i; j++)
	//	{
	//		if (i % j == 0)
	//		{
	//			break;

	//		}

	//	}
	//	if (i == j)
	//	{
	//		printf("%d\n", i);
	//		count++;

	//	}
	//	printf("\ncount=%d\n");
	//	
	//}
	//return 0;


//����2.a��b������һ��<=i��ƽ������
//#include<math.h>
//	int main()
//	{
//		int i = 0;
//		int count = 0;
//
//		for (i = 100; i <= 200; i++)
//		{
//			//�ж�i�Ƿ�Ϊ����
//			//�������жϹ���
//			//1.�Գ���
//		   //2->i-1
//			int j = 0;
//
//			for (j = 2; j <= sqrt(i); j++)//sqrt�ǿ⺯����ƽ��
//			{
//				if (i % j == 0)
//				{
//					break;
//
//				}
//
//			}
//			if (j>sqrt(i))
//			{
//				count++;
//				printf("%d\n", i);
//				
//
//			}
//			printf("\ncount=%d\n",count);
//
//		}
//		return 0;
//
//	}


//շת�����cotinue������һ�εĲ���
//������ֶ��ٸ�9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		count++;
//		if (i / 10 == 9)
//		count++;
//
//	}
//	printf("count=%d\n",count);
//	return 0;
//}



//�������
//1/1-1/2+1/3....
//int main()
//{
//	int i = 0;
//    double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//��10�������е����ֵ
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i = 0;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max=arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//
//
//
//	return 0;
//}


//�˷��ھ���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)//��ӡ9��
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d", i, j, i * j);
//
//	}
//		printf("\n");//�ؼ����軻��
//		}
//		
//
//	return 0;
//
//}
//����������д������ϰ


//��������Ϸ
//1.���Ի�����һ�����������
//2.������
//#include <stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("***************************\n");
//	printf("****   1.paly   0.exit ****\n");
//	printf("***************************\n");
//
//}
//
//
//void game()
//{
//	//1.����һ���������
//	int ret = 0;
//	int guess = 0;
//	
//	//����Ҫ���õ�һ���ܹ�����仯������
//	 ret = rand()%100+1;
//	 //printf("%d\n", ret);
//	 //2.������
//	 while (1)
//	 {
//		 printf("���һ������\n");
//		 scanf("%d", &guess);
//		 if (guess > ret) {
//			 printf("�´���\n");
//
//		 }
//		 else if (guess < ret)
//		 {
//			 printf("��С��\n");
//
//		 }
//		 else
//		 {
//			 printf("��ϲ�㣬�¶���\n");
//			 break;
//		 }
//	 }
//
//}
//
//
//
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//����һ����Ϸ����NULL����ָ��Ͷ����0������0ֻ��������ֵ
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		
//		scanf("%d", &input);//&������˼��ָ���ֵҪȡ������ط�
//		switch (input)
//		{
//		case 1:
//			game();//��������Ϸ�Ӷ�ʵ��game����
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//			
//		}
//	} while (input);//do-whileѭ��������ѭ��һ��Ϊ�ﵽĿ�Ļ��߽���
//
//
//	return 0;
//}




//goto  ��������ܹ�60s�ر�cmd
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	//shotdown -s -t 60
//	//system()-ִ��ϵͳ�����
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ��Խ���һ���Ӻ�ػ�������������ȡ���ػ�\n������");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)//----�Ƚ������ַ���-strcmp()
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//
//}
















//����

//int Add(int x, int y)//����û��add��������������Լ�����˺���
//{
//	int z = 0;
//	z = x + y;
//	return z;
//
//
//
//}
//
//
//
//
//int  main()
//{
//	int a = 2;
//	int b = 3;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	char arr1[] = "hello";
//	char arr2[20] = "##########";
//	strcpy(arr2, arr1);//���ص�Ŀ�ĵ�  ��Դ����\0ֱ�ӽ���   Դͷ����û��Ŀ�ĵ���ô��
//	printf("%s\n", arr2);
//	return 0;
//
//}
//strcpy-string copy-�ַ�������
//strlen-string length-�ַ����ĳ����й�
//memset  viod*ָ�� 
//memory-�ڴ�set-����
//cplusplus����
//c ���ԵĹٷ�����cppreference

//int main()
//{
//	char arr[] = "hello word";
//	memset(arr, '*',5);
//	printf("%s\n", arr);
//	return 0;
//
//}



//�Զ��庯��
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//
//}
//
//
//int main()
//{
//	int a = 20;
//	int b = 10;
//	//������ʹ��
//	
//	int max=get_max(a, b);
//	printf("max=%d\n",max);
//		return 0;
//
//
//}


//дһ�������������ε�����
//void swap(int x, int y)//�޷���ֵ
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//	
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int tmp = 0;
//	printf("a=%d,b=%d\n", a, b);
//	swap(a, b);
//	//a = b;
//	//tmp = a;
//	//b = tmp;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//
//}���������������Ҫ������
//int *pa=a;paΪָ���������*pa=20Ϊ�����ò���    
//&ȡ��ַ����

//void swap(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n",a,b);
//	swap(&a, &b);
//	printf("a=%d b=%d\n",a,b);
//	return 0;
//
//}
//��ʵ�δ����β�ʱ���β���ʵ��ʵ�εĿ��������βε��޸��ǲ�Ӱ��ʵ�ε�



//�ж��Ƿ�Ϊ������������Ϊ1������Ϊ2.
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2;j<n;j++)
//	{
//		if (n % j == 0)
//			return 0;
//
//	}
//	return 1;//return 1;������������Ҫ����ѭ������j++
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i)==1)
//			printf("%d\n", i);
//	}
//		return 0;
//}



//дһ�������ж�Ϊ����
//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//	
//		return 1;
//	else
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%5d", year);
//		}
//		
//	}
//	return 0;
//}


//ʵ��������ֲ���
//int binary_search(int arr[],int k,int sz)//������arr��һ��ָ��
//{
//	//�㷨��ʵ��
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)//һ��Ҫ����
//	{
//		int mid = (right + left) / 2;//��仰���ܷ����棬������ֻѭ��һ��
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//	        right = mid - 1;
//
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//
//}
//int main()
//{
//	//��һ�����������в��Ҿ����ĳ����
//	//����ҵ��˷��أ���������±꣬�Ҳ�������-1
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret=binary_search(arr,k,sz);
//	
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}


//дһ��������ÿһ��ʹ���������num�����1.
//void ADD(int* p)
//{
//	(*p)++;
//}
//
//
//
//
//
//int main()
//{
//	int num = 0;
//	ADD(&num);
//	printf("num=%d\n", num);
//	ADD(&num);
//	printf("num=%d\n", num);
//	ADD(&num);
//	printf("num=%d\n", num);
//	return 0;
//}



//������Ƕ�׵��ú���ʽ����
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));printf��ӡ���ַ��ĸ���
//	return 0;
//}
//����������
//����ͼ�еĽ����������Դ�ļ���***.c,��ͷ�ļ���***.h
//1.������������ͷ�ļ�.h��      2.�����Ķ������.c
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = ADD(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//
//}



//�����ĵݹ�
/*int main()
{
	printf("hehe\n");
	main();
		return 0;
}*///stack overflowջ���
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d",n % 10);
//}
//
//
//
//int main()
//{
//	unsigned int num = 0;//����㶨����unsignedֻ��ȡ��ֵ����ȡ��ֵ
//	scanf("%d", &num);
//	print(num);
//	return 0;
//
//}

 
//���ַ��ų���
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//
//	}
//	return count;
//}
//
//
//int main()
//{
//	char arr[] = "haha";
//	int len = my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}
//2.ֻ��ʹ�����б���
//int my_strlen(char* str)
//{
//	if (*str!='\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	    return 0;
//}
//
//
//int main()
//{
//	char arr[] = "haha";
//	int len = my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int y = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &y);
//	for(n=1;n<=y;n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//
//
//	}
//	printf("sum= %d\n", sum);
//		return 0;
//}


//���� ��n�Ľ׳�
//int Fac1(int n)
//{
//
//	int i = 0;
//	int ret = 1;
//
//	for (i=1;i<=n;i++)
//	{
//		ret = i*ret ;
//	}
//	return ret;
//}
//int Fac2(int n)
//{
//	if (n <= 1)
//	{
//		return n = 1;
//
//	}
//	else
//	{
//		return n * Fac2(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);
//	printf("%d\n", ret);
//	return 0;
//
//}Fac2�����õ��ǵݹ�


//쳲�������Fib�����У�ǰ������֮�͵��ڵ�������
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 2) + Fib(n - 1);
//	}
//}Ч�ʲ���1 1 2 3 5 8
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{    
//	int n = 0;
//	int ret = 0; 
//	scanf("%d", &n);
//	ret = Fib(n);
//    printf("ret=%d\n", ret);
//	return 0;
//}


//��ŵ������
//������̨��



//����Ĵ���
//int main()
//{
	//����һ������-�������-10��
	//int arr2[10] = { 1,2,3 };//����ȫ��ʼ����ʣ��Ԫ��Ĭ�ϳ�ʼ��Ϊ0
	//char arr1[5];//strlen���ַ����ĳ���-��\0��֮ǰ���ַ�����
	//1.strlen��sizeofû��ʲô����
	//2.strlen�����ַ������ȵ�-ֻ������ַ����󳤶�-�⺯��-ʹ�õ���ͷ�ļ�
	//3.sizeof�������,����.���͵Ĵ�С-��λֻ�����ֽ�
	/*char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));���ڲ�ȷ��\0���䡱abc����λ�ã����������ֵ
	printf("%d\n", sizeof(arr1));
	printf("%d\n", sizeof(arr2));*/
	

	/*int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%p\n", &arr[i]);%p��ӡ��ַ����
	}
	//һά������������ŵ�
	return 0;
}*/


//int main()
//{
//	//��ά����
//	int arr[3][4] = { { 1,2,3}, { 4,5 }
//	};//��һ��Ϊ�еڶ���Ϊ�У�
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("*arr[%d][%d]=%p%p\n",i,j, &arr[i][j]);//����i����j���о���
//		}
//		printf("\n");
//	}//��ά����Ҳ��������ŵ�
//	return 0;
//}
 


//���һ��ð�ݺ���
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
// int flag = 1;��һ�˼���Ƿ�����
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//              int flag = 0;
//			}
// if(flag==1)
// {
// break;//breakֻ������ѭ����switch��������break����for
// }
//		}
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//��arr����ð�������ų�����
//	int  sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//		return 0;
//
//}


//1.sizeof������������������������Ĵ�Сsizeof�ڲ���һ������������������ʾ��������sizeof��arr��
//2.&��������ȡ����������ĵ�ַ��&����������������ʾ�������顣&arr+1���ӵ�����������1
//����1����2���������֮�⣬���е�����������ʾ������Ԫ�صĵ�ַ��


//#include"game.h"

//void menu()
//{
//	printf("************************\n");
//	printf("*****1.paly  0..exit****\n");
//	printf("************************\n");
//}//
//void game()
//{
//	char ret = 0;
//	//����-����߳���������Ϣ
//	char board[ROW][COL] = { 0 };//ȫ���ո�
//	//��ʼ������
//	InitBoard(board, ROW, COL);
//	//��ӡ����
//	DisplayBoard(board,ROW, COL);
//	//����
//	while (1)
//	{
//		//�������
//		PlayerMove(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		//�ж�����Ƿ���Ӯ
//		ret = IsWin(board,ROW,COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//		//��������
//		ComputerMove(board, ROW, COL);
//		Displayboard(board, ROW, COL);
//		//�жϵ����Ƿ���Ӯ
//		ret = IsWin(board,ROW,COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//		if (ret == '*')
//		{
//			printf("���Ӯ\n");
//		}
//		else if (ret == '#')
//		{
//			printf("����Ӯ\n");
//		}
//		else
//		{
//			printf("ƽ��\n");
//		}
//	}
//		
//			
//}
//void test()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����,������ѡ��!\n");
//			break;
//}
//	} while (input);
//}
//
//int main()
//{
//	test();
//	return 0;
//}
 



//������
//double a=5/2=2.5
//��λ���������ı߶������Ա߲�ԭ����λ
//>>���Ʋ�����
//<<���Ʋ�����
//100000000000000000000000001ԭ��
//111111111111111111111111110����
//111111111111111111111111111���룻�����1
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
//&��λ����ͬ1Ϊ1
//|��λ����1����
//^��λ���


//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	//����������ж��ٵ�һ
//	/*while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num/2;
//}*/
//	//while�����������-1����
//	/*for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & i))
//		{
//			count++;
//		}�ð�λ����ͬ���е�
//	}*/
//	printf("%d\n",count);
//	return 0;
//}


//��ֵ������	
//���ϲ���������дx=10��x=x+100��x+=100Ч������ȵ�
//��Ŀ������
//1.˫Ŀ���������磺a+ b2.��Ŀ���������磡a -5
//ȡ��ַ������&c
//�����ò�����
//int a = 10;
//int* p = &a;
//*p = 20;

//int main()
//{
//	//sizeof���������ռ�ڴ���ռ�ռ��С����λ���ֽ�
//	int a = 10;
//	char c = ' r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(c));//1
//	printf("%d\n", sizeof(*p));//4
//	printf("%d\n", sizeof(arr));//40
//	return 0;
//}


//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//������Ԥ��ֻ���Ƕ�����2���ֽ�
//	printf("%d\n", s);
//	return 0;
//}

//int main()
//{
//	int a = 11;
//	a = a | (1 << 2);
//		printf("%d\n", a);
//	a = a & (~(1 << 2));
//	printf("%d\n", a);
//	//~����2���ƣ�λȡ��
//	//00000000000000000000000000
//	//11111111111111111111111111- ����
//	//11111111111111111111111110- ����
//	//00000000000000000000000001- ԭ��
//	
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	printf("%d\n", ++a);//�൱��++���ֵ��ǰ��++����++����ʹ��
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//ǿ��ת�����ͽ�3.14ת��������
//	return 0;
//}

//�߼����
//int  main()
//{
//	int a = 0;
//	int b = 0;
//	int c = a || b;//����ͬʱΪ�ٲ���Ϊ��
//	printf("%d\n", c);
//	return  0;
//}

//i = a++ && ++b && d++��������Ϊ���򲻽��м�������a++��ʹ��a
//i = a++ || ++b || d++������aΪ���򲻽��м���
//int main()
//{
//	//��Ŀ������
//	int a = 0;
//	int b = 0;
//	if (a > 5)
//		b = 3;
//	else
//	
//		b =-3;
//	b = (a > 5 ? 3: -3);
//	printf("%d\n", b);
//	return 0;
//}

//���ű��ʽ���ö��Ÿ����������ʽ�������
//�±����ò�����
//int main()
//{
//	int a[10] = { 0 };
//	a[4] = 10;�±�
//	1 = 2;
//	return 0;
//}

//�������ò����������ú�����ʱ��ģ������Ǻ������ò�����
// ���ʹ�������
//����һ���ṹ����-struct Stu
//int main()
//{
	//char a = 3;
	////00000000000000000000001
	//char b = 127;
	//
	////8������λ01111111
	//char c = a + b;
	////10000010��c�����һ
	////11111111111111110000010-��������ԭ��
	//printf("%d\n", c);
	//return 0;
//sizeof��c)��һ���ֽڵ���sizeof��+c����c��Ϊ�ƺ����ֽ�sizeof����c��Ϊһ���ֽ�

//}

//����ת��
//������������
//1.�������������ȼ�2.���������н����L����r
//int fun()
//{
//	static int count = 1;
//	count++
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	printf("%d\n", answer);
//	return 0;
//}���⺯��ÿһ�ε��õ�funֵ��ͬ2��3��4��~~~~~~~������

//int main()
//{
	/*printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(double*));*/
	//d�����ĸ��ֽ�

	//int* p;//�ֲ���������ʼ����Ϊ���ֵ
	//*p = 20;
	//������ʱ�������������
	//int a = 10;
	//int* pa = &a;
	//*pa = 10;
	//pa = NULL ;
	//*pa = 20;
	//if(if!=NULL)
	//

	//return 0;
//}

//ָ������
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int *p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *p);
//		p = p + 1;
//	}
//	return 0;
//}

//
//int my_strlen(char*str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	//strlen-���ַ�����
//	//�ݹ�-ģ��ʵ����strlen-�������ķ�ʽ1���ݹ�ķ�ʽ2
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//�������һ��ָ�����һ��֮ǰ��ָ����бȽ�
//1.arr-&������-������������Ԫ�صĵ�ַ-��������ʾ��������-&������ ȡ��������������ĵ�ַ
//2.sizeof��arr����ʱ�˿̵���������ʾ��������sizeof����������������������Ĵ�С
//int main()
//{ 
//	int arr[10] = { 0 };
//	printf("%p\n", arr); // ��ַ - ��Ԫ�ص�
//    printf("%p\n", arr + 1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);//���Ϊ40
//	return 0;
//}



//int main()
//{   
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p====%p\n", p + i, &arr[i]);�������ͨ��ָ��������
//	}
//	return 0;
//
//}


	//int a = 10;
	//int* p = &a;
	//int**ppa = *pa;//�˿�**ppa���Ƕ���ָ��
	//int*** pppa = &ppa;
	
	//return 0;

//ָ������--����- ���ָ�������
//����ָ��-ָ��

//��������--�������
//�ַ�����--����ַ�
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr2[3] = { &a, &b, &c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d", *(arr2[i]));
//	}
//	return 0;
//}

//���ں������ã���������Ƕ�׵��õ��ǲ���Ƕ�׶���
//�������Ӧ�ø��ھ۵���ϣ������ܶ�����
//����������ȫ�ֱ���
//viod���Բ���Ҫ����ֵ��ʵ��main��������λ��
//��ַ���ɵ͵��ߵ�


//Ҫ��ʵ�ֺ���Init������ʼ������ȫΪ0
//ʵ��printf������ӡ�����ÿ��Ԫ��
//ʵ��reverse���������������Ԫ�ص�λ�á�
//void Init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr [left] = arr [right];
//		arr [right] =  tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr, sz);//1.��ʼ��Ϊ0
//	//2.�Ƚ�������reverse
//	Print(arr, sz);//��ӡ,ע�⺯����Сд
//	Reverse(arr, sz);
//	Print(arr, sz);
//	return 0;
//}


//�������齫����A�����ݸ�����B�����ݽ��н����������С��ȣ�
//void Print1(int arr1[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr1[i]);
//	}
//	printf("\n");
//}
//void Print2(int arr2[], int sz)
//{
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%d", arr2[j]);
//	}
//	printf("\n");
//}
//
//
//int main()
//{
//	int arr1[5] = { 1,3,5,7,9 };
//	int arr2[5] = { 2,4,6,8,0 };
//	int tmp[5] = { 0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	Print1(arr1, sz);
//	Print2(arr2, sz);
//	return 0;
//}


//short���������ֽ�
//char *pc��*pcȥ����ʱֻ����һ���ֽ�
//�޷�����sizeof���ܴ��ڵ���-1���޷������ر��10000000000000001

//ͳ�ƶ����Ƶĸ���
#include<stdlib.h>
//�ⷨ1.int count_bit_one(unsigned int n)//Ĭ��Ϊ�޷�����
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//�ⷨ2.int count_bit_one(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> i & 1) == 1)
//			count++;
//	}
//	return count;
//}//��һ��ʱ���ܹ�����ʾ
//�ⷨ3.int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//дһ����a�Ķ����ƣ����룩��ʾ���м���1
//	int count = count_bit_one(a);
//	printf("count=%d\n", count);
//	system("pause");
//	return 0;
//}

//������Ʋ�ͬλ�ĸ���
//���ַ���4
//int count_diff_bit(int n,int m)
//{
//	int count = 0;
//	int tmp = m ^ n;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = count_diff_bit(m,n);
//	printf("count=%d\n", count);
//	return 0;
//}


//��ӡ�����Ƶ�����λ��ż��λ
//void print(int m)
//{
//	int i = 0;
//	printf("����λ:\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (m >> i) & 1);
//
//	}
//	printf("\n");
//	printf("ż��λ:\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", (m >> i) & i);
//
//	}
//	printf("\n");
//}�����ƿ�ʼ��0
//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}


//ʹ��ָ���ӡ��������  дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//int print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", (*p + i));
//	}
//	
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

//�ݹ����Ŀ
//�˷��ھ����Լ�������������
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return;
//}

//ʹ�õݹ齫abcdef��������
//int  my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char arr[])
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//		reverse_string(arr+1);
//		arr[len - 1] = tmp;
//}



//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//дһ���ݹ麯��Digit Sum��n��������һ���Ǹ����������������������֮��
//int DigitSum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return DigitSum(num/10) + (num % 10);
//	}
//	else
//	{
//		return num;
//	}
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1729
//	int ret = DigitSum(num);
//	printf("%d", ret);
//	
//	return 0;
//}


//�ݹ�ʵ��n��k�η�
//double  Pow(int n, int k)
//{
//	if (k < 0)
//		return  (1.0 / (Pow(n, -k)));
//	else if (k == 0)
//		return 1;
//	else
//		return n * Pow(n, k - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double  ret = Pow(n,k);
//	printf("ret=%lf\n", ret);
//	return 0;
//}


//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;//�ṹ�������������Ա
//	char* pc;//��Ӧ����arr  hello bit 
//
//};
//
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe",{100,'w',"hello world",3.14}, arr};//ch��Ӧhehe
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}

typedef struct Stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;

//��������ʱ��Ҫѹջ�ģ��ṹ����󣬲���ѹջ��ϵͳ�����Ƚϴ����Իᵼ�������½���
void print1(Stu tmp)
{
	printf("name;%s\n", tmp.name);
	printf("age;%d\n", tmp.age);
	printf("tele;%s\n", tmp.tele);
	printf("sex;%s\n", tmp.sex);
}
void print2(Stu* ps)
{
	printf("name;%s\n", ps->name);
	printf("age;%d\n", ps->age);
	printf("tele;%s\n", ps->tele);
	printf("sex;%s\n", ps->sex);
}
int main()
{
	Stu s = { "����",40,"18579722284","��" };
		print1(s);
	print2(&s);
	return 0;
}


















































 








