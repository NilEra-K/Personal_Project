/*EasyX ͼ�ο�ʹ��*/
#include <iostream>
#include <graphics.h>
/*mmsystem.h �������ֿ��õ�ͷ�ļ�*/
#include <mmsystem.h>
/*���� winmm.lib ���ļ�*/
#pragma comment (lib, "winmm.lib")

using namespace std;

void learnDrawCircle() {
	// ��ʼ��ͼ����� 640*480
	initgraph(640, 480);

	// ������Ҫ��ͼ��
	// circle(int x, int y, int radis);
	// x: x����
	// y: y����
	// radis: Բ�İ뾶
	circle(200, 100, 50);

	system("pause");
	// �ر�ͼ�ν���
	closegraph();
}

void learnMoreGraph() {
	initgraph(640, 480);

	// ���ñ�����ɫ
	// setbkcolor(COLORREF color);
	// color: ���ñ�����ɫ, ������ʽ��
	// cleardevice();
	// cleardevice(): ģ�⻭ͼ������Ͱ�Ķ���, ��Ϳ��������
	setbkcolor(RGB(64, 128, 128));
	cleardevice();

	// ���û�����ɫ
	// setlinecolor(COLORREF color);
	setlinecolor(RGB(255, 0, 0));

	// ���û�����ʽ
	// setlinestyle(pramas);
	// PS_SOLID: ʵ��
	// 10: ���ʵĿ��
	setlinestyle(PS_SOLID, 10);
	circle(320, 240, 200);

	// ����������ɫ
	// ���� 2022�汾�ĺ����� 2018�汾����һЩ����
	// ��Ҫ��ѯ�ٷ��ĵ���ȷ�������÷�
	settextcolor(RGB(255, 255, 0));
	settextstyle(100, 0, _T("΢���ź�"));
	outtextxy(170, 190, _T("��������"));

	// ����
	line(180, 380, 460, 100);
	system("pause");
	closegraph();
}

void displayMusic() {
	initgraph(899, 500);
	loadimage(0, _T("hackerBackground.jpg"));

	// �ظ����� xxx.mp3
	mciSendString(_T("play ��ҹ�ʰ���.mp3 repeat"), 0, 0, 0);
}

void displayVideo() {
	// ��Ƶ����ԭ��, ʵ�ֶ�֡ͼƬ���β���

	// �����ļ���
	char fileName[128];
	initgraph(480, 360);
	while (1) {
		for (int i = 1; i <= 2023; i++) {
			// ע��: sprintf(fileName, filePathTemplate, value); ������ǰ�Ѿ�������Ϊ����ȫ�ĺ���
			// ʹ��ʱ����ʹ�� sprintf_s(fileName, filePathTemplate, value); ���д���
			// ע��: loadimage(0, imagePath); ������Ҫ����̶��� image·��, �� VS ����Ҫʹ�ö��ַ��ַ�����ʵ�ֱ��ػ�
			// ��һ���������Ϊ��д��������ת��, �ڴ˲���ʵ��
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

	// ���ƿ��ľ���
	rectangle(40, 355, 240, 375);
	rectangle(250, 355, 450, 375);
	rectangle(460, 355, 660, 375);
	rectangle(670, 355, 870, 375);
	rectangle(420, 385, 655, 405);
	rectangle(665, 385, 800, 405);

	// ����������ʽ
	settextstyle(18, 0, _T("Consolas"));
	
	// �ھ����в�������
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