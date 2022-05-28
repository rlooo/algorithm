#include <iostream>
#include <string>
using namespace std;

int k = 0;
string str[4] = {
 "\"재귀함수가 뭔가요?\"",
 "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.",
 "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.",
 "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\""
};

void func(int n) {
	if (n == 0) {
		for (int i = 0; i < k; i++) {
			cout << "____";
		}
		cout << "\"재귀함수가 뭔가요?\"" << '\n';
		for (int i = 0; i < k; i++) {
			cout << "____";
		}
		cout << "\"재귀함수는 자기 자신을 호출하는 함수라네\"" << '\n';
		return;
	}

	for (int i = 0; i < 4; i++) {
		for (int i = 0; i < k; i++) {
			cout << "____";
		}
		cout << str[i] << '\n';
	}
	k++;
	func(--n);
}

void func2(int m) {
	
		if (m < 0) return;

		for (int i = 0; i < m; i++) {
			cout << "____";
		}
		cout << "라고 답변하였지." << '\n';
		func2(--k);
	
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;

	cin >> n;

	cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다." << '\n';
	func(n);
	func2(n);

	return 0;
}
