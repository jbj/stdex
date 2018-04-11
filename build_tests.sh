mkdir ./tests/bin
for file in ./tests/*.cpp; do
  filename=$(basename -- "$file")
  filename="${filename%.*}"
  echo "compiling test $filename"
  $COMPILER -std=c++99 -L./stdex/lib/ -lstdex -o "./tests/bin/$filename" $file
done