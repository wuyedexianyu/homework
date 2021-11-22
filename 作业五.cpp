//输入一个字符串，形如
//3072x1728,2720x1536,2560x1600,2560x1440,2304x1728,2048x1536,1920x1200,1920x1080,1440x900,1280x800,1280x720,1024x768,1024x640,800x600,800x500,800x450,640x480,640x400,640x360,480x360,480x300,480x270,320x240,320x200,320x180,240x180,176x144,160x120,160x100,160x90
//这是一个显示器支持的分辨率清单，中间逗号分隔。
//现在输入画面的宽和高，然后在上述清单中挑选一个最接近的分辨率输出
//比如输入2000，1000，输出的分辨率应该是1920x1080，因为其它分辨率的误差更大。
//完成如下程序
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
	printf("选中的分辨率是%dx%d\n", resolution[m].width, resolution[m].height);
    return 0;
}
