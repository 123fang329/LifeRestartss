﻿#include "functions.h"

int flag;
int score;

vector<randEvent> ranEvents;
vector<string> happenEvent;

vector<YoungAgeChoices> YoungEvents;//存储18岁以前的年龄事件
vector<examSocre> examScores = { {HighAttribute, 500, 700}, {MidAttribute, 300, 500 }, {LowAttribute, 100, 300} };

//利用栈模拟递归过程遍历树
void traverseTree(mainEvent* root, person p) {
	if (root == nullptr) {
		return;
	}

	stack<mainEvent*> eventStack;
	eventStack.push(root);

	while (!eventStack.empty()) {
		mainEvent* current = eventStack.top();
		eventStack.pop();

		for (auto child : current->children) {
			if (child->isTrigger(p) || current->children.size() == 1) {
				eventStack.push(child);
				//处理子节点区域
				break;
			}
		}
	}
}

//GT写的
void gameLoop(person& p, mainEvent& event) {
	if (flag == 0) {
		if (p.Age == 17) {
			score = getScore(p.IQ);

			//有没有大学相关的判断功能，比如我去了哪个大学

		}
		else {
			if (YoungEvents[p.Age].choices.size() > 1) {
				YoungEvents[p.Age].showYoungAgeChoices();
				//是不是还要加一些数值传入什么
				Bonus delta = YoungEvents[p.Age].choices[0].improve;//这行代码的数值传入尚未解决。就那个0
				p.IQ += delta.IQBonus;
				p.EQ += delta.EQBonus;
				p.ProgramingSkill += delta.ProgramingSkillBonus;
				p.Health += delta.HealthBonus;
			}
			else if (YoungEvents[p.Age].choices.size() == 1) {
				//直接显示事件
				YoungAgeChoices[p.Age].showYoungAgeChoices();
			}
		}
	}
	else if (flag == 1) {
		//是不是有个大学相关的事件树
		//通过传入事件树，然后遍历，用if(isTrigger())来判断事件发生的走向
		//走完本科线这里有个选择（选1或者选3，即工作线以及读研线。若失败，则进入4 无业时期）
		traverseTree(root, p);//这里的root待定，一般来讲是名为University的根节点。

	}
	else if (flag == 2) {
		//研究生时期
		traverseTree(root, p);
		//事件遍历完后，遍历下一个状态。
		//我觉得应该设定一个Bool 变量 isAlive;
		flag = 4;//进入无业状态。

	}
	else if (flag == 3) {
		//工作时期
		//先判断工作时期找没找到工作，要是事件触发的是没找到，则根据属性做下一步工作
		//用属性判断函数，判断创业线是否可能发生，有的话就选择，没有的话就直接进入失业线
	}
	else if (flag == 4) {
		//无业期，用几个不同阶段的事件触发函数，看看会触发哪些东西
		//先判断创业线，创业线的属性限制比较明显
		//无业期的核心触发是选择，看你选择走哪一条线
		mainEvent* a， b, c, d, e;//我需要各种root的定义
		//判断创业线
		if (a->isTrigger(p)) {
			flag = 6;
		}
		else if (b->isTrigger(p)) {

		}
		else if ()

	}
	else if (flag == 5) {
		//咸鱼时期，主打一个外卖小哥
		//直接遍历树，判断子节点是否超过一个
		//子节点超过一个就调用isTrigger();
	}
	else if (flag == 6) {
		//
	}
	else if (flag == 7) {

	}
	else if (flag == 8) {

	}
	else if (flag == 9 {

	}
	
}