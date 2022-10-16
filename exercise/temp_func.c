#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include<time.h>
#include<math.h>

/*记下no返回上一次的值*/
int val(int no)
{
    static int v;
    int temp = v;
    v = no;
    return temp;    
}

/*以实数形式返回平均值*/
double ave_ary(const int a[], int n){
    int i;
    double sum;
    for(i=0;i<n;i++)
        sum+=a[i];
    return sum / n;
}

/*将数组b开头的n个元素复制给数组a*/
void cpy_ary(int a[], const int b[], int n){
    int i;
    for(i=0;i<n;i++)
       a[i] = b[i]; 
}

/*返回二维数组所有元素的和*/
int sum_ary2D(const int a[][3], int n, int m){
    int i, j;
    int sum = 0;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            sum+=a[i][j];
    return sum;
}

/*数组冒泡排序*/
void bsort(int a[], int n){
    int i, j;
    for(i = 0; i < n - 1; i ++){
        for(j = n - 1; j > 0; j--){
            if(a[j - 1] > a[j]){
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
}

/*计算阶乘*/
int factorial(int n){
    if (n > 0)
    {
        return n * factorial(n - 1);
    }
    else
        return 1;
}   

/*求最大公因数*/
int gcd(int x, int y){
    if (x % y == 0)
    {
        return y;
    }
    else
        return gcd(y, x%y);
}

/*三数字排序（指针）*/
void swap(int *px, int *py){
	int temp = *px;
	*px = *py;
	*py = temp;
}

void sort3(int *n1, int *n2, int *n3){
	if (*n1 > *n2)
		swap(n1, n2);
	if (*n1 > *n3)
		swap(n1, n3);
	if (*n2 > *n3)
		swap(n2, n3);
}

/*大数加法函数*/
char * Add(char * x1, char * x2)
{
	char * y = (char *) malloc(sizeof(char *) * 100);         //这里为位数
	int i = 0;
	int t = 0;				//表示进位
 
	//实现大数加法，数组前面存的是数值的高位。如123在数组中是{'3','2','1','\0'}
	//处理相同长度的部分
	while(x1[i] != '\0' && x2[i] != '\0')
	{
		y[i] = (x1[i] - '0' + x2[i] - '0' + t) % 10 + '0';
		t = (x1[i] - '0' + x2[i] - '0' + t) / 10;
		i++;
	}
	//如果x1比x2长
	while(x1[i] != '\0')
	{
		y[i] = (x1[i] - '0' + t) % 10 + '0';
		t = (x1[i] - '0' + t) / 10;
		i++;
	}
	//如果x2比x1长
	while(x2[i] != '\0')
	{
		y[i] = (x2[i] - '0' + t) % 10 + '0';
		t = (x2[i] - '0' + t) / 10;
		i++;
	}
	//如果还有进位
	if (t == 1)
	{
		y[i++] = '1';
	}
	y[i] = '\0';
	return y;
}

/*s_gets函数*/
char * s_gets(char * st, int n){
	char * ret_val;
	int i = 0;
	ret_val = fgets(st, n, stdin);
	if (ret_val) //即ret_val != NULL
	{
		while (st[i] != '\n' && st[i] != '\0')
			i++;
		if (st[i] == '\n')
			st[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}