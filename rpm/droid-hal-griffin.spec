%define device griffin

%define lunch_device aosp_j9110-user

%define straggler_files \
        /persist \
        /product \
        /product_services \
        /sdcard \
        /bugreports \
        /cache \
        /d

%include rpm/droid-hal-common.inc
%include dhd/droid-hal-device.inc
