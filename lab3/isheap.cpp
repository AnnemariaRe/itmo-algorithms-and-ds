#include <fstream>
#include <vector>

using namespace std;

bool isheap(vector<int> & heap) {
    int n = heap.size();
    for (int i = 1; i <= n ; ++i) {
        if ((2 * i < n) && (heap[2 * i] < heap[i])) {
            return false;
        }
        if ((2 * i + 1 < n) && (heap[2 * i + 1] < heap[i])) {
            return false;
        }
    }
    return true;
}

int main() {
    ifstream input("isheap.in");
    ofstream output("isheap.out");

    int n = 0;
    input >> n;
    vector<int> heap(n + 1);

    for (int i = 1; i <= n; ++i) {
        input >> heap[i];
    }

    output << (isheap(heap) ? "YES" : "NO") << endl;

    return 0;
}