mkdir ./obj

build_ok=0

for file in ./src/*.cpp; do
  filename=$(basename -- "$file")
  filename="${filename%.*}"
  echo "compiling $filename"
  if ! $COMPILER -o "./obj/$filename.o" $file; then
    build_ok=1
  fi
done

if [ !$build_ok ]; then
  exit 1
fi

mkdir ./lib

for file in ./obj/*.o; do
  filename=$(basename -- "$file")
  filename="${filename%.*}"
  echo "compiling $filename"
  ar rcs ./lib/libstdex.a $file
done

