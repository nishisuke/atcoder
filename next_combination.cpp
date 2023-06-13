int next_combination(int sub) {
  int x = sub & -sub, y = sub + x;
  return (((sub & ~y) / x) >> 1) | y;
}
// for (int bit = (1<<k)-1;bit < (1<<n); bit = next_combination(bit)) {
//   rep(i,n) {
//     if (bit & (1<<i))  {
//     }
//   }
// }
