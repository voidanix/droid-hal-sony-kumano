%define vendor sony

%define rpm_vendor qualcomm

%define dhd_path dhd

%define droid_target_aarch64 1

%define have_custom_img_boot 1
%define have_custom_img_recovery 1

%define enable_dtbo_update 1

# want adreno quirks is required for browser at least, and other subtle issues
%define android_config \
#define WANT_ADRENO_QUIRKS 1\
%{nil}

# On Android 8+ the system partition is (intended to be) mounted on /.
%define makefstab_skip_entries / /vendor /dev/stune /dev/cpuset /sys/fs/pstore /dev/cpuctl /sys/fs/bpf /product /system /system_ext
Requires: droid-system

%define pre_actions /bin/sh setup-sources.sh

%define droid_src_build 1

%define straggler_files \
/system_ext \
/persist \
/product \
/sdcard \
/bugreports \
/cache \
/d
%{nil}

Source99: droid-hal-common.inc

