#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


int main() {
	int C, P, N, Y=0; //c ī�尹�� p���� Ƚ�� N�� �����ش� ���

	cin >> C;
	cin >> P;
	int arr[1001] = { 0 };
	int arry[1001] = { 0 };
	int expact[1000] = { 0 };
	int tump, tumpp, Ctump;
	for (int i = 0; i < C; i++) {
		arr[i] = i + 1;
	}
	//copy(arr, arry + 1001, arry);
	
	for (int i = 0; i < P; i++) {
		cin >> N;
		expact[i] = N;
	}
	Ctump = C;
	for (int i = 0; i < P; i++) {//������� ���� ����
		N = expact[i];
		tump = 0; 
		for (int j = 0; j < C - 2 * N; j++) { //�����ϰ� �ø� 6-4
			arry[j] = arr[j + N];
			tump++;//tump�� ���οö� ī��� ����
		}
		int F = (C - (C - 2 * N)) / 2;
		tumpp = tump;
		for (int S = 0; S < F; S++) { //�տ��� ����
			arry[tump] = arr[S];
			tump = tump + 1;
		}
		for (int D = tump; D < C; D++) {
			arry[D] = arr[D];
		}
		for (int Q = 0; Q < C; Q++) {
			arr[Q] = arry[Q];
		}
		if (tumpp > 2*N) {
			i--;
			C = C - 2 * F;
		}
		else {
			C = Ctump;
		}
	}
	for (int T = 0; T < 5; T++) {
		cout << arr[T] << endl;
	}

	return 0;
}