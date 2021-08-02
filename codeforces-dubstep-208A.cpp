//codeforces-dubstep-208A
#include <iostream>
using namespace std;
int main()
{
	string str;
	cin>>str;
	size_t index = 0;
	/*replacing the wub subsring by space*/
	while (true) {
     /* Locate the substring to replace. */
     index = str.find("WUB", index);
     if (index == std::string::npos) break;
     /* Make the replacement. */
     str.replace(index, 3, " ");
		index++;
}

return 0;
}

