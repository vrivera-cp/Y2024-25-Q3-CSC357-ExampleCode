myvalues=({1..4})
myvalues[3]=100

echo ${myvalues[2]}
echo ${#myvalues[@]}

for value in "${myvalues[*]}"; do
    echo $value
done

for value in "${myvalues[@]}"; do
    echo $value
done
