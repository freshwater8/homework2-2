#include <iostream>
#include <cmath>
using namespace std;
const int MAXSIZE=100;
double L_i[MAXSIZE];
double Amax=0,Lmax=0;//最大面积,最大长度
double Ax,Ay,Az;//记录最大面积时的木棍长度
double Lx,Ly,Lz;//记录最大长度时的木棍长度
int m;
int program()
    {
        cout<<"请输入木棍的个数 m:"<<endl;
        cin>>m;
    if(m<3)
        {
        cout<<"请输入至少三个木棍"<<endl;
        return 0;
        }
        cout<<"请输入这"<<m<<"个木棍的长度:"<<endl;
    for(int i=0;i<m;i++)
        cin>>L_i[i];
    for(int i=0;i<m;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            for(int k=j+1;k<m;k++)
                {
                    if(L_i[i]+L_i[j]<=L_i[k]||L_i[i]+L_i[k]<=L_i[j]||L_i[k]+L_i[j]<=L_i[i])
                    continue;
                    if(L_i[i]-L_i[j]>=L_i[k]||L_i[i]-L_i[k]>=L_i[j]||L_i[k]-L_i[j]>=L_i[i]
                    ||L_i[j]-L_i[i]>=L_i[k]||L_i[k]-L_i[i]>=L_i[j]||L_i[j]-L_i[k]>=L_i[i]   )
                    continue;
                    double p=(L_i[i]+L_i[j]+L_i[k])/2;
                    double area=sqrt((p-L_i[i])*(p-L_i[j])*(p-L_i[k]));
                    if(area>Amax)
                    {
                        Amax=area;
                        Ax=L_i[i];
                        Ay=L_i[j];
                        Az=L_i[k];
                    }
                    double l=L_i[i]+L_i[j]+L_i[k];
                    if(l>Lmax)
                    {
                        Lmax=l;
                        Lx=L_i[i];
                        Ly=L_i[j];
                        Lz=L_i[k];
                    }
                }
        }
    }
    cout<<"最大面积为"<<Amax<<"此时木棍长度分别为"<<Ax<<","<<Ay<<","<<Az<<endl;
    cout<<"最大长度为"<<Lmax<<"此时木棍长度分别为"<<Lx<<","<<Ly<<","<<Lz<<endl;
    return 0;
}
int main()
{
    program();
    return 0;
}

