#include <iostream>
using namespace std;

void ShowMenu() {
	cout << "=============" << endl;
	cout << "1. 增加10°" << endl;
	cout << "2. 减少10°" << endl;
	cout << "3. 查看当前角度" << endl;
	cout << "4. 判断是否安全" << endl;
	cout << "0. 退出" << endl;
	cout << "=============" << endl;
	cout << "请选择：" << endl;
}

void IncreaseAngle(int& angle) {
	angle += 10;
}

void DecreaseAngle(int& angle) {
	angle -= 10;
}

void PrintAngle(int angle) {
	cout << "当前角度是：" << angle <<endl;
}

bool IsSafe(int angle) {
	return angle >= 0 && angle <= 90;
}

int main() {
	int angle;
	int choice;

	cout << "请输入一个整数角度：";
	cin >> angle;
	
	while (true) {
		ShowMenu();
		cin >> choice;

		switch (choice) {
		case 1:
			IncreaseAngle(angle);
			PrintAngle(angle);
			break;
		case 2:
			DecreaseAngle(angle);
			PrintAngle(angle);
			break;
		case 3:
			PrintAngle(angle);
			break;
		case 4: 
			if (IsSafe(angle)) cout << "安全" << endl;
			else cout << "危险" << endl;
			break;
		case 0:
			return 0;
		default:
			cout << "输入错误，请重新输入！" << endl;
		}
	}
}