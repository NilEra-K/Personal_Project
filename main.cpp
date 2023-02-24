/*EasyX 图形库使用*/
#include <iostream>
#include <graphics.h>
/*mmsystem.h 播放音乐可用的头文件*/
#include <mmsystem.h>
/*加载 winmm.lib 库文件*/
#pragma comment (lib, "winmm.lib")

using namespace std;

void learnDrawCircle() {
	// 初始化图像界面 640*480
	initgraph(640, 480);

	// 构建需要的图形
	// circle(int x, int y, int radis);
	// x: x坐标
	// y: y坐标
	// radis: 圆的半径
	circle(200, 100, 50);

	system("pause");
	// 关闭图形界面
	closegraph();
}

void learnMoreGraph() {
	initgraph(640, 480);

	// 设置背景颜色
	// setbkcolor(COLORREF color);
	// color: 设置背景颜色, 包含格式等
	// cleardevice();
	// cleardevice(): 模拟画图中油漆桶的动作, 喷涂整个画布
	setbkcolor(RGB(64, 128, 128));
	cleardevice();

	// 设置画笔颜色
	// setlinecolor(COLORREF color);
	setlinecolor(RGB(255, 0, 0));

	// 设置画笔样式
	// setlinestyle(pramas);
	// PS_SOLID: 实线
	// 10: 画笔的宽度
	setlinestyle(PS_SOLID, 10);
	circle(320, 240, 200);

	// 设置字体颜色
	// 这里 2022版本的函数和 2018版本的有一些区别
	// 需要查询官方文档来确定具体用法
	settextcolor(RGB(255, 255, 0));
	settextstyle(100, 0, _T("微软雅黑"));
	outtextxy(170, 190, _T("高清无码"));

	// 画线
	line(180, 380, 460, 100);
	system("pause");
	closegraph();
}

void displayMusic() {
	initgraph(899, 500);
	loadimage(0, _T("hackerBackground.jpg"));

	// 重复播放 xxx.mp3
	mciSendString(_T("play 黑夜问白天.mp3 repeat"), 0, 0, 0);
}

void displayVideo() {
	// 视频播放原理, 实现多帧图片依次播放

	// 定义文件名
	char fileName[128];
	initgraph(480, 360);
	while (1) {
		for (int i = 1; i <= 2023; i++) {
			// 注意: sprintf(fileName, filePathTemplate, value); 函数当前已经被定义为不安全的函数
			// 使用时可以使用 sprintf_s(fileName, filePathTemplate, value); 进行代替
			// 注意: loadimage(0, imagePath); 函数需要传入固定的 image路径, 在 VS 中需要使用多字符字符集来实现本地化
			// 另一个解决方案为编写函数进行转化, 在此不做实现
			sprintf_s(fileName, "C:/Users/NilEra/Documents/Data/Code/CProject1/CGuiProject1/Viedo2Image/%d.jpg", i);
			loadimage(0, _T(fileName));
			Sleep(25);
		}
	}
	loadimage(0, _T("C:/Users/NilEra/Documents/Data/Code/CProject1/CGuiProject1/Viedo2Image/1.jpg"));
	system("pause");
	closegraph();
}

int main() {
	// learnDrawCircle();
	// learnMoreGraph();
	// displayMusic();
	// displayVideo();
	initgraph(899, 500);
	loadimage(0, _T("hackerBackground.jpg"));

	// 绘制空心矩形
	rectangle(40, 355, 240, 375);
	rectangle(250, 355, 450, 375);
	rectangle(460, 355, 660, 375);
	rectangle(670, 355, 870, 375);
	rectangle(420, 385, 655, 405);
	rectangle(665, 385, 800, 405);

	// 设置文字样式
	settextstyle(18, 0, _T("Consolas"));
	
	// 在矩形中插入文字
	outtextxy(45, 356, _T("* 01. 404 Attack"));
	outtextxy(255, 356, _T("* 02. Defacement Attack"));
	outtextxy(465, 356, _T("* 03. Attack Recorder"));
	outtextxy(675, 356, _T("* 04. DNS Attack"));
	outtextxy(425, 386, _T("* 05. Server Restart Attack"));
	outtextxy(670, 386, _T("* 06. Quit"));

 	system("pause");
	closegraph();

	return 0;
}