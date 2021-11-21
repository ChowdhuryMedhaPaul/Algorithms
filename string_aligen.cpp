
#include<bits/stdc++.h>
using namespace std;

int main()
{
   	string sname;
	cout << "Enter the a sentence " <<endl;
	getline(cin,sname);

	int s = sname.size();
	int pad1 = (100 - s)/2;
	int pad2 = pad1;

	for (int f = 0; f < pad1; f++)
	  {
	  cout << " ";
	 // ++f;
	  }

	 cout << sname;

          for (int e = 0; e < pad2; e++)
	  {
	  cout << " ";
	 // ++e;
	  }

	cout << endl;
    return 0;
}

