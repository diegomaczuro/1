#include "xswap.h"


void cblas_scopy (const int n, const float *x, const int incx, float *y, const int incy){

 for(int i=0; i<n; i++)
  { 
   *x[i*incx]=*y[i*incy];
  
   }
   

}

void cblas_dcopy (const int n, const double *x, const int incx, double *y, const int incy){
 for(int i=0; i<n; i++)
  { 
   *x[i*incx]=*y[i*incy];
  
   }
   
}

