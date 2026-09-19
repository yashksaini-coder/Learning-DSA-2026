#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

auto show_trianlge(vector<vector<int>>) {
  vector<int> data{};

  for (auto number : data) {
    cout << number << ' ';
  }
}

vector<int> get_next_row(const vector<int> &last_row) {
  vector next_row{1};
  if (last_row.empty()) {
    return next_row;
  }
  for (size_t idx = 0; idx + 1 < last_row.size(); ++idx) {
    next_row.emplace_back(last_row[idx] + last_row[idx + 1]);
  }
  next_row.emplace_back(1);
  return next_row;
}

auto generate_triangle(int rows) {
  std::vector<int> data;
  std::vector<std::vector<int>> triangle;
  for (int row = 0; row < rows; ++row) {
    data = get_next_row(data);
    triangle.push_back(data);
  }
  return triangle;
}

template <typename T>
std::ostream &operator<<(std::ostream &s,
                         const std::vector<std::vector<T>> &triangle) {
  for (const auto &row : triangle) {
    std::ranges::copy(row, std::ostream_iterator<T>(s, " "));
    s << '\n';
  }
  return s;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int x = 16;
  auto res = generate_triangle(x);
  cout << res;
  return 0;
}
