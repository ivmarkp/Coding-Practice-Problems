#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int T, M, N, Ma, Mb, D[N], k = 1;
	cin>>T;
	for(int i=0; i<T; i++)
	{
		int R1i=-1, R2i=-1, R1f=-1, R2f=-1;
		int sum=0;
		cout<<"i-loop\n\n";
		cin>>M>>N;
		for(int j=0; j<N; j++)
		{	
            		cin>>Ma>>Mb;
			if((R1i == -1) || (abs(R1f-Ma) == 1))
            		{
	            		if(R2f==Ma)
	                	{
	                		cout<<"Inner-If\n";
	                		if(R2i!=-1)
	                    		{
	                    			R2i = R2f; 
	                    			R2f = Mb;
					}
					else if(R2i==-1)
					{
						R2i = Ma; 
	                    			R2f = Mb;
					}
	                    		sum = sum + abs(R2i-Ma)+abs(Ma-Mb);
	                		break;
	                	}
	                	if(R1i!=-1)
	                	{
	                   		R1i = R1f; 
	                   		R1f = Mb;
				}
				else if(R1i==-1)
				{
					R1i = Ma; 
	                   		R1f = Mb;
				}
	                	sum = sum + abs(R1i-Ma)+abs(Ma-Mb);
            		}	
        		else if((R2i == -1) || (abs(R2f-Ma) == 1))
            		{
                		if(R2i!=-1)
                		{
                   			R2i = R2f; 
                   			R2f = Mb;
				}
				else if(R2i==-1)
				{
					R2i = Ma; 
                   			R2f = Mb;
				}
                		sum = sum + abs(R2i-Ma)+abs(Ma-Mb);
            		}
            		else 
            		{
            			sum = 0;
			}	
        	}
        	D[k] = sum;
        	k = k+1;
    	}
    	for(int l=1; l<k; l++)
    	{
		cout<<D[l]<<"\n";
    	}
    	return 0;
}
