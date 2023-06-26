#include <iostream>
#include <vector>

using namespace std;

vector<int> draw_tree(int t, vector<vector<int>> &test_cases)
{
	vector<int> results;

	for (int i = 0; i < t; i++)
	{
		int n = test_cases[i][0];
		vector<vector<int>> &edges = test_cases[i];

		int readings = n - 1; // Number of edges in the tree

		results.push_back(readings);
	}

	return results;
}

int main()
{
	int t;
	cin >> t; // Number of test cases

	vector<vector<int>> test_cases;

	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n; // Number of vertices

		vector<vector<int>> edges;
		for (int j = 0; j < n - 1; j++)
		{
			vector<int> edge(2);
			cin >> edge[0] >> edge[1];
			edges.push_back(edge);
		}

		test_cases.push_back({n});
		test_cases.back().insert(test_cases.back().end(), edges.begin(), edges.end());
	}

	vector<int> results = draw_tree(t, test_cases);

	for (int result : results)
	{
		cout << result << endl;
	}

	return 0;
}
