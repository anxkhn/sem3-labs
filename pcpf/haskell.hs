#1
fib :: Int -> Int
fib 0 = 0
fib 1 = 1
fib n = fib (n-1) + fib (n - 2)

fibList n = map fib[0..n]

main = 
    do
    putStrLn "Enter number of fibo : "
    x <- readLn
    print (fibList x)

#2
module Main where

fib n = ((n*n)+(4*n)-5)

main = do putStrLn "Enter value of x : "
          x <- readLn
          print(fib x)


#3
-- mergIst::[Int]->[Int]->[Int]
mergIst [][]z = reverse z
mergIst (x:xs)[] z= mergIst xs [] (x:z)
mergIst[] (y:ys) z= mergIst [] ys (y:z)
mergIst (x:xs) (y:ys) z= if x<=y then mergIst xs (y:ys) (x:z) else mergIst (x:xs) ys (y:z)
main = print(mergIst[1,4,8,20][-4,1,0,6,9,30][])
