//create a function that will return all negative values in the collection
int *getNegative(int arr[], int n) {
  int temp[10];
  int *negative, i, ctr;

  ctr = 0;
  for(i = 0; i<n; ++i) {
    if(arr[i] < 0) {
      temp[ctr++] = arr[i];
    }
  }
  temp[ctr++] = 0;
  
  negative = (int *) malloc(sizeof(int) * ctr);
  
  memcpy(negative, temp, sizeof(int)*ctr);
  
  return negative;
}

int getArrLength(int a[]) {
  int i;
  for(i=0; a[i] != 0; ++i) {}
  return i+1;
}


int main() {
  int a[10] = {-5, 10, 8, 4, 6, -3, 2, -1};
  int count = 8;
  int *result;
  int size;
  
  result = getNegative(a, count);
  size = getArrLength(result);
  
  result = (int *) realloc(result, sizeof(int)*size*2);
  
  return 0;
}




