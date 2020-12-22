//PTA天梯赛5分题
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int n;
//    scanf_s("%d", &n);
//    int num = pow(2, n);
//    printf("2^%d = %d\n", n, num);
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//    int a, b;
//    scanf_s("%d %d", &a, &b);
//    printf("%d", a * b);
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//    int f;
//    scanf_s("%d", &f);
//    printf("Celsius = %d", 5 * (f - 32) / 9);
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//    int d;
//    scanf_s("%d", &d);
//    if (d <= 5)
//        printf("%d\n", d + 2);
//    else if (d > 5)
//        printf("%d\n", d - 5);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    printf("I\n");
//    printf(" \n");
//    printf("L\n");
//    printf("o\n");
//    printf("v\n");
//    printf("e\n");
//    printf(" \n");
//    printf("G\n");
//    printf("P\n");
//    printf("L\n");
//    printf("T\n");
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int m;
//    scanf_s("%d", &m);
//    double num = (m - 100) * 0.9 * 2;
//    printf("%.1f\n", num);
//    return 0;
//}


//#include<stdio.h>
//struct time {
//    int hh;
//    int mm;
//    int ss;
//};
//int main()
//{
//    //常规方法
//   /* int h,m,s,n;
//    scanf("%d:%d:%d",&h,&m,&s);
//    scanf("%d",&n);
//    h=(h*3600+m*60+s+n)/3600%24;
//    m=(h*3600+m*60+s+n)/60%60;
//    s=(h*3600+m*60+s+n)%3600%60;
//    printf("%02d:%02d:%02d",h,m,s);
//    */
//    //使用结构体
//
//    struct time x;
//    scanf_s("%d:%d:%d", &x.hh, &x.mm, &x.ss);
//    int n;
//    scanf("%d", &n);
//    x.hh = (x.hh * 3600 + x.mm * 60 + x.ss + n) / 3600 % 24;
//    x.mm = (x.hh * 3600 + x.mm * 60 + x.ss + n) / 60 % 60;
//    x.ss = (x.hh * 3600 + x.mm * 60 + x.ss + n) % 3600 % 60;
//    printf("%02d:%02d:%02d", x.hh, x.mm, x.ss);
//    return 0;
//}


//#include<stdio.h>
//struct BOOK {
//    char name[31];
//    double price;
//};
//int main()
//{
//    int n, i = 0;
//    scanf_s("%d", &n);
//    struct BOOK book[n];
//    for (i = 0; i < n; i++)
//    {
//        getchar();//输入一行后会跟一个\n，这里getchar的作用就是清除\n。
//        gets(book[i].name);
//        scanf_s("%lf", &book[i].price);
//    }
//    int k = 0, j = 0;
//    double max, min;
//    max = min = book[0].price;
//    for (i = 0; i < n; i++)
//    {
//        if (max < book[i].price)
//        {
//            max = book[i].price;
//            k = i;
//        }
//        if (min > book[i].price)
//        {
//            min = book[i].price;
//            j = i;
//        }
//    }
//    printf("%.2f, %s\n", book[k].price, book[k].name);
//    printf("%.2f, %s\n", book[j].price, book[j].name);
//    return 0;
//}


//#include <stdio.h>
//#define MAXN 10
//
//struct student {
//    int num;
//    char name[20];
//    int score;
//    char grade;
//};
//
//int set_grade(struct student* p, int n);
//
//int main()
//{
//    struct student stu[MAXN], * ptr;
//    int n, i, count;
//
//    ptr = stu;
//    scanf_s("%d\n", &n);
//    for (i = 0; i < n; i++) {
//        scanf_s("%d%s%d", &stu[i].num, stu[i].name, &stu[i].score);
//    }
//    count = set_grade(ptr, n);
//    printf("The count for failed (<60): %d\n", count);
//    printf("The grades:\n");
//    for (i = 0; i < n; i++)
//        printf("%d %s %c\n", stu[i].num, stu[i].name, stu[i].grade);
//    return 0;
//}
//int set_grade(struct student* p, int n)
//{
//    int count = 0, i = 0;//count来统计不及格人数
//    for (i = 0; i < n; i++, p++)
//    {
//        if (p->score >= 85 && p->score <= 100)
//            p->grade = 'A';
//        else if (p->score >= 70 && p->score < 85)
//            p->grade = 'B';
//        else if (p->score >= 60 && p->score < 70)
//            p->grade = 'C';
//        else if (p->score >= 0 && p->score < 60)
//        {
//            p->grade = 'D';
//            count++;
//        }
//    }
//    return count;
//}
