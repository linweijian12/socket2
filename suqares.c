#include<stdio.h>
#include<stdlib.h>
void jisuan()
{
    printf("\n[指数计算器]\n");
    float di=1.0;//di是底数，可以为浮点数
    float s2;//s是指数，只能是，规定为浮点数为了验证它是否为整数
    int s;
    float ans=1;//结果
    int stemp=0;//存储指数，将原来的指数取绝对值
    printf("输入底数：\n");//输入底数
    scanf("%f",&di);
    printf("请输入%g的指数(只能是整数):\n",di);//输入指数
    scanf("%f",&s2);
    if(s2-(int)s2!=0)//判断指数是否是整数
    {
        printf("本程序指数只能是整数，不能是小数\n");
        system("pause");
        goto label;
    }
    else{s=(int)s2;}
    stemp=s;
    s=abs(s);
    printf("计算结果：\n");
    for(int i=0;i!=s;++i)
    {
        ans=ans*di;
    }
    if(stemp>=0){printf("%g^%d=%g\n",di,stemp,ans);}
    else
    {
        double ans2=1.0/ans;
        printf("%g^(%d)=1/%g\n",di,stemp,ans);
        printf("1/%g=%g\n(最多保留小数点后六位)\n",ans,ans2);
    }
    label:
    ;
}

int main()
{
    while(1)
    {
        char j='y';
        jisuan();
        printf("是否继续？继续输入y,退出输入n\n");
        getchar();
        scanf("%c",&j);
        if(j=='n'||j=='N')
        {
            return 0;
        }

    }    
}
