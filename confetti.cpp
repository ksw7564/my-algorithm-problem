#include <iostream>
using namespace std;


int main() {
	int testcase,paper;

	int xy[100][2] = { 0 };
	int x=0, y=0, sum=0;
	int arr[101][101] = { 0 };

	cin >> testcase;
	for(int i = 0; i < testcase; i++ ) {
		cin >> paper;
		for (int j = 0; j < paper; j++) {
			cin >> x;
			cin >> y;
			xy[j][0] = x;
			xy[j][1] = y;//example x=3 y 7
			//��������ϸ� xy��� �迭�ȿ� ��� �������� ��ġ�� �Էµȴ�.
		}//���̵�� : �������� ��ġ�� ���� ����ä��� �ߺ��Ǵ°���... ���������ʴ´� �ߺ��ǵ� +1�ϸ� �������.
		for (int b = 0; b < paper; b++) {
			x = xy[b][0];
			y = xy[b][1];
			for (int w = 0; w < 10; w++) {
				arr[x + w][y]++;
				for (int t = 1; t < 10; t++) {
					arr[x + w][y + t]++;
				}
			}
		}
		sum = 0;
		for (int dex = 0; dex < 100; dex++) {
			for (int str = 0; str < 100; str++) {
				if (arr[dex][str]!=0) {
					sum+=1;
				}
			}
		}
		/*for (int dex = 0; dex < 100; dex++) {
			for (int str = 0; str < 100; str++) {
				cout << arr[dex][str];
			}
			cout << endl;
		}*/
		cout << sum << endl;
	}
	
	
	return 0;
}