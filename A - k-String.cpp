#include<bits/stdc++.h>
#define INT long long
using namespace std;

int main()
{
    INT k,a,i,j,b,c,n,m,alphabetCount[30];
    char input[1005],res[1005];
    while(scanf("%lld %s",&k,input)==2)
    {
        memset(alphabetCount, 0, sizeof(alphabetCount));
        for(i=0;input[i]!='\0';i++)
        {
            alphabetCount[input[i]-'a']++;
        }
        for(i=0;i<26;i++)
        {
            if(alphabetCount[i]%k!=0)
                break;
        }
        if(i!=26)
        {
            printf("-1\n");
            continue;
        }
        b=-1;
        for(i=0;i<26;i++)
        {
            a=alphabetCount[i]/k;
            for(j=0;j<a;j++)
                res[++b]='a'+i;
        }
        res[++b]='\0';
        for(i=1;i<=k;i++)
            printf("%s",res);
        printf("\n");
    }
    return 0;
}
