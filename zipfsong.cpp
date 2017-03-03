#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<string.h>

using namespace std;

class Zipf
{
private:
  double qi;
  string str;

public:
    void create_list(int p);
    vector<string>most_played(int q);

    static bool cmp1(Zipf z1, Zipf z2)
    {
        return z1.qi>z2.qi;
    }


};


vector<Zipf>songs;

int main()
{
  vector<string>result;
  int p,q;
  cin>>p;
  cin>>q;
  Zipf z;
  z.create_list(p);
  result.resize(q);
  result=z.most_played(q);
  for(int p=0;p<q;p++)
  {
    cout<<result[p]<<endl;
  }


  return 0;
}

void Zipf::create_list(int p)
{
  Zipf op;
  songs.resize(p);
  double a;
  string s;
  for(int i=0;i<p;i++)
  {
    double b;
    cin>>a;
    cin>>s;
    b=i+1;
    b=1/b;
    op.qi=a/b;
    op.str=s;
    songs[i]=op;

  }


}
vector<string> Zipf::most_played(int q)
{
  vector<string>res(q);
  sort(songs.begin(),songs.end(),cmp1);
  for(int i=0;i<q;i++)
  {
    res[i]=songs[i].str;
  }

  return res;

}
