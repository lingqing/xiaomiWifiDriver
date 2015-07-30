# xiaomiWifiDriver
Xiao Mi Wifi driver for linux

###### Usage #####
* download this driver in your path
* cd %path%/ and run "sudo make " && "make install"
* run "modprobe mt7601Usta"

###### Warn ######
* if your ubuntu system version is 14.04 or higher, it may be ok.
* otherwise modify the os/linux/rt_linux.c  
  from   
   pOSFSInfo->fsuid = *(int *)&current_fsuid();  
   pOSFSInfo->fsgid = *(int *)&current_fsgid();  
  to   
   pOSFSInfo->fsuid = current_fsuid();  
   pOSFSInfo->fsgid = current_fsgid();
