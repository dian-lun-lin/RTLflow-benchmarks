#!/usr/bin/bash

function abs_diff {
  diff=$(($1 >= $2 ? $1 - $2 : $2 - $1))
}

target_ticks=$1
times=$2
dir=$3
smallset_ticks=18000

files=()
ticks=()
res_files=()

while read -r line; do
  words=($line)
  files+=(${words[0]})
  ticks+=(${words[1]})
done < "traces.out"

# create directory
if [ ! -e $dir ]; then
  mkdir $dir
else
  rm -r $dir
  mkdir $dir
fi

cd ./$dir




for ((k=1; k<=times; ++k)); do
  cur_ticks=0
  diff=$target_ticks
  collect_files=()
  while [ $diff -ge $smallset_ticks ]; do
    
    id=$[$RANDOM % ${#ticks[@]}]
    try=$[${ticks[$id]} + $cur_ticks]
    if [[ $try -le $target_ticks ]]; then
      collect_files+=(${files[$id]})
      cur_ticks=$try
    fi

    abs_diff $cur_ticks $target_ticks
  done

  # generate files
  if [ ! -e tb$k ]; then
    mkdir tb$k
  else
    rm -r tb$k
    mkdir tb$k
  fi

  cd ./tb$k

  for cf in ${collect_files[@]}; do
    cp -r ../../traces/$cf ./
  done
  cd ../

done



