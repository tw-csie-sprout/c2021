	
template<typename T>
int compare(T a, T b){
  if (a > b)
    return 1;
  else if (a == b)
    return 0;
  return -1;
}
 
int main(){
  int a = compare<int>(1, 2);
  double b = compare<double>(1.618, 3.141);

  return 0;
}
