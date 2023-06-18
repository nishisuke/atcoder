
int main {
  do{
    for(int i=0; i<4; i++){
      cout<<array[i];
      if(i!=3)cout<<" ";
    }
    cout<<endl;
  }while(next_permutation(array,array+4));
}
