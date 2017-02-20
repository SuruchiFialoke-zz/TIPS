#ifndef ARRAY_FUNCS_H
#define ARRAY_FUNCS_H

// create and initialize a double 2d array
double** allocate2D(int x, int y)
{ 
  double** the_array = new double*[x];
  for ( int i=0; i<x; i++ )
  { 
    the_array[i] = new double[y];
    for ( int j=0; j<y; j++ )
    { 
      the_array[i][j] = 0.0;
    }
  }
  return the_array;
};

// create and initialize a double 3d array
double*** allocate3D(int x, int y, int z)
{ 
  double*** the_array = new double**[x];
  for ( int i=0; i<x; i++ )
  { 
    the_array[i] = new double*[y];
    for ( int j=0; j<y; j++ )
    { 
      the_array[i][j] = new double[z];
      for ( int k=0; k<z; k++ )
      { 
        the_array[i][j][k] = 0.0;
      }
    }
  }
  return the_array;
};
// create and initialize a double 4d array
double**** allocate4D(int x, int y, int z, int s)
{ 
  double**** the_array = new double***[x];
  for ( int i=0; i<x; i++ )
  { 
    the_array[i] = new double**[y];
    for ( int j=0; j<y; j++ )
    { 
      the_array[i][j] = new double*[z];
      for ( int k=0; k<z; k++ )
      { 
        the_array[i][j][k] = new double[s];
        for ( int l=0; l<s; l++)
        { 
          the_array[i][j][k][l] = 0.0;
        }
      }
    }
  }
  return the_array;
};

// free a double 2d array
void deallocate2D(double** the_array, int x, int y)
{
  for ( int i=0; i<x; i++ )
  {
    delete [] the_array[i];
  }
  delete [] the_array;
};
// free a double 3d array
void deallocate3D(double*** the_array, int x, int y, int z)
{
  for ( int i=0; i<x; i++ )
  {
    for ( int j=0; j<y; j++ )
    {
      delete [] the_array[i][j];
    }
    delete [] the_array[i];
  }
  delete [] the_array;
};

// free a double 4d array;
void deallocate4D(double**** the_array, int x, int y, int z, int s)
{
  for ( int i=0; i<x; i++ )
  {
    for ( int j=0; j<y; j++ )
    {
      for ( int k=0; k<z; k++)
      {
        delete [] the_array[i][j][k];
      }
      delete [] the_array[i][j];
    }
    delete [] the_array[i];
  }
  delete [] the_array;
};

// MAXMIN
double max_double_1darray(int nx, double *x)
{  
   double maxx=x[0];
   for(int i=1;i<nx;i++) {
      if(x[i]>maxx) maxx=x[i];
   }
   return (maxx);
}

double min_double_2darray(int nx, int ny, double **x)
{  
   double minx=x[0][0];
   for(int i=0;i<nx;i++) {
      for(int j=0;j<ny;j++) {
         if(x[i][j]<minx) {
            minx=x[i][j];
         }
      }
   }
   return(minx);
}

double max_double_2darray(int nx, int ny, double **x)
{  
   double maxx=x[0][0];
   for(int i=0;i<nx;i++) {
      for(int j=0;j<ny;j++) {
         if(x[i][j]>maxx) {
            maxx=x[i][j];
         }
      }
   }
   return(maxx);
}

int min_int_2darray(int nx, int ny, int **x)
{  
   int minx=x[0][0];
   for(int i=0;i<nx;i++) {
      for(int j=0;j<ny;j++) {
         if(x[i][j]<minx) {
            minx=x[i][j];
         }
      }
   }
   return(minx);
}

int max_int_2darray(int nx, int ny, int **x)
{
   int maxx=x[0][0];
   for(int i=0;i<nx;i++) {
      for(int j=0;j<ny;j++) {
         if(x[i][j]>maxx) {
            maxx=x[i][j];
         }
      }
   }
   return(maxx);
}
#endif

