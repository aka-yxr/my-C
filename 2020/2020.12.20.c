//写一个递归函数，要求输入一个非负整数，返回组成它的数字之和
//#include<stdio.h>
//
//int disnum(unsigned int num)
//{
//	if (num > 9)
//		//1+2+7+9
//		//（1729）%10=9
//		//（172）%10=2
//		//（17）%10=7
//		//（1）
//		return disnum(num / 10) + num % 10;
//	else
//		return num;
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%d", &num);//非负整数 如 1729
//	int ret = disnum(num);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}


//递归，n的k次方
//#include<stdio.h>
//
//double pow(int n, int k)
//{
//	if (k < 0)
//		return (1.0/ pow(n, -k));
//	else if (k == 0)
//		return 1;
//	else
//		return n * pow(n, k - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf_s("%d %d", &n, &k);
//	double ret = pow(n, k);
//	printf("ret = %.4f\n", ret);
//	return 0;
//}


//#include<stdio.h>
//struct stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//};
//int main()
//{
//	//局部变量
//	struct stu s1 = { "张三丰",18,"15237723458","男" };
//	struct stu s2 = { "李四光",19,"18799098070","女" };
//	printf("%s %d %s %s\n", s1.name, s1.age, s1.tele, s1.sex);
//	printf("%s %d %s %s\n", s2.name, s2.age, s2.tele, s2.sex);
//	return 0;
//}


//#include<stdio.h>
//struct stu
//{
//	char name[20];
//	int age;
//	char tele[12];
//	char sex[5];
//};
//void print(struct stu s)
//{
//	printf("name:%s\n", s.name);
//	printf("age:%d\n", s.age);
//	printf("电话:%s\n", s.tele);
//	printf("性别:%s\n", s.sex);
//}
//void print2(struct stu* ps)
//{
//	printf("1.0name:%s\n", ps->name);
//	printf("1.0age:%d\n", ps->age);
//	printf("1.0电话:%s\n", ps->tele);
//	printf("1.0性别:%s\n", ps->sex);
//}
//int main()
//{
//	struct stu s1 = { "张三丰",45,"18888888888","男" };
//	print(s1);
//	print2(&s1);
//	//函数传参的时候，参数是需要压栈的 ，如果传递一个结构体对象的 时候，结构体过大，参数压栈的系统开销比较大，会导致性能的下降。
//    return 0;
//}
//结构体传参的时候，要传结构体的地址 。


//#include<stdio.h>
//
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = 0;
//	ret = add(a, b);//传参的时候是从右向左传，即先传b，在传a。
//	printf("ret = %d\n", ret);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//    int n, i = 0, sum = 0;
//    scanf_s("%d", &n);
//    char a[n][10];//名字如果有8个字母最后还有一个\0，所以应该大一些.
//    int b[n];//数字
//    for (i = 0; i < n; i++)
//    {
//        scanf_s("%s %d", a[i], &b[i]);//在每一行输入 名字和数字
//        sum = sum + b[i];
//    }
//    printf("%d ", sum / n / 2);//平均数的一半
//    int min = b[0];//先让最小值等于第一个数，
//    int k = 0;//k用来记住绝对值最小的那个数的下标
//    for (i = 0; i < n; i++)
//    {
//        if (fabs(b[i] - (sum / n / 2)) < min)//寻找最小绝对值
//        {
//            min = fabs(b[i] - (sum / n / 2));
//            k = i;
//        }
//    }
//    printf("%s\n", a[k]);//打印获胜者
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//    int a[20], b[20], c[20];//定义3个数组，第三个用来存放不重复数
//    int A, B, i, j = 0;
//    scanf_s("%d", &A);//填充a数组
//    for (i = 0; i < A; i++)
//    {
//        scanf_s("%d", &a[i]);
//    }
//    scanf_s("%d", &B);//填充b数组
//    for (i = 0; i < B; i++)
//    {
//        scanf_s("%d", &b[i]);
//    }
//    int k = 0;
//    for (i = 0; i < A; i++)//拿a数组中的数和b数组中的数比较
//    {
//        for (j = 0; j < B; j++)
//        {
//            if (a[i] == b[j])//如果有就换下一个数，
//                break;
//        }
//        if (j >= B)//如果a中某数和b中所有数比较完，正常结束循环说明此数和b中没有重复的数
//        {
//            c[k] = a[i];//把不重复数安排给c数组
//            k++;
//        }
//    }
//    for (i = 0; i < B; i++)//和上面那个一样，不过是拿b数组中的数和a数组中的数比较
//    {
//        for (j = 0; j < A; j++)
//        {
//            if (b[i] == a[j])//如果有就换下一个数，
//                break;
//        }
//        if (j >= A)
//        {
//            c[k] = b[i];//把b中不重复的数安排给c
//            k++;
//        }
//    }
//    //接下来要把c中重复的数过滤掉，并且按先后顺序输出数组c
//    printf("%d", c[0]);//考虑前俩数是不是重复
//    for (i = 1; i < k; i++)//c中有k个数，从1开始，是因为把前俩数相同的结果已经处理了，
//    {
//        for (j = 0; j < i; j++)//从头开始和第i个数比较
//        {
//            if (c[i] == c[j])//如果相等就跳出循环，
//                break;
//        }
//        if (j >= i)//j大于等于i的时候，说明第i个数后面有和她相同的数，并且只打印前面那个数，把后面和她重复的数过滤出去了
//            //如 3 3 5 -15 6 4 6，第一个6的下标是c[5]，第二个六的下标是c[7]，当i等于5的时候，c[5]和c[7]比较，发现相等，判断7大于5.输出的是c[5]；
//            //到i等于7的时候，c[7]会和c[5]再次比较，发现5不大于等于7，所以并不会输出c[7].这样就很神奇的把重复的数字给过滤出去了
//            printf(" %d", c[i]);//空格前置，是为了最后没有空格
//    }
//
//    return 0;
//}
