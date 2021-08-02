//codeforces-remove all vowels and insert a dot before each conosonant, and change text
#include<iostream>
#include<algorithm>

using namespace std;
int main() {
   string my_str = "ABAABACCABA";

   cout << "Initial string: " << my_str << endl;

   my_str.erase(remove(my_str.begin(), my_str.end(), 'A'), my_str.end()); //remove A from string
   cout << "Final string: " << my_str;
}
