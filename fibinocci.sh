echo "enter the number"
read n
x=0
y=1
for ((i=1;i<=n;i++))
do echo $x
f=$(($x+$u))
x=$u
y=$f
done
