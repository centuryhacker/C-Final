/*****************************************************************************
Write a program that produces the following output:
CCCCCCCCC         ++            ++
CC                ++            ++
CC          ++++++++++++++ +++++++++++++++
CC          ++++++++++++++ +++++++++++++++
CC                ++            ++
CCCCCCCCC         ++            ++
 *****************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  cout << "CCCCCCCCCC" << setw(15) << "++" << setw(20) << "++" << endl;
  cout << "CC" << setw(23) << "++" << setw(20) << "++" << endl;
  cout << "CC" << setw(30) << "++++++++++++++" << setw(20) << "++++++++++++++" << endl;
  cout << "CC" << setw(30) << "++++++++++++++" << setw(20) << "++++++++++++++" << endl;
  cout << "CC" << setw(23) << "++" << setw(20) << "++" << endl;
  cout << "CCCCCCCCCC" << setw(15) << "++" << setw(20) << "++" << endl;
  return 0;
}
