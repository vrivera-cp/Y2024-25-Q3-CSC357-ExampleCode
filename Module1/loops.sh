x=0
while [ $x -lt 5 ]; do
    echo $x
    x=$(($x + 1))
done

for y in {1..4}; do
    echo $y
done