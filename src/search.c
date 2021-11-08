#include "search.h"
#include <stdbool.h>


#ifndef SEARCH_H
#define SEARCH_H

// Binary seach
bool search(int a[], int n,int x)

{
    if(n==0) return false;
    
    if(a[n-1]!= x)
    {
        return search(a,n-1,x);

    }
    else return true;
    


}
#endif
