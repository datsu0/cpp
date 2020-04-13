#include <queue>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void report(const vector<int>& x) {
  for (auto i : x) cout << i;
  cout << endl;
}

//���D��T���̐������p���breadth first search
void widthFirstSearch(queue<vector<int>>& searching, const vector<int>& numbers) {
  while (!searching.empty()) {
    auto x = searching.front();//�擪�v�f�̎擾
    searching.pop();           //�擪�v�f�̍폜

    int sum = accumulate(x.cbegin(), x.cend(), 0);
    if (sum == 10) report(x);
    else if (sum < 10) {
      for (auto i : numbers) {
        auto nextX = x;
        nextX.push_back(i);
        searching.push(move(nextX));
      }
    }
  }
}

int main() {
  auto searching = queue<vector<int>>();
  searching.emplace();//���vector<int>����n�߂�
  widthFirstSearch(searching, { 1, 2, 3, 4, 5 });
}