#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    char litera;
    int i,j;
    int L,poz,z,N;
    cin >> L; cin.ignore();
    int H;
    cin >> H; cin.ignore();
    string T;
    getline(cin, T);
    N=T.length();
    for(i=1;i<=H;i++)
        {

            string ROW;
            getline(cin,ROW);

            for(j=0;j<N;j++)
            {

                    litera=T.at(j);
                    if((litera-64<=26)&&(litera-64>=1))
                        poz=(litera-64)*L-L;
                    else if((litera-96<=26)&&(litera-96>=1))
                            poz=(litera-96)*L-L;
                        else poz=26*L;
                    for(z=poz;z<poz+L;z++)
                        cout<<ROW.at(z);
            }
            cout<<endl;
        }
}
