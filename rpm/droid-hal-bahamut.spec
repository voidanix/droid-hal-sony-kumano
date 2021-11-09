%define device bahamut

%define lunch_device aosp_j9210-user; cd kernel/sony/msm-4.14/common-kernel; ./build-kernels-clang.sh -d %{device} -O ../../../../out/target/product/%{device}/obj/kernel; cp dtbo-%{device}.img ../../../../out/target/product/%{device}/dtbo.img; cd -

%include rpm/droid-hal-common.inc
%include dhd/droid-hal-device.inc
