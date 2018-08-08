mkdir ./tests/bin

build_ok=1
exclude_warn=""

$COMPILER -v

if [[ $COMPILER = *"clang"* ]]; then
  exclude_warn="-Wno-c++11-long-long -Wno-non-literal-null-conversion"
else
  exclude_warn="-Wno-long-long"
fi

if [[ $COMPILER = *"g++-4."* ]]; then
  echo "c++03 option is not supported"
else
  for file in ./tests/*.cpp; do
    filename=$(basename -- "$file")
    filename="${filename%.*}"
    echo "compiling test c++03 $filename"
    if ! $COMPILER -std=c++03 -pedantic $exclude_warn $file -L./stdex/lib/ -lstdex -lrt -lpthread -o "./tests/bin/$filename"; then
      build_ok=0
    fi
  done
fi

if [ $build_ok -eq 0 ]; then
  echo "tests build failed"
  exit 3
fi

for file in ./tests/*.cpp; do
  filename=$(basename -- "$file")
  filename="${filename%.*}"
  echo "compiling test c++98 $filename"
  if ! $COMPILER -std=c++98 -pedantic $exclude_warn $file -L./stdex/lib/ -lstdex -lrt -lpthread -o "./tests/bin/$filename"; then
    build_ok=0
  fi
done

if [ $build_ok -eq 0 ]; then
  echo "tests build failed for c++98"
  exit 98
fi