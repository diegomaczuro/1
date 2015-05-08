#include "xswap.h"
/**
cblas_scopy:  берет массив х, в котором элементы с шагом incx, записывает в массив y с шагом incy
  *х адрес первого массива
  incx шаг для элементов а первом массиве
  *y адрес второго массива
  incy шаг для элементов второго массива
*/


void cblas_scopy (const int n, const float *x, const int incx, float *y, const int incy){

 for(int i=0; i<n; i++)
  { 
   *x[i*incx]=*y[i*incy];
  
   }
}

/**
cblas_dcopy:  берет массив х, в котором элементы с шагом  incx, записывает в массив y с шагом incy
  *х адрес первого массива
  incx шаг для элементов а первом массиве
  *y адрес второго массива
  incy шаг для элементов второго массива
*/

void cblas_dcopy (const int n, const double *x, const int incx, double *y, const int incy){
 for(int i=0; i<n; i++)
  { 
   *x[i*incx]=*y[i*incy];
  
   }
   
}

