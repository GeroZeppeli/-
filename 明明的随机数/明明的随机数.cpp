/*���ӣ�https://www.nowcoder.com/questionTerminal/3245215fffb84b7b81285493eae92ff0?orderByHotValue=1&questionTypes=000100&page=1&onlyReference=false
��Դ��ţ����*/

#include <iostream>
using namespace std;
int main() {
    int N, n;
    while (cin >> N) {
        int a[1001] = { 0 };
        while (N--) {
            cin >> n;
            a[n] = 1;
        }
        for (int i = 0; i < 1001; i++)
            if (a[i])
                cout << i << endl;
    }
    return 0;
}
