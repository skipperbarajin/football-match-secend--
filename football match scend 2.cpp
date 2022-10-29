//crated by admin in 10/29/2022___1401/08/07
#include <iostream>
using namespace std;
// this progrom convert S_TO_H,M,S
int main()
{
int s;
cout<<"/n Enter the football match scend:";
cin>>s;//input
cout<<"/n h:"<<(s/3600);//out put
cout<<"/n m:"<<(s-(s/3600*(3600)))/60;//output
cout<<"/n s:"<<(s-(s/3600*(3600)))-((s-(s/3600*(3600)))/60)*(60);//output
return 0;	
}