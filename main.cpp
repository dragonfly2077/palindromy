#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

string podaneSlowo1;
string podaneSlowo2;

void czyToPalindrom(string zdanieLubSlowo, string slowoLubZdanie)
{

    cin >> podaneSlowo1;
    cin >> podaneSlowo2;


    int dlugoscSlowa2=slowoLubZdanie.size();
    int dlugoscSlowa3=dlugoscSlowa2;
    dlugoscSlowa3--;
    int i=0;

    while(i<dlugoscSlowa2)
    {
        if(zdanieLubSlowo[i] >=65 && zdanieLubSlowo[i] <=90)
            zdanieLubSlowo[i]=zdanieLubSlowo[i] + 32;

            if(zdanieLubSlowo[i] !=32)
            {
                if(slowoLubZdanie[dlugoscSlowa3] >=65 && slowoLubZdanie[dlugoscSlowa3] <=90)
                    slowoLubZdanie[dlugoscSlowa3]=slowoLubZdanie[dlugoscSlowa3] + 32;

                if(slowoLubZdanie[dlugoscSlowa3] !=32)
                {

                    if(zdanieLubSlowo[i] == slowoLubZdanie[dlugoscSlowa3])
                    {
                        dlugoscSlowa3--;
                        i++;
                    }
                    else
                    {
                        cout << "slowo nie jest palindromem" << endl;
                        exit(0);
                    }

                }

                else
                {
                    dlugoscSlowa3--;
                }

            }

            else
            {
                i++;
            }

    }

    cout << "slowo jest palindromem" << endl;

}

int main()
{

    czyToPalindrom(podaneSlowo1,podaneSlowo2);

    return 0;
}
