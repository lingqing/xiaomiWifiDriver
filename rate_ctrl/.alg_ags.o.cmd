cmd_/home/andy/XMWifiDri/os/linux/../../rate_ctrl/alg_ags.o := gcc -Wp,-MD,/home/andy/XMWifiDri/os/linux/../../rate_ctrl/.alg_ags.o.d  -nostdinc -isystem /usr/lib/gcc/i686-linux-gnu/4.8/include  -I/usr/src/linux-headers-3.13.0-24-generic/arch/x86/include -Iarch/x86/include/generated  -Iinclude -I/usr/src/linux-headers-3.13.0-24-generic/arch/x86/include/uapi -Iarch/x86/include/generated/uapi -I/usr/src/linux-headers-3.13.0-24-generic/include/uapi -Iinclude/generated/uapi -include /usr/src/linux-headers-3.13.0-24-generic/include/linux/kconfig.h -Iubuntu/include  -D__KERNEL__ -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -O2 -m32 -msoft-float -mregparm=3 -freg-struct-return -mno-mmx -mno-sse -fno-pic -mpreferred-stack-boundary=2 -march=i686 -mtune=generic -maccumulate-outgoing-args -Wa,-mtune=generic32 -ffreestanding -fstack-protector -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -DCONFIG_AS_CFI_SECTIONS=1 -DCONFIG_AS_AVX=1 -DCONFIG_AS_AVX2=1 -pipe -Wno-sign-compare -fno-asynchronous-unwind-tables -mno-sse -mno-mmx -mno-sse2 -mno-3dnow -mno-avx -Wframe-larger-than=1024 -Wno-unused-but-set-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -pg -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -DCC_HAVE_ASM_GOTO -DAGGREGATION_SUPPORT -DPIGGYBACK_SUPPORT -DWMM_SUPPORT -DLINUX -Wall -Wstrict-prototypes -Wno-trigraphs -DSYSTEM_LOG_SUPPORT -DRT28xx_MODE=STA -DCHIPSET=7601U -DRESOURCE_PRE_ALLOC -I/home/andy/XMWifiDri/include -DCONFIG_STA_SUPPORT -DSCAN_SUPPORT -DDBG -DWPA_SUPPLICANT_SUPPORT -DNATIVE_WPA_SUPPLICANT_SUPPORT -DDOT11_N_SUPPORT -DDOT11N_DRAFT3 -DSTATS_COUNT_SUPPORT -DMT7601U -DMT7601 -DRLT_MAC -DRLT_RF -DRTMP_MAC_USB -DRTMP_USB_SUPPORT -DRTMP_TIMER_TASK_SUPPORT -DRX_DMA_SCATTER -DVCORECAL_SUPPORT -DRTMP_EFUSE_SUPPORT -DNEW_MBSSID_MODE -DRTMP_INTERNAL_TX_ALC -DCONFIG_ANDES_SUPPORT -DDPD_CALIBRATION_SUPPORT -DCONFIG_RX_CSO_SUPPORT -DRTMP_FREQ_CALIBRATION_SUPPORT  -DMODULE  -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(alg_ags)"  -D"KBUILD_MODNAME=KBUILD_STR(mt7601Usta)" -c -o /home/andy/XMWifiDri/os/linux/../../rate_ctrl/.tmp_alg_ags.o /home/andy/XMWifiDri/os/linux/../../rate_ctrl/alg_ags.c

source_/home/andy/XMWifiDri/os/linux/../../rate_ctrl/alg_ags.o := /home/andy/XMWifiDri/os/linux/../../rate_ctrl/alg_ags.c

deps_/home/andy/XMWifiDri/os/linux/../../rate_ctrl/alg_ags.o := \
    $(wildcard include/config/sta/support.h) \

/home/andy/XMWifiDri/os/linux/../../rate_ctrl/alg_ags.o: $(deps_/home/andy/XMWifiDri/os/linux/../../rate_ctrl/alg_ags.o)

$(deps_/home/andy/XMWifiDri/os/linux/../../rate_ctrl/alg_ags.o):
