
#include <iostream>
#include <set>
#include <string>
#include <algorithm>



using namespace std;
class CCompareStringNoCase
{
public:
    bool operator()(const string& str1, const string& str2) const
    {
        string sr1LowerCase;
        sr1LowerCase.resize(str1.size());
        transform(str1.begin(),str1.end(),sr1LowerCase.begin(),tolower); // 第四个参数是一个二元函数,
        string sr2LowerCase;
        sr2LowerCase.resize(str2.size());
        transform(str2.begin(),str2.end(),sr2LowerCase.begin(),tolower);

        return(sr1LowerCase < sr2LowerCase);
    }

};

int main()
{
    set<string,CCompareStringNoCase> name;

    names.insert("Tina");

    names.insert("Jack");

    set<string,CCompareStringNoCase>::iterator iNameFound = name.find("tina");

    if(iNameFound != names.end())
    {

        cout <<"found it!" << *iNameFound << endl;
    }else{

        cout << "not found" << endl;
    }
}
