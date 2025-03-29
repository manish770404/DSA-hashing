#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;
int main()
{
  unordered_map<string,int>umap;
  umap["manish"]=87;
  umap["himanshu"]=75;
  umap["harsh"]=69;
  umap["nishant"]=99;
  umap["nitesh"]=100;

  //for(auto x:umap)       first methof to print hash map

  // cout<<x.first<<" "<<x.second<<endl;

  // second method to print 
  for(auto itr=umap.begin();itr!=umap.end();itr++)
  cout<<itr->first<<" "<<itr->second<<endl;

  string key="manish";
  if(umap.find(key)!=umap.end())
  {
    cout<<"key is found"<<endl;
  }
  else
  {
    cout<<"key not found"<<endl;
  }
  
  if(umap.find(key)!=umap.end())
  {
     auto temp = umap.find(key);

    cout<<"key is:"<<temp->first<<endl;
     cout<<"value is:"<<temp->second<<endl;
  }
  umap.insert(make_pair("ravi",101));
  for(auto itr=umap.begin();itr!=umap.end();itr++)
  cout<<itr->first<<" "<<itr->second<<endl;

    cout<<"the size of umap ia : "<<umap.size()<<endl;

    key="ravi";
    umap.erase(key);
    for(auto itr=umap.begin();itr!=umap.end();itr++)
  cout<<itr->first<<" "<<itr->second<<endl;
  cout<<"the size of umap ia : "<<umap.size()<<endl;
  cout<<endl;
   cout<<endl;
    cout<<endl;
    


  int arr[]={5,8,7,9,6,1,5,8,7,9,6,21,14,8,98,2,4};
  unordered_map<int,int>unmapped;
    
    for(int i=0;i<=17;i++)
    {
        int key=arr[i];
        unmapped[key]++;
    }
 for(auto itr=unmapped.begin();itr!=unmapped.end();itr++)
  cout<<itr->first<<" "<<itr->second<<endl;
}

