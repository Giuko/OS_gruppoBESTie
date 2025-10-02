cd firmware/code/
make init
cd ../../

mkdir qemu/build
cd qemu/build/
../configure --target-list=arm-softmmu
make

cd ../../firmware/code
make all
make qemu_start
