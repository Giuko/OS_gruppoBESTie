cd qemu/build/
../configure --target-list=arm-softmmu
make

cd ../../firmware
make
make qemu_start