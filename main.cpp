#include <iostream>
#include <cmath>
using namespace std;
const int MAXSIZE=100;
double L_i[MAXSIZE];
double Amax=0,Lmax=0;//������,��󳤶�
double Ax,Ay,Az;//��¼������ʱ��ľ������
double Lx,Ly,Lz;//��¼��󳤶�ʱ��ľ������
int m;
int program()
    {
        cout<<"������ľ���ĸ��� m:"<<endl;
        cin>>m;
    if(m<3)
        {
        cout<<"��������������ľ��"<<endl;
        return 0;
        }
        cout<<"��������"<<m<<"��ľ���ĳ���:"<<endl;
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
    cout<<"������Ϊ"<<Amax<<"��ʱľ�����ȷֱ�Ϊ"<<Ax<<","<<Ay<<","<<Az<<endl;
    cout<<"��󳤶�Ϊ"<<Lmax<<"��ʱľ�����ȷֱ�Ϊ"<<Lx<<","<<Ly<<","<<Lz<<endl;
    return 0;
}
int main()
{
    program();
    return 0;
}

