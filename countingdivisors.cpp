const int N = 1e6+10;
 
ll prime[N+1];
 
void countdivisors(){
 for(int j = 0 ; j <= N ; j++){
  prime[j] = 0;
 }
  for(ll i = 1 ; i <=N ; i++){
    for(ll j = i ; j <=N ; j+=i){
      prime[j] += 1;
    }
  }
 
}
void cntdiv(){
  ll n ; cin >> n ;
  int cnt = 0 ;
  for(int i = 1 ; i*i <= n ; i++){
          if(n%i == 0){
            cnt++;
          }
  }
}
 
int main(){
int t ; cin >> t ;
countdivisors();
while(t--){
 ll n ; cin >> n ;
 cout << prime[n]<< endl;
}
}
 
