#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


int main() {
	int C, P, N, Y=0; //c 카드갯수 p섞는 횟수 N은 섞을해당 장수

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
	for (int i = 0; i < P; i++) {//여기부터 섞는 과정
		N = expact[i];
		tump = 0; 
		for (int j = 0; j < C - 2 * N; j++) { //제외하고 올림 6-4
			arry[j] = arr[j + N];
			tump++;//tump는 위로올라간 카드와 같음
		}
		int F = (C - (C - 2 * N)) / 2;
		tumpp = tump;
		for (int S = 0; S < F; S++) { //앞에꺼 쌓음
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