//����һ���ַ���������
//3072x1728,2720x1536,2560x1600,2560x1440,2304x1728,2048x1536,1920x1200,1920x1080,1440x900,1280x800,1280x720,1024x768,1024x640,800x600,800x500,800x450,640x480,640x400,640x360,480x360,480x300,480x270,320x240,320x200,320x180,240x180,176x144,160x120,160x100,160x90
//����һ����ʾ��֧�ֵķֱ����嵥���м䶺�ŷָ���
//�������뻭��Ŀ�͸ߣ�Ȼ���������嵥����ѡһ����ӽ��ķֱ������
//��������2000��1000������ķֱ���Ӧ����1920x1080����Ϊ�����ֱ��ʵ�������
//������³���
// 2021-11-14
#include <math.h>
#include <stdio.h>
struct
{
	int width;
	int height;
}resolution[999];
int main()
{
    char ress[2048], *p;
    int x, y, n = 0, i, m, a, b, num, diff[999], min;
    scanf("%s", &ress);
    scanf("%d,%d", &x, &y);
    p = ress;
    while (*p != '\0')
    {
    	num = 0;
    	while (*p != 'x' && *p != ',')
    	{
    		num *= 10;
    		num += (int)*p - 48;
    		p++;
		}
		if (*p == 'x')
		{
			resolution[n].width = num;
			p++;
		}
		if (*p == ',')
		{
			resolution[n].height = num;
			p++;
			n++;
		}
	}
	for (i = 0; i < n; i++)
	{
		diff[i] = fabs(x - resolution[i].width) + fabs(y - resolution[i].height);
	}
	min = diff[0];
	m = 0;
	for (i = 1; i < n; i++)
	{
		if (diff[i] < min)
		{
			min = diff[i];
			m = i;
		}
	}
	printf("ѡ�еķֱ�����%dx%d\n", resolution[m].width, resolution[m].height);
    return 0;
}
