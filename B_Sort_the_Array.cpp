/*Note that if from a given sorted array, if reverse a segment, then the remaining 
array will be arranged in following way. First increasing sequence, then decreasing, 
then again increasing.

You can find the first position where the sequences start decreasing from the beginning
 and all it L.
You can find the first position where the sequences start increasing from the end and
Call it R.

Now we just need to reverse the segment between a[L] to a[R].

Here is outline of my solution which is easy to implement. First I map larger numbers
 to numbers strictly in the range 1, n.
As all the numbers are distinct, no two numbers in the mapping will be equal too.

Let us define L to be smallest index such that A[i] != i;
Let us also define R to be largest index such that A[i] != i;

Note that if there is no such L and R, it means that array is sorted already. 
So answer will be "yes", we can simply reverse any of the 1 length consecutive
segment.
Otherwise we will simply reverse the array from [L, R]. After the reversal, 
we will check whether the array is sorted or not.*/

#include <bits/stdc++.h>
using namespace std;
 
const int N = (int) 1e5 + 5;
int a[N], b[N];
 
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i]; //copying into another array
	}
	map<int, int> mp;
	sort(b, b + n);
	for (int i = 0; i < n; i++) {
		mp[b[i]] = i;
	}
	for (int i = 0; i < n; i++) {
		a[i] = mp[a[i]];
	}
	int L = -1;
	for (int i = 0; i < n; i++) {
		if (a[i] != i) {
			L = i;
			break;
		}
	}
	int R = -1;
	for (int i = n - 1; i >= 0; i--) {
		if (a[i] != i) {
			R = i;
			break;
		}
	}
	if (L == -1 || R == -1) {
		cout << "yes" << endl;
		cout << 1 << " " << 1 << endl;
	} else {
		reverse(a + L, a + R + 1);
		int ok = true;
		for (int i = 0; i < n; i++) {
			if (a[i] != i) {
				ok = false;
			}
		}
		if (ok) {
			cout << "yes" << endl;
			cout << L + 1 << " " << R + 1 << endl;
		} else {
			cout << "no" << endl;
		}
	}
	return 0;
}
