cycles=$1
processors=$2
remains=$3

while (($(($remains != 0)))); do
  if (($(($remains <= $processors))))
  then
    for (( i=0; i<$remains; i++ )); do
      ./tb $cycles &
    done
    remains=0
    wait
  else
    for (( i=0; i<$processors; i++ )); do
      ./tb $cycles &
    done
    remains=$(($remains - $processors))
    wait
  fi
done
  
