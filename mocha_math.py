t = int(input());
while(t):
 
  n = int(input());
  i=0;
  l =[];
  while(i<n):
    l.insert(i,(int(input())));
    i+=1;
  
  list.sort();

  maxi = l[n-1];

  i=0;
  ans = 1000000;
  while(i<n-1):
    if(ans>(maxi & l[i])):
      ans = maxi&l[i];
    i+=1;

print(ans);

t-=1;


