/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: manish
 *
 * Created on 2 July, 2016, 9:16 AM
 */
//============================================================================
// Name        : algorithms(coursera).cpp
// Author      : manish
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : Maximum pair wise product, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
template<typename T>
T maximum_pair_product(T b[],T n);
template<typename A>
A maximum_pair_product_fast(A b[],A n);
//template<typename C>
//C max_pair_product_recursion(int r,C b[],C output3,C i);

int main() {
	int a[1000],n,r;
	long output1,output2,output3=0;
	n=rand()%98+2;
	for(int i=0;i<n;i++)
        {       a[i]=rand()%10000;
                r=a[i];
                //output3= max_pair_product_recursion(r,a,output3,i);
        }
        for(int i=0;i<n;i++)
	{
            cout<<a[i];
        }
        output1 = maximum_pair_product(a,n);
	output2 = maximum_pair_product_fast(a,n);
        if(output1==output2&&output2==output3)
        { 
        cout<<output1<<"         "<<output2<<"         "<<output3<<"\n"<<"OK";
        } 
        else
        { 
           cout<<output1<<"         "<<output2<<"         "<<output3<<"\n"<<"ERROR";    
        exit(0);
	}
       
	
}       
template<typename T>       
T maximum_pair_product(T b[],T n)
{
	long result = 0;
			for(int i=0;i<n;i++)
			{
				for(int j=i+1;j<n;j++)
				{
					if(result<b[i]*b[j])
					{
						result = b[i]*b[j];
					}
				}
			}
			return result;
}
template<typename A>
A maximum_pair_product_fast(A b[],A n)
{
	long max1=0,max2=0,maxindex=0;
	for(int i=0;i<n;i++)
	{
		if(max1<b[i])
		{
			max1=b[i];
			maxindex=i;
		}
		for(int j=0;j<n&&j!=maxindex;j++)
		{     
			if(max2<b[j])
			{
				max2 = b[j];
			}
		}
	}
	return max1*max2;
}
/*template<typename C>
C max_pair_product_recursion(int r,C b[],C output3,C i)
{   int result=0;
    for(int j=0;j<i;j++)
        result =r*b[j];
        if(output3<result)
            return result;
}
*/
