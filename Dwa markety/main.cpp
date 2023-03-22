#include <iostream>
#include <algorithm>

using namespace std;

int main() {

  int num_markets, num_products;
  cin >> num_markets >> num_products;


  int prices[num_markets][num_products];


  for (int i = 0; i < num_markets; i++) {
    for (int j = 0; j < num_products; j++) {
      cin >> prices[i][j];
    }
  }


  int min_cost = -1;


  for (int i = 0; i < num_markets; i++) {
    for (int j = i + 1; j < num_markets; j++) {

      int cost = 0;


      for (int k = 0; k < num_products; k++) {
        cost += min(prices[i][k], prices[j][k]);
      }


      if (min_cost == -1 || cost < min_cost) {
        min_cost = cost;
      }
    }
  }


  cout << min_cost << endl;

  return 0;
}
