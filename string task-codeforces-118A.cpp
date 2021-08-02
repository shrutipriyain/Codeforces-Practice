//codeforces-remove all vowels and insert a dot before each conosonant, and change text
#include<iostream>
#include<algorithm>
#include <string>
using namespace std;
int main() {
   string s;
   cin>>s;
   int len=s.length();
	string vowels="AIEOUYaeiouy";
	for(int i=0;i<12;i++)
   	s.erase(remove(s.begin(),s.end(),vowels[i] ),s.end()); //remove all vowels from string
	//end of part 1
	
	int len1=s.length();
	string s1=s;
	for(int i=0;i<len1;i++)
	s[i]=tolower(s1[i]);
	//END OF PART 3
	
	for(int i=0;i<(2*len1);i=i+2)
		s.insert(i,1,'.'); // inserts '.' at position i for 1 time
	cout<<s;
	//end of part 2
	return 0;
}
