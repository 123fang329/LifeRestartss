//ͼ�λ���
#include "functions.h"
#include "Easytext.h"
ExMessage msg = { 0 };
void menuView()
{
	cleardevice();
	IMAGE main;
	loadimage(&main, "./background.jpg", WINDOW_WIDTH, WINDOW_HEIGHT);

	while (true)
	{
		BeginBatchDraw();
		putimage(0, 0, &main);
		setbkcolor(BLACK);

		setlinecolor(BLACK);            // ���û�����ɫ
		setbkcolor(WHITE);                // ���ñ�����ɫ
		setfillcolor(RGB(248, 193, 90));            // ���������ɫ

		settextstyle(30, 0, "�ֻ����������(��������Ȩ)");
		settextcolor(BLACK);
		fillrectangle(340, 200, 700, 240);
		outtextxy(470, 205, "��ʼ��Ϸ");
		//fillrectangle(340, 270, 700, 310);
		//outtextxy(470, 275, "�������");
		//fillrectangle(340, 340, 700, 380);
		//outtextxy(470, 345, " ���а� ");
		//fillrectangle(340, 410, 700, 450);
		//outtextxy(470, 415, "����Ƥ��");
		fillrectangle(340, 480, 700, 520);
		outtextxy(470, 485, "��Ϸ˵��");
		fillrectangle(340, 550, 700, 590);
		outtextxy(470, 555, "�˳���Ϸ");
		EndBatchDraw();
		//
		if (peekmessage(&msg, EX_MOUSE) && msg.message == WM_LBUTTONDOWN)
		{
			if (msg.x >= 340 && msg.x < 340 + 360 && msg.y >= 200 && msg.y <= 240)
			{
				gameBeignView();//��ʼ��Ϸ
				cout << "�������Ҽ�1" << endl;
			}
			//
			//			if (msg.x >= 340 && msg.x < 340 + 360 && msg.y >= 270 && msg.y <= 310)
			//			{
			//
			//				//Endthingview();//��Ϸ���ý���
			//				//cout << "�������Ҽ�2" << endl;
			//			}
			//
			//			//if (msg.x >= 340 && msg.x < 340 + 360 && msg.y >= 340 && msg.y <= 380)
			//			//{
			//			//	
			//			//	mciSendString("setaudio musicMenu volume to 0", NULL, 0, NULL);
			//			//	rankView();//���а����
			//			//	cout << "�������Ҽ�3" << endl;
			//			//}
			//
			//			//if (msg.x >= 340 && msg.x < 340 + 360 && msg.y >= 410 && msg.y <= 450)
			//			//{
			//			//
			//			//	mciSendString("setaudio musicMenu volume to 0", NULL, 0, NULL);
			//			//	skinView();//����Ƥ��
			//			//	cout << "�������Ҽ�4" << endl;
			//			//}
			//
						if (msg.x >= 340 && msg.x < 340 + 360 && msg.y >= 480 && msg.y <= 520)
						{
			
			
							//explainView();//��Ϸ˵��
							cout << "�������Ҽ�5" << endl;
						}
			//
						if (msg.x >= 340 && msg.x < 340 + 360 && msg.y >= 550 && msg.y <= 590)
						{
			
							exit(0);// �˳���Ϸ
							cout << "�������Ҽ�6" << endl;
						}
		}
	}
}
void popView()
{
	EasyButton 	btnthing;
	EasyButton btntext;
	EasyButton btnreturn;
	cout << 3 << endl;
	while (1)
	{
		BeginBatchDraw();
		setbkcolor(BLACK);
		IMAGE game;
		loadimage(&game, "./background.jpg", WINDOW_WIDTH, WINDOW_HEIGHT);
		putimage(0, 0, &game);
		settextcolor(BLACK);
		btntext.Create(400, 220, 560, 280, "ѡ���¼�", NULL);
		btnthing.Create(220, 300, 760, 570, "", NULL);
		btnreturn.Create(180, 650, 800, 690, "�����˽׶�", thingView);
		EndBatchDraw();
		while (true)
		{
			msg = getmessage(EX_MOUSE);
			if (msg.message == WM_LBUTTONDOWN)
			{
				if (btnreturn.Check(msg.x, msg.y)) {

					btnreturn.OnMessage();
				}
			}
		}
	}
}
void thingView()
{
	EasyButton 	btnthing;
	EasyButton btnnext;
	EasyButton btnreturn;
	cout << 2;

	while (1)
	{
		BeginBatchDraw();
		setbkcolor(BLACK);
		IMAGE game;
		loadimage(&game, "./background.jpg", WINDOW_WIDTH, WINDOW_HEIGHT);
		putimage(0, 0, &game);
		settextcolor(BLACK);
		//btn.Create(400,220,560,280,"ѡ���¼�",NULL);
		btnthing.Create(220, 130, 760, 570, "", NULL);
		btnreturn.Create(180, 650, 800, 690, "�����˽׶�", gameView);
		btnnext.Create(420, 590, 540, 630, "��ʼ�¼�", popView);



		EndBatchDraw();

		while (true)
		{
			msg = getmessage(EX_MOUSE);
			if (msg.message == WM_LBUTTONDOWN)
			{
				if (btnreturn.Check(msg.x, msg.y)) {

					btnreturn.OnMessage();
				}
				if (btnnext.Check(msg.x, msg.y)) {

					btnnext.OnMessage();
				}
			}


		}


	}
}
void gameView()
{
	EasyButton 	btnthing;
	EasyButton btnnext;
	EasyButton btnnature;
	cout << 1 << endl;
	while (1)
	{
		BeginBatchDraw();
		setbkcolor(BLACK);
		IMAGE game;
		loadimage(&game, "./background.jpg", WINDOW_WIDTH, WINDOW_HEIGHT);
		putimage(0, 0, &game);
		settextcolor(BLACK);
		btnthing.Create(220, 130, 760, 570, "", NULL);
		btnnext.Create(420, 590, 540, 630, "��ʼ�¼�", thingView);
		btnnature.Create(180, 650, 800, 690, "���� : ����:    ���̣� ��������� ���ʣ�  ", NULL);
		settextcolor(BLACK);
		setbkmode(TRANSPARENT);//�ı����ɫ��͸��
		//�����С&�����ֻ����������(��������Ȩ)
		//outtextxy(WINDOW_WIDTH / 2 - textwidth("�����ؿ�ģ����---��Ҫ������Ա") / 2, 200 - textheight("�����ؿ�ģ����---��Ҫ������Ա") / 2, "�����ؿ�ģ����---��Ҫ������Ա");//�����ı�
		EndBatchDraw();
		while (true)
		{
			msg = getmessage(EX_MOUSE);
			if (msg.message == WM_LBUTTONDOWN)
			{
				if (btnnext.Check(msg.x, msg.y)) {

					btnnext.OnMessage();
				}
			}
		}
	}
}
void gameBeignView()
{
	EasyButton 	btningame;
	EasyButton btnLife;
	EasyButton btnach;
	while (true)
	{
		BeginBatchDraw();
		setbkcolor(BLACK);
		IMAGE game;
		loadimage(&game, "./background.jpg", WINDOW_WIDTH, WINDOW_HEIGHT);
		putimage(0, 0, &game);
		settextcolor(BLACK);
		btningame.Create(320, 200, 700, 240, "�����ʼ��ĳ���Ա��һ��", gameView);
		btnLife.Create(200, 500, 350, 540, "����", NULL);
		btnach.Create(650, 500, 780, 540, "�ɾ�", NULL);
		EndBatchDraw();
		while (true)
		{
			msg = getmessage(EX_MOUSE);            // ��ȡ��Ϣ����

			if (msg.message == WM_LBUTTONDOWN)
			{
				// �жϿؼ�
				if (btningame.Check(msg.x, msg.y)) {

					btningame.OnMessage();
				}

				// �жϿؼ�
				if (btnLife.Check(msg.x, msg.y)) {

					btnLife.OnMessage();
				}

				// �жϿؼ�
				if (btnach.Check(msg.x, msg.y)) {
					;
					btnach.OnMessage();
				}
			}
		}
	}
}
void loginView()
{
	EasyTextBox LoginView_txtUsername;

	EasyTextBox LoginView_txtPassword;

	EasyButton LoginView_btnConfirm;
	EasyButton LoginView_btnBack;
	BeginBatchDraw();
	cleardevice();
	//���ô�����ɫ
	setbkcolor(RGB(255, 255, 255));
	cleardevice();
	IMAGE login;
	loadimage(&login, "./background.jpg", WINDOW_WIDTH, WINDOW_HEIGHT);
	putimage(0, 0, &login);
	settextcolor(RGB(239, 218, 187));
	setbkmode(TRANSPARENT); // �ı����ɫ��͸��
	settextstyle(100, 0, "�ֻ����������(��������Ȩ)"); // �����С&�����ֻ����������(��������Ȩ)
	outtextxy(WINDOW_WIDTH / 2 - textwidth("��¼�˺�") / 2, 200 - textheight("��¼�˺�") / 2, "��¼�˺�"); // �����ı�
	settextcolor(RGB(239, 218, 187)); // �ı���ɫ����ɫ
	settextstyle(30, 0, "�ֻ����������(��������Ȩ)");
	setbkmode(TRANSPARENT);
	outtextxy(300, 378, "�˺�");
	outtextxy(300, 438, "����");
	settextcolor(BLACK);
	LoginView_btnConfirm.Create(470, 610, 575, 650, "ȷ��", menuView);
	LoginView_btnBack.Create(470, 670, 575, 710, "����", beginView);
	settextstyle(20, 0, "�ֻ����������(��������Ȩ)");//�����С&�����ֻ����������(��������Ȩ)
	settextcolor(BLACK);

	LoginView_txtUsername.Create(370, 375, 700, 405, 20);
	LoginView_txtPassword.Create(370, 435, 700, 465, 20);

	EndBatchDraw();
	while (true)
	{
		ExMessage msg = getmessage(EX_MOUSE | EX_KEY);
		if (msg.message == WM_LBUTTONDOWN)
		{
			if (LoginView_txtUsername.Check(msg.x, msg.y))
			{
				LoginView_txtUsername.OnMessage();
			}
			else if (LoginView_txtPassword.Check(msg.x, msg.y))
			{
				LoginView_txtPassword.OnMessage();
			}
			else if (LoginView_btnConfirm.Check(msg.x, msg.y))
			{
				LoginView_btnConfirm.OnMessage();
			}
			else if (LoginView_btnBack.Check(msg.x, msg.y))
			{
				LoginView_btnBack.OnMessage();// ����������
			}
		}

	}
	closegraph();
}
void registerView()
{
	EasyTextBox registerView_txtUsername;

	EasyTextBox registerView_txtPassword;

	EasyButton registerView_btnConfirm;
	EasyButton registerView_btnBack;
	BeginBatchDraw();
	cleardevice();
	//���ô�����ɫ
	setbkcolor(RGB(255, 255, 255));
	cleardevice();
	IMAGE login;
	loadimage(&login, "./background.jpg", WINDOW_WIDTH, WINDOW_HEIGHT);
	putimage(0, 0, &login);
	settextcolor(RGB(239, 218, 187));
	setbkmode(TRANSPARENT); // �ı����ɫ��͸��
	settextstyle(100, 0, "�ֻ����������(��������Ȩ)"); // �����С&�����ֻ����������(��������Ȩ)
	outtextxy(WINDOW_WIDTH / 2 - textwidth("ע���˺�") / 2, 200 - textheight("ע���˺�") / 2, "��¼�˺�"); // �����ı�
	settextcolor(RGB(239, 218, 187)); // �ı���ɫ����ɫ
	settextstyle(30, 0, "�ֻ����������(��������Ȩ)");
	setbkmode(TRANSPARENT);
	outtextxy(200, 378, "�����˺�");
	outtextxy(200, 438, "��������");
	settextcolor(BLACK);
	registerView_btnConfirm.Create(470, 610, 575, 650, "ȷ��", beginView);
	registerView_btnBack.Create(470, 670, 575, 710, "����", beginView);
	settextstyle(20, 0, "�ֻ����������(��������Ȩ)");//�����С&�����ֻ����������(��������Ȩ)
	settextcolor(BLACK);

	registerView_txtUsername.Create(370, 375, 700, 405, 20);
	registerView_txtPassword.Create(370, 435, 700, 465, 20);

	EndBatchDraw();
	while (true)
	{
		ExMessage msg = getmessage(EX_MOUSE | EX_KEY);
		if (msg.message == WM_LBUTTONDOWN)
		{
			if (registerView_txtUsername.Check(msg.x, msg.y))
			{
				registerView_txtUsername.OnMessage();
			}
			else if (registerView_txtPassword.Check(msg.x, msg.y))
			{
				registerView_txtPassword.OnMessage();
			}
			else if (registerView_btnConfirm.Check(msg.x, msg.y))
			{
				registerView_btnConfirm.OnMessage();
			}
			else if (registerView_btnBack.Check(msg.x, msg.y))
			{
				registerView_btnBack.OnMessage();// ����������
			}
		}

	}
	closegraph();
}
void beginView()
{
	EasyButton btnLogIn;
	EasyButton btnRegister;
	EasyButton btnEnd;
	cleardevice();
	BeginBatchDraw();
	IMAGE login;
	loadimage(&login, "./background.jpg", WINDOW_WIDTH, WINDOW_HEIGHT);
	putimage(0, 0, &login);
	settextcolor(RGB(239, 218, 187));
	setbkmode(TRANSPARENT);//�ı����ɫ��͸��
	settextstyle(50, 0, "�ֻ����������(��������Ȩ)");//�����С&�����ֻ����������(��������Ȩ)
	outtextxy(WINDOW_WIDTH / 2 - textwidth("�����ؿ�ģ����---��Ҫ������Ա") / 2, 200 - textheight("�����ؿ�ģ����---��Ҫ������Ա") / 2, "�����ؿ�ģ����---��Ҫ������Ա");//�����ı�
	//
	settextcolor(RGB(239, 218, 187));//�ı���ɫ����ɫ
	settextstyle(30, 0, "�ֻ����������(��������Ȩ)");
	setbkmode(TRANSPARENT);

	settextcolor(BLACK);
	btnLogIn.Create(350, 300, 650, 340, "��¼�˺�", loginView);
	btnRegister.Create(350, 410, 650, 450, "ע���˺�", registerView);
	btnEnd.Create(350, 520, 650, 560, "�˳���Ϸ", NULL);

	EndBatchDraw();
	while (true)
	{
		msg = getmessage(EX_MOUSE);            // ��ȡ��Ϣ����

		if (msg.message == WM_LBUTTONDOWN)
		{
			// �жϿؼ�
			if (btnLogIn.Check(msg.x, msg.y)) {
				btnLogIn.OnMessage();
			}
			if (btnRegister.Check(msg.x, msg.y)) {

				btnRegister.OnMessage();
			}if (btnEnd.Check(msg.x, msg.y)) {

				exit(0);
			}
		}
	}
}

void careerView() {

}