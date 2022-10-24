main=do
putStrLn "Enter value for x"
no <- getLine
let x = (read no:: Int)
putStr ("Computed value for x^2+4x-3 is ")
print(x*x+4x-3)
